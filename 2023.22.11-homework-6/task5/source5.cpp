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
		hanoi(n - 1, from, res);
		moves_record(n, from, to);
		hanoi(n - 1, res, to);
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

	for (int i = amount; i >= 1; --i)
	{
		if (i % 2 == 0)
		{
			move_to = 3;
		}
		else
		{
			move_to = 2;
		}

		hanoi(i, move_from, move_to);
		move_from = move_to;
	}
	return EXIT_SUCCESS;

}