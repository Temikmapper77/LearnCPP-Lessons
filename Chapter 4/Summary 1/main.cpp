#include <iostream>

double inputDigits()
{
	std::cout << "Enter a double value: ";
	double num{};
	std::cin >> num;
	return num;
}

char getSymbol()
{
	std::cout << "Enter one of the following: +, -, * or /: ";
	char sign{};
	std::cin >> sign;
	return sign;
}

double calculateResult(double x, double y, char sign)
{
	if (sign == '+')
		return x + y;
	else if (sign == '-')
		return x - y;
	else if (sign == '*')
		return x * y;
	else if (sign == '/')
		return x / y;
	else
		std::cout << "Invalid symbol \n";
	return NULL;
}

int main()
{
	double x{ inputDigits() };
	double y{ inputDigits() };
	char sign{ getSymbol() };

	double result{ calculateResult(x, y, sign) };
	std::cout << x << " " << sign << " " << y << " is " << result;
	
}