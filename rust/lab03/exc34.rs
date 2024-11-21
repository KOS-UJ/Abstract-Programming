/**
Zdefiniuj generyczny `trait Processed`, który będzie zawierał jedną metodę: `process`.
Następnie stwórz dwie struktury: `MyStructA` i `MyStructB`, które implementują ten trait.

W przypadku MyStructA: `process` zwraca pierwiastek kwadratowy `value: i32`.
W przypadku MyStructB: `process` zwraca długość napisu przechowywanego w strukturze.
 **/

use std::fmt::Debug;
struct MyStructA {
    value: i32,
}
struct MyStructB {
    value: String,
}

// Zdefiniuj generyczny trait `Processed`
// TODO

// Implementacja dla MyStructA
// TODO

// Implementacja dla MyStructB
// TODO

// Implementacja generycznej funkcji która wypisuje "Przeprocesowane: {<item.process()>:?}"
// TODO

fn main() {
    // Utwórz instancję MyStructA
    let struct_a_instance = MyStructA { value: 16 };

    // Wywołaj metodę `process` dla MyStructA
    print_processed(struct_a_instance);

    // Utwórz instancję MyStructB
    let struct_b_instance = MyStructB { value: String::from("Hello, World!") };

    // Wywołaj metodę `process` dla MyStructB
    print_processed(struct_b_instance);
}
