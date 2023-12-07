#include <iostream>

/* Wykorzystjąc TMP (Template Meta Programming) narysować świąteczne drzewko.
   Zabronione jest korzystanie z pętli, instrukcji warunkowych itp.
*/

int main()
{
    ChristmasTree<5>::print();
    return 0;
}

/* Oczekiwane wyjście:
    *
    
   ***
   
  *****
  
 *******
 
*********

/*
