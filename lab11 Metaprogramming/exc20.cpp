#include <iostream>

/* Wykorzystując TMP (Template Meta Programming) narysować świąteczne drzewko.
   Zabronione jest korzystanie z pętli, instrukcji warunkowych itp.
   Wymagania:
   1. Podstawowe: Drzewko o wysokości N zbudowane z gwiazdek '*'.
   2. (*)   Dodać korzeń do drzewka (wypisany jako '#' pod spodem).
   3. (**)  Dodać drugi parametr szablonu (bool DRESSED), który jeśli jest true,
            dodaje bombki ('o') co N-ty znak drzewka, licząc ciągiem od samej góry,
            od lewej do prawej.
   4. (***) Dla ujemnej wartości N narysować drzewko odwrócone (szersze u góry),
            zbudowane z pni ('#') i popękanych bombek ('x') pojawiających się
            co |N|-ty znak, licząc od góry. Na samym dole (jako korzeń)
            powinna znaleźć się gwiazdka '*'.
*/

int main()
{
    ChristmasTree<5>::print();
    ChristmasTree<5, true>::print();
    return 0;
}

/* Oczekiwane wyjście dla N=5, wersja podstawowa:
    *

   ***

  *****

 *******

*********

*/
/* Oczekiwane wyjście dla N=5:
    *

   ***

  *****

 *******

*********
    #
*/
/* Oczekiwane wyjście dla N=5, DRESSED=true:
    *

   ***

  o****

 o****o*

***o****o
    #
*/
/* Oczekiwane wyjście dla N=-5, DRESSED=true:
####x####

 x####x#

  ###x#

   ###

    x
    *
*/
