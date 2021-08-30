/*
Write a function called calculate() that takes two integers and a char representing one of the following mathematical operations: +, -, *, /, or % (modulus). 
Use a switch statement to perform the appropriate mathematical operation on the integers, and return the result. 
If an invalid operator is passed into the function, the function should print an error. 
For the division operator, do an integer division.
*/

#include <iostream>

int calculate(int x, char op, int y)
{

	switch (op)
	{
	case '+':
		return x + y;
	case '-':
		return x - y;
	case '*':
		return x * y;
	case '/':
		return x / y;
	case '%':
		return x % y;
	default:
		std::cout << "There is an invalid argument!";
		return 0;
	}

}

int main()
{
	std::cout << "Enter first integer: ";
	int x{};
	std::cin >> x;

	std::cout << "Enter an operator: ";
	char op{};
	std::cin >> op;

	std::cout << "Enter second integer: ";
	int y{};
	std::cin >> y;

	std::cout << "Result = " << calculate(x, op, y);

	return 0;
}