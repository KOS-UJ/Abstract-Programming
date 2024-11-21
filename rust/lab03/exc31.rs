use std::fmt::Display;
// Dla `{:?}`.
use std::fmt::Debug;

struct MyGenericStruct<T: Debug + Display> {  // MULTIPLE TRAITS
value: T,
}

// Konkretna implementacja dla i32
impl MyGenericStruct<i32> {
    fn method(&self) {
        println!("This is a implementation for i32: {}", self.value);
    }
}

// Generyczna implementacja dla dowolnego typu T
impl<T: Debug + Display> MyGenericStruct<T> {
    // fn method(&self) {
    //     println!("This is a implementation for generic: {}", self.value);
    // }

    fn generic_method(&self) {
        println!("This is a generic implementation: {}", self.value);
    }
}

fn main() {
    // Utworzenie instancji dla i32
    let specific_instance = MyGenericStruct { value: 42 };

    // Wywołanie metody konkretnej implementacji dla i32
    specific_instance.method();

    // Utworzenie instancji dla innego typu, np. &str
    let generic_instance = MyGenericStruct { value: "hello" };

    // Wywołanie metody generycznej dla dowolnego typu T
    generic_instance.generic_method();

    // TODO: Wywołanie metody dla dowolnego typu T
    // generic_instance.method();
}
