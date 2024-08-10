//! [Missing Number](https://cses.fi/problemset/task/1083)
//!
//! You are given all numbers between `1,2,...,n` except one. Your task is to
//! find the missing number.
const std = @import("std");

/// `2 ≤ n ≤ 10⁵`
fn solution(numbers: []const u18) u18 {
    const n = numbers.len + 1;
    // var sum = (n >> 1) * n + (n >> (n & 1 ^ 1));
    var sum = n * (n + 1) / 2;
    for (numbers) |number| {
        sum -= number;
    }
    return @intCast(sum);
}

test {
    try std.testing.expectEqual(4, solution(&.{ 2, 3, 1, 5 }));
}
