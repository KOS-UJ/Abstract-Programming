/**
 Przeczytać: https://stevedonovan.github.io/rust-gentle-intro/2-structs-enums-lifetimes.html
 Zaimplementować klasę "Biblioteka" która posiada dwa indeksy zaimplementowane
 za pomocą drzew binarnych. Pierwszy szereguje czytelników alfabetycznie po nazwisku,
 a drugi po wieku. W przypadku równości danej wartości kolejność dowolna.

 Klasa Czytelnik ma trzy pola: Imię, Nazwisko, Wiek.
**/

fn main() {
    let mut biblioteka = Biblioteka::new();

    let czytelnik1 = Czytelnik::new("Bartek", "Bar", 43);
    let czytelnik2 = Czytelnik::new("Anna", "Ann", 15);

    biblioteka.dodaj_czytelnika(czytelnik1);
    biblioteka.dodaj_czytelnika(czytelnik2);

    biblioteka.wypisz_indeksy();
    // Oczekiwane wyjście:
    // Indeks Nazwisk:
    // Ann Anna, 15
    // Bar Bartek, 43
    //
    // Indeks Wieku:
    // 15, Ann Anna
    // 43, Bar Bartek
}