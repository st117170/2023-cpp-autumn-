#include<iostream>

void moves_record(int n, int from, int to)
{
	printf("%d %d %d\n", n, from, to);
}

void hanoi(int n, int from, int to)
{
	int res = 6 - from - to;
	if (n > 0)
	{
		if (from + to == 4) 
		{
			hanoi(n, from, 2);
			hanoi(n, 2, to);

		}
		else 
		{
			hanoi(n - 1, from, res);
			moves_record(n, from, to);
			hanoi(n - 1, res, to);
		}
		
	}
	else
	{
		return;
	}
}

int main(int argc, char* argv[])
{
	int amount = 0;
	int move_from = 1;
	int move_to = 3;

	std::cin >> amount;

	hanoi(amount, move_from, move_to);
	std::cout << std::endl;
	return EXIT_SUCCESS;

}