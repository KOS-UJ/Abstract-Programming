trait TraitB {}
trait TraitC {}
trait TraitE {}
trait TraitF {}


impl <A: TraitB + TraitC, D: TraitE + TraitF> MyTrait<A, D> for YourType {}

// To samo
// impl <A, D> MyTrait<A, D> for YourType where
//     A: TraitB + TraitC,
//     D: TraitE + TraitF {}

//--------------------------------------------------------------------------------------------------

use std::fmt::Debug;

trait PrintInOption {
    fn print_in_option(self);
}

// `where` przydaje się dla niebezpośrednich wymagań:
impl<T> PrintInOption for T where
    Option<T>: Debug {

    fn print_in_option(self) {
        println!("{:?}", Some(self));
    }
}

fn main() {
    let vec = vec![1, 2, 3];

    vec.print_in_option();
}
