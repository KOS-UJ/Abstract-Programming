struct A;          // Konkretny typ `A`
struct S(A);       // Konkretny typ `S` (tuple struct)
struct SGen<T>(T); // Generyczny typ `SGen`

// Poniższe funkcje wszystkie przejmują własność zmiennej przekazanej do nich
// i natychmiast wychodzą ze zasięgu, zwalniając zmienną. "Zjadają" zmienną.

// Funkcja `reg_fn`, która przyjmuje argument `_s` typu `S`.
// Nie posiada `<T>`, co oznacza, że NIE jest to funkcja generyczna.
fn reg_fn(_s: S) {}

// Funkcję `gen_spec_t`, która przyjmuje argument `_s` typu `SGen<T>`.
// Wprost podano parametr typu `A`, ale ponieważ `A` nie zostało
// określone jako generyczny parametr typu dla `gen_spec_t`, NIE jest to funkcja generyczna.
fn gen_spec_t(_s: SGen<A>) {}

// Funkcję `gen_spec_i32`, która przyjmuje argument `_s` typu `SGen<i32>`.
// Wprost podano parametr typu `i32`, który jest określonym typem.
// Ponieważ `i32` nie jest generycznym typem, ta funkcja również NIE jest generyczna.
fn gen_spec_i32(_s: SGen<i32>) {}

// Funkcję `generic`, która przyjmuje argument `_s` typu `SGen<T>`.
// Ponieważ `SGen<T>` poprzedza `<T>`, ta funkcja jest generyczna względem `T`.
fn generic<T>(_s: SGen<T>) {}

// SOLUTION 1.
fn print_info {}

fn main() {
    // Użycie funkcji niegenerycznych
    reg_fn(S(A));          // Konkretny typ.
    gen_spec_t(SGen(A));   // Implicytnie określony parametr typu `A`.
    gen_spec_i32(SGen(6)); // Implicytnie określony parametr typu `i32`.

    // Eksplicytnie określony parametr typu `char` dla `generic()`.
    generic::<char>(SGen('a'));

    // Implicytnie określony parametr typu `char` dla `generic()`.
    generic(SGen('c'));


    /**
    1. Zaimplementuj generyczną funkcję `print_info`
    przyjmującą dowolny argument generyczny `SGen<T>`.
    Funkcja powinna wyświetlić informację o typie
    w `SGen` np. "Type: i32" dla `SGen(42)`.
     **/
    // print_info(SGen(42));          // Type: i32
    // print_info(SGen('a'));         // Type: char
    // print_info(SGen("hello"));     // Type: &'str

}
