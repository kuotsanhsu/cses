// const Collatz = @import("Weird Algorithm.zig");
// const @"1083" = @import("Missing Number.zig");
// const rep = @import("Repetitions.zig");
// const Fibonacci = @import("Fibonacci Numbers.zig");

// test {
//     @import("std").testing.refAllDecls(@This());
// }

// ⁰¹²³⁴⁵⁶⁷⁸⁹⁺⁻⁼⁽⁾ⁿ₀₁₂₃₄₅₆₇₈₉₊₋₌₍₎ₘₙₚ≤
comptime {
    // Introductory Problems
    _ = @import("Weird Algorithm.zig");
    _ = @import("Missing Number.zig");
    _ = @import("Repetitions.zig");

    // Tree Algorithms
    _ = @import("Subordinates.zig");

    // Mathematics
    _ = @import("Fibonacci Numbers.zig");
}
