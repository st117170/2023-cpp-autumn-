#include <iostream>

int main()
{
    int y = 0;
    std::cin >> y;
    ((y % 400 == 0) || ((y % 4 == 0) && (y % 100 != 0))) ? (std::cout << "YES") : (std::cout << "NO");

    return EXIT_SUCCESS;
}