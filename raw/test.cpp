#include <iostream>
int main() {
    int moves = 0;
    for (int i = 0; i < 16; ++i) {
        moves = moves * 2 + 1;
        std::cout << "\"" << moves << "\\n\", ";
    }
}