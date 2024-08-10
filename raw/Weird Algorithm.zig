//! # [Weird Algorithm](https://cses.fi/problemset/task/1068)
//!
//! Consider an algorithm that takes as input a positive integer `n`. If `n` is
//! even, the algorithm divides it by two, and if `n` is odd, the algorithm
//! multiplies it by three and adds one. The algorithm repeats this, until `n`
//! is one. For example, the sequence for `n = 3` is as follows:
//!
//! `3 → 10 → 5 → 16 → 8 → 4 → 2 → 1`
//!
//! Your task is to simulate the execution of the algorithm for a given value of
//! `n`.
const std = @import("std");

/// 1 ≤ n ≤ 10⁶
fn solution(allocator: std.mem.Allocator, n: u32) ![]const u32 {
    var sequence = std.ArrayList(u32).init(allocator);
    var m = n;
    while (m != 1) {
        try sequence.append(m);
        if (m & 1 == 0) {
            m /= 2;
        } else {
            m = m * 3 + 1;
        }
    }
    try sequence.append(1);
    return sequence.toOwnedSlice();
}

test {
    const sequence = try solution(std.testing.allocator, 3);
    defer std.testing.allocator.free(sequence);
    try std.testing.expectEqualSlices(u32, &.{ 3, 10, 5, 16, 8, 4, 2, 1 }, sequence);
}
