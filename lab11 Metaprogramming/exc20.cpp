#include <iostream>

/* Wykorzystjąc TMP (Template Meta Programming) narysować świąteczne drzewko.
   Zabronione jest korzystanie z pętli, instrukcji warunkowych itp.
   Drzewko powinno być wysokości N (parametr szablonu).
   Zadania dodatkowe:
   (*)   Dodać korzeń do drzewka (Wypisany jako '#')
   (**)  Dodać drugi parametr który jeżeli jest true to dodaje bombki (wypisane jako 'o')
         co N-ty znak drzewka licząc od góry i od lewej do prawej.
   (***) Dla ujemnej wartości N naarysować drzewko odwrotne tj. zbudowane z korzeni i
         popękanych bombek ('x') co N-ty znak drzewka licząc od góry i od lewej do prawej.
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
