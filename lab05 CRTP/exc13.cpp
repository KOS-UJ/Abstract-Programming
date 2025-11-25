/***
* Zaimplementować hierarchię klas wykorzystującą CRTP, która pozwala:
* - Wymuszać implementację metody void logCreation() w klasach pochodnych.
* - Automatycznie zliczać, ile obiektów danej klasy (pochodnej) zostało
*   utworzonych i zniszczonych — oddzielnie dla każdej klasy.
* - Umożliwiać dostęp do aktualnej liczby żyjących obiektów danej klasy
*   poprzez metodę statyczną int getLiveCount().
* - Zademonstruj działanie na dwóch różnych klasach, np. Car i Plane.
 */
