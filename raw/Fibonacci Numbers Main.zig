// zig run Fibonacci\ Numbers\ 01.zig <<< "54774730983471038"
const std = @import("std");

pub fn main() !void {
    var buf: [18]u8 = undefined;
    const len = try std.io.getStdIn().readAll(&buf);
    const num = std.mem.trimRight(u8, buf[0..len], &std.ascii.whitespace);
    const n = try std.fmt.parseInt(u64, num, 10);
    // try std.fmt.formatInt(fib(n), 10, .lower, .{}, std.io.getStdOut().writer());
    try std.io.getStdOut().writer().print("{}\n", .{fib(n)});
}

inline fn fib(n: u64) u64 {
    if (n == 0) {
        return 0;
    }
    var a: u64 = 0;
    var b: u64 = 1;
    var m = @as(u64, 1) << 63 - @as(u6, @truncate(@clz(n)));
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
    try std.testing.expectEqual(0, fib(0));
    try std.testing.expectEqual(1, fib(1));
    try std.testing.expectEqual(1, fib(2));
    try std.testing.expectEqual(705147960, fib(123));
    try std.testing.expectEqual(589888339, fib(999));
    try std.testing.expectEqual(795317107, fib(54774730983471038));
    try std.testing.expectEqual(612672462, fib(892554011148727159));
    try std.testing.expectEqual(225934010, fib(737092469269050571));
    try std.testing.expectEqual(952625812, fib(854441722044072015));
    try std.testing.expectEqual(156267461, fib(575215414845518653));
    try std.testing.expectEqual(2, fib(3));
    try std.testing.expectEqual(0, fib(1000000008));
}
