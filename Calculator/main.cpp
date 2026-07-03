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
	int n;
	float a, b, res = 0;

	do
	{
		std::cout << "************ MENU ************" << "\n";
		std::cout << "1 ADDITION" << "\n";
		std::cout << "2 SUBTRACTION" << "\n";
		std::cout << "3 MULTIPLICATION" << "\n";
		std::cout << "4 DIVISION" << "\n";
		std::cout << "5 EXIT" << "\n";
		std::cout << "******************************" << "\n";

		std::cout << "Press the number in front of operation to select it" << "\n";
		std::cin >> n;

		if (n == 5) break;

		std::cout << "Type in first operand : ";
		std::cin >> a;

		std::cout << "Type in second operand : ";
		std::cin >> b;

		switch (n)
		{
		case 1: 
			res = Addition(a, b);
			break;

		case 2:
			res = Subtraction(a, b);
			break;

		case 3:
			res = Multiplication(a, b);
			break;

		case 4:
			res = Division(a, b);
			break;

		default:
			std::cout << "Invalid operation try again! \n";
			break;
		} 

		std::cout << "Answer : " << res << "\n";
	} while (n != 5);

	return 0;
}