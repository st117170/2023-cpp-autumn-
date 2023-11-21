#include <iostream>

int main(int argc, char* argv[])
{
    long int x = 0;
    long int ans = 0;
    std::cin >> x;

    while (x >= 10)
    {
        int temp = x % 10;
        ans += temp;
        ans *= 10;
        x /= 10;
    }
    std::cout << ans + x;
    return EXIT_SUCCESS;

}