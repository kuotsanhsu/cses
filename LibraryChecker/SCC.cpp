// https://judge.yosupo.jp/problem/scc
#include <iostream>
#include <vector>
#include <stack>
#include <functional>
#include <algorithm>
#include <iterator>

constexpr auto MAX_VERTEX_COUNT = 500'000;

struct Vertex {
    int index = -1;
    std::vector<std::reference_wrapper<Vertex>> children;
};

int main() {
    std::cin.tie(nullptr)->sync_with_stdio(false);

    int vertexCount, edgeCount;
    std::cin >> vertexCount >> edgeCount;
    std::vector<Vertex> vertices(vertexCount);
    for (int source, target; std::cin >> source >> target;) {
        vertices[source].children.emplace_back(vertices[target]);
    }
  
    std::vector<std::reference_wrapper<Vertex>> s;
    std::vector<std::vector<std::reference_wrapper<Vertex>>> sccs;
    auto tarjan = [&s, &sccs](auto&& tarjan, Vertex& vertex) -> int {
        auto lowLink = vertex.index = s.size();
        for (Vertex& child : s.emplace_back(vertex).get().children) {
            lowLink = std::min(lowLink, child.index == -1 ? tarjan(tarjan, child) : child.index);
        }
        if (lowLink == vertex.index) {
            const auto here = s.begin() + vertex.index;
            for (Vertex& v : sccs.emplace_back(s.rbegin(), std::reverse_iterator(here))) {
                v.index = MAX_VERTEX_COUNT;
            }
            s.erase(here, s.end());
        }
        return lowLink;
    };
    
    for (auto& vertex : vertices) {
        if (vertex.index == -1) {
            tarjan(tarjan, vertex);
        }
    }
    std::reverse(sccs.begin(), sccs.end());
    for (auto index = 0; auto& vertex : vertices) {
        vertex.index = index++;
    }
    
    std::cout << sccs.size() << '\n';
    for (const auto& scc : sccs) {
        std::cout << scc.size();
        for (const Vertex& vertex : scc) {
            std::cout << ' ' << vertex.index;
        }
        std::cout << '\n';
    }
}