/*
Write a program that asks the user to input an integer, and tells the user whether the number is even or odd. 
Write a function called isEven() that returns true if an integer passed to it is even, and false otherwise
*/

#include <iostream>

bool isEven(int)
{
	return true;
}

int main()
{
	std::cout << "Enter an integer: ";
	int input{};
	std::cin >> input;

	std::cout << input;

	return 0;
}