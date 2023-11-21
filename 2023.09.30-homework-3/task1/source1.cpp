#include <iostream>

int main(int argc, char* argv[])
{
    long int t = 0; // time in seconds
    long int n = 1;
    long int k = 1; // amount of numbers equal to n which we should print
    std::cin >> t;
    for (long int i = 1; i <= t; i++)
    {
        if (k != n)
        {
            k++;
            std::cout << n << " ";
        }
        else
        {
            std::cout << n << " ";
            k = 1;
            n++;
        }
    }
    return EXIT_SUCCESS;

}