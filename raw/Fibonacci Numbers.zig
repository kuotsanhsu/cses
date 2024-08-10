//! # [Fibonacci Numbers](https://cses.fi/problemset/task/1722)
//!
//! The Fibonacci numbers can be defined as follows:
//! * `F₀ = 0`
//! * `F₁ = 1`
//! * `Fₙ = Fₙ₋₁ + Fₙ₋₂`
//! Your task is to calculate the value of `Fₙ` for a given `n`.
const std = @import("std");

/// ## Input
/// The only input line has an integer `n`.
/// ## Output
/// Print the value of `Fₙ` modulo `10⁹ + 7`.
/// ## Constraints
/// * `0 ≤ n ≤ 10¹⁸`
fn solution(n: u64) u64 {
    if (n == 0) {
        return 0;
    }
    var a: u64 = 0;
    var b: u64 = 1;
    var m = @as(u64, 1) << 63 - @as(u6, @intCast(@clz(n)));
    while (m != 0) {
        const MOD: u64 = 1e9 + 7;
        const c = a * a + b * b;
        if (m & n == 0) {
            a *= 2 * b + (MOD - a);
            b = c;
        } else {
            b *= 2 * a + b;
            a = c;
        }
        a %= MOD;
        b %= MOD;
        m >>= 1;
    }
    return a;
}

test {
    try std.testing.expectEqual(55, solution(10));

    try std.testing.expectEqual(0, solution(0));
    try std.testing.expectEqual(1, solution(1));
    try std.testing.expectEqual(1, solution(2));
    try std.testing.expectEqual(705147960, solution(123));
    try std.testing.expectEqual(589888339, solution(999));
    try std.testing.expectEqual(795317107, solution(54774730983471038));
    try std.testing.expectEqual(612672462, solution(892554011148727159));
    try std.testing.expectEqual(225934010, solution(737092469269050571));
    try std.testing.expectEqual(952625812, solution(854441722044072015));
    try std.testing.expectEqual(156267461, solution(575215414845518653));
    try std.testing.expectEqual(2, solution(3));
    try std.testing.expectEqual(0, solution(1000000008));
}
