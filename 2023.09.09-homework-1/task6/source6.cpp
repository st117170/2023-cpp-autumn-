#include <iostream>

int main()
{
	int a = 0;
	int b = 0;
	std::cin >> a;
	std::cin >> b;
	int a_ = a / b;
	int b_ = b / a;
	std::cout << (a * a_ + b * b_) / (b_ + a_) << std::endl;
	return EXIT_SUCCESS;
}