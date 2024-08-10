//! # [Repetitions](https://cses.fi/problemset/task/1069)
//!
//! You are given a DNA sequence: a string consisting of characters A, C, G,
//! and T. Your task is to find the longest repetition in the sequence. This is
//! a maximum-length substring containing only one type of character.
const std = @import("std");

/// 1 ≤ n ≤ 10⁶
fn solution(sequence: []const u8) u20 {
    var length: u20 = 0;
    var maximum_length = length;
    var prev_nucleotide: u8 = 0;
    for (sequence) |nucleotide| {
        if (prev_nucleotide == nucleotide) {
            length += 1;
            maximum_length = @max(maximum_length, length);
        } else {
            length = 1;
        }
        prev_nucleotide = nucleotide;
    }
    return maximum_length;
}

test {
    try std.testing.expectEqual(3, solution("ATTCGGGA"));
}
