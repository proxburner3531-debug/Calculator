#include <iostream>

float Addition(float a, float b)
{
	return a + b;
}

float Subtraction(float a,float b)
{
	return a - b;
}

float Multiplication(float a, float b)
{
	return a * b;
}

float Division(float a, float b)
{
	return a / b;
}

int main()
{
	std::cout << "Press the number in front of operation to select it" << "\n";
	std::cout << "************ MENU ************" << "\n";
	std::cout << "1 ADDITION" << "\n";
	std::cout << "2 SUBTRACTION" << "\n";
	std::cout << "3 MULTIPLICATION" << "\n";
	std::cout << "4 DIVISION" << "\n";
	std::cout << "******************************" << "\n";


	return 0;
}