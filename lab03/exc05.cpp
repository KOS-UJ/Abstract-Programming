#include <cmath>
#include <iostream>
#include <iomanip>


/***
 * (i) Proszę "przerobić" kod na double.
 * (ii) Proszę uogólnić na "wszystkie" typy.
***/

float bisection(float function(float), float min, float max, float tol) 
{
    float fmin = function(min), mid;
    while (mid = (min + max) / 2, 
           std::abs(max - min) > tol) 
    {
        float fmid = function(mid);
        if (fmid * fmin > 0)
            min = mid, fmin = fmid;
        else
            max = mid;
    }
    return mid;
}


float f(float T)
{
    float p_atm = 50;
    float e_s = std::pow(10, 7.5 * T / (T + 237.3));
    e_s *= .611;
    return p_atm - e_s;
}

int main() 
{
    std::cerr << "T_wrzenia na Mont Blanc to ~ "
              << bisection (f, 0., 100., 1.) 
              << " C" << std::endl;
}
