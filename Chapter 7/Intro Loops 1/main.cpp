/*
Write a program that prints out the letters a through z along with their ASCII codes.
*/

#include <iostream>

int main() 
{

	int a_num = static_cast<int>('a');
	int z_num = static_cast<int>('z');
	std::cout << "Hi a is " << a_num << " and z is " << z_num << "\n";
	
	int start_code = a_num;
	while (start_code <= z_num)
	{
		std::cout << static_cast<char>(start_code) << ' ';
		start_code++;
	}
	return 0;
}