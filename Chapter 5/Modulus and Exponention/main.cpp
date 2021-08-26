/*
Write a program that asks the user to input an integer, and tells the user whether the number is even or odd. 
Write a function called isEven() that returns true if an integer passed to it is even, and false otherwise
*/

#include <iostream>

bool isEven(int x)
{
	return (x % 2 == 0);
}

int main()
{
	std::cout << "Enter an integer: ";
	int input{};
	std::cin >> input;

	if (isEven(input))
		std::cout << input << " is even.";
	else
		std::cout << input << " is odd.";

	return 0;
}