/*
Write a program that asks the user to enter two integers, one named smaller, the other named larger. 
If the user enters a smaller value for the second integer, use a block and a temporary variable to swap the smaller and larger values. 
Then print the values of the smaller and larger variables. 
Add comments to your code indicating where each variable dies. 
Note: When you print the values, smaller should hold the smaller input and larger the larger input, no matter which order they were entered in.
*/

#include <iostream>

int main() 
{
	int x{};
	std::cout << "Enter an integer: ";
	std::cin >> x;

	int y{};
	std::cout << "Enter a larger integer: ";
	std::cin >> y;
	
	if (x > y)
	{
		std::cout << "Swapping the values\n";
		int temp{x};
		x = y;
		y = temp;
	}

	std::cout << "The smaller integer is " << x;
	std::cout << "\nThe bigger integer is " << y;

	return 0;
}