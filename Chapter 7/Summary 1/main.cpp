/*
Take the program below and modify it so that the ball falls for as many seconds as needed until it reaches the ground.
*/

#include <iostream>
#include "constants.h"

double calculateHeight(double initialHeight, int seconds)
{
    double distanceFallen{ myConstants::gravity * seconds * seconds / 2 };
    double heightNow{ initialHeight - distanceFallen };

    if (heightNow < 0.0)
        return 0.0;
    else
        return heightNow;
}

bool calculateAndPrintHeight(double initialHeight, int time)
{
    std::cout << "At " << time << " seconds, the ball is at height: " << calculateHeight(initialHeight, time) << "\n";

    return (calculateHeight(initialHeight, time) == 0);
}

int main()
{
    std::cout << "Enter the initial height of the tower in meters: ";
    double initialHeight;
    std::cin >> initialHeight;

    int second = 0;

    while (!calculateAndPrintHeight(initialHeight, second++));

    return 0;
}