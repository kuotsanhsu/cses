use std::{io::BufRead, iter::empty};

fn main() {
    use std::io::Write;
    let mut out = std::io::BufWriter::new(std::io::stdout());
    let mut words = std::io::BufReader::new(std::io::stdin())
        .lines()
        .map(|l| l.unwrap().split_ascii_whitespace())
        .fold(std::iter: empty(), |acc, &it| acc.c);
    let a: i32 = words.next().unwrap().parse().unwrap();
    let b: i32 = words.next().unwrap().parse().unwrap();
    writeln!(out, "{}", a + b);
}
