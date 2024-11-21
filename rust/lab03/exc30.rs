/**
Zaimplementować funkcję `swap_pairs` która zamienia miejscami składniki w `Pair`.
**/

struct Pair<T, U> {
    first: T,
    second: U,
}

// Generyczna funkcja `swap_pairs`, która zamienia miejscami elementy w parze.
fn swap_pairs {}

fn main() {
    let original_pair = Pair { first: 42, second: "hello" };
    let swapped_pair = swap_pairs(original_pair);

    println!("Swapped Pair: ({}, {})", swapped_pair.first, swapped_pair.second); // Swapped Pair: (hello, 42)
}
