/***
 * Zaimplementować program w C++, który przetwarza dane sprzedażowe.
 * Dane są zapisane jako liczby całkowite, które reprezentują sprzedaż w poszczególnych dniach miesiąca.
 * Dane wejściowe mogą zawierać błędne dane (np. tekst zamiast liczby), co należy obsłużyć przy użyciu `std::expected`.
 * Następnie dane te należy podzielić na tygodnie (każdy tydzień to 7 dni) przy użyciu `std::ranges::chunk`.
 * Program powinien wyświetlić średnią sprzedaż dla każdego tygodnia w formacie sformatowanym za pomocą `std::print`.
*/

// Input data:
"100 200 150 300 400 250 350 500 600 550 650 700 no_data 750 800 null 850 900 no_data null 1000 315"

/*
 * Expected output:
Average sales:  $425.68
Week 1:         $250.00
Week 2:         $535.71
Week 3:         $507.14
Week 4:         $315.00
*/