/*
Write a function named sumTo() that takes an integer parameter named value, and returns the sum of all the numbers from 1 to value.
*/

#include<iostream>

int sumTo(int limit)
{
	int result{ 0 };

	for (int count{ 1 }; count <= limit; ++count)
	{
		result += count;
	}

	return result;
}

int main()
{
	std::cout << "Enter an integer: ";
	int x{};
	std::cin >> x;

	std::cout << "Sum equals " << sumTo(x);
	return 0;
}