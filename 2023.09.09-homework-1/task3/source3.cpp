#include <iostream>

int main()
{
	long long n = 0;
	std::cin >> n;
	long long n_10 = n / 10;
	std::cout << (n_10) * (n_10 + 1) * 100 + 25 << std::endl;
	return EXIT_SUCCESS;
}