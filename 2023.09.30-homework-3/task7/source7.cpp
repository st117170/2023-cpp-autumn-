#include <iostream>

int main(int argc, char* argv[])
{
	long int n = 0;
	long int k = 0;
	long int t = 1;

	std::cin >> n;

	while (t < n)
	{
		t = t * 2;
		k++;
	}
	std::cout << k;
	std::cout << std::endl;
	return EXIT_SUCCESS;

}