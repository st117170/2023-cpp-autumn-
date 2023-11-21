#include <iostream>

int main()
{
	int n = 0;
	std::cin >> n;
	std::cout << (n * (n + 1)) / 2; // case when n < 0 is not taken into account
	return EXIT_SUCCESS;
}