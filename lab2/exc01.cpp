#include<iostream>


int main()
{
    try
    {
        throw intentional_error("70mln");
    }
    catch (intentional_error &e)
    {
        std::cout << e.what() << std::endl;
    }
}  