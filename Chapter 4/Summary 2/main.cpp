/*
Write a short program to simulate a ball being dropped off of a tower. To start, the user should be asked for the height of the tower in meters.
Assume normal gravity (9.8 m/s2), and that the ball has no initial velocity (the ball is not moving to start).
Have the program output the height of the ball above the ground after 0, 1, 2, 3, 4, and 5 seconds. The ball should not go underneath the ground (height 0).
*/

#include <iostream>

constexpr double gravity{ 9.8 };

double enterTowerHeight()
{
	std::cout << "Enter height of the tower: ";
	double input{};
	std::cin >> input;
	return input;
}

void printResult(int second, double result)
{
	std::cout << "At " << second << " seconds, the ball is at height: " << result << " meters.\n";
}

double calculateAndPrintHeight(double height, int second)
{
	double newHeight{};

	newHeight = height - (gravity * second * second)/2;
	
	if (newHeight <= 0)
	{
		std::cout << "At " << second << " seconds, the ball is on the ground.\n";
	}
	else 
	{
		printResult(second, newHeight);
	}
	
	return newHeight;
}

int main()
{
	double height{ enterTowerHeight() };

	calculateAndPrintHeight(height, 0);
	calculateAndPrintHeight(height, 1);
	calculateAndPrintHeight(height, 2);
	calculateAndPrintHeight(height, 3);
	calculateAndPrintHeight(height, 4);
	calculateAndPrintHeight(height, 5);

	return 0;
}