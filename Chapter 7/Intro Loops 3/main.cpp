#include <iostream>

int main()
{
	int num{ 9 };
	int rows{ 1 };
	int cols{ 1 };
	while (rows <= num)
	{
		int spaces{ num - rows };
		cols = rows;
		while (spaces > 0)
		{
			std::cout << "  ";
			spaces--;
		}
		while (cols > 0) 
		{
			std::cout << cols << ' ';
			cols--;
		}
		std::cout << "\n";
		rows++;
	}
	return 0;
}