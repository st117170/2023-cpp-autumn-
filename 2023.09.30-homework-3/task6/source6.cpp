#include <iostream>;

int main(int argc, char* argv[])
{
	long int n = 0;
	long int i = 0;

	long int res = 1;
	long int present = 1;
	long int next = 1;

	std::cin >> n;

	while (i + 2 < n)
	{
		res = present + next;
		present = next;
		next = res;
		i++;

	}
	std::cout << res;
	std::cout << std::endl;
	return EXIT_SUCCESS;

}