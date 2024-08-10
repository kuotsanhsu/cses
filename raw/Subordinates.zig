//! # [Subordinates](https://cses.fi/problemset/task/1674)
//!
//! Given the structure of a company, your task is to calculate for each
//! employee the number of their subordinates.
const std = @import("std");

/// `2 ≤ n ≤ 2e5`
fn solution(direct_boss: []const u17) []const u17 {
    var allocator = (std.heap.GeneralPurposeAllocator(.{}){}).allocator;
    var direct_subordinate_count = try std.BoundedArray(u32, 2e5).init(direct_boss.len + 1);
    for (direct_boss) |i| {
        direct_subordinate_count[i - 1] += 1;
    }
    var subordinate_count = try std.BoundedArray(u32, 2e5).init(direct_subordinate_count.len);
    for (direct_subordinate_count, 0..) |n, j| {
        if (n == 0) {
            subordinate_count[direct_boss[j]] += subordinate_count[j] + 1;
        }
    }
}
