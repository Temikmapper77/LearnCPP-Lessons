/*

Find 3 issues (affecting 4 lines) in the following code.

*/

#include <cstdint>
#include <iostream>

constexpr int drivingAge{ 16 };

int main()
{
    std::cout << "How old are you?\n";

    int age{};
    std::cin >> age;

    std::cout << "Allowed to drive a car in Texas [";

    if (age >= drivingAge)
        std::cout << 'x';
    else
        std::cout << ' ';

    std::cout << "]\n";

    return 0;
}