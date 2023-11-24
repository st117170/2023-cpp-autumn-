#include<iostream>

void moves_record(int n, int from, int to)
{
	printf("%d %d %d\n", n, from, to);
}

void hanoi(int n, int from, int to) 
{

	if (n > 0)
	{
		int res = 6 - from - to;
		if (n == 1)
		{
			moves_record(n, from, to); 
			
		}
		else
		{
			hanoi(n - 1, from, to);
			moves_record(n, from, res);
			hanoi(n - 1, to, from);
			moves_record(n, res, to);
			hanoi(n - 1, from, to);
			
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