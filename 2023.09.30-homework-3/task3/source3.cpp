#include <iostream>

int main(int argc, char* argv[])
{
    int long n = 0;
    int long ans = 0;
    int i = 1;
    std::cin >> n;

    while (i * i < n)
    {
        if (n % i == 0)
        {
            ans += 2;
        }
        i++;
    }

    if (n == i * i)
    {
        ans += 1;
    }

    std::cout << ans;
    return EXIT_SUCCESS;

}