#include <iostream>

int main()
{
    int k = 0;
    int m = 0;
    int n = 0;
    int t = 0;
    std::cin >> k;
    std::cin >> m;
    std::cin >> n;

    if (n <= k)
    {
        t = 2 * m;
    }
    else
    {
        t = (2 * (n / k)) * m;
        if ((n % k != 0) && ((n % k) != (k / 2)))
        {
            t += m;
        }
    }

    std::cout << t;
    return EXIT_SUCCESS;
}