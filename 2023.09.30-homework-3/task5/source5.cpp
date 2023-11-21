#include <iostream>

int main(int argc, char* argv[])
{
	long int k = 0;
	long int ans = 0;

	std::cin >> k;

	for (long int i = 1; i <= k; i++)
	{
		long int a = i;
		long int b = 0;


		while (a != 0)
		{
			b = b * 10 + a % 10;
			a = a / 10;

		}

		if (i == b)
		{	
			ans += 1;
			continue;
		}


	}
	std::cout << ans;
	return EXIT_SUCCESS;
}