#include <iostream>

int main()
{
	int num{ 5 };
	int rows{ 1 };
	int cols{ 1 };
	while (rows <= 5)
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