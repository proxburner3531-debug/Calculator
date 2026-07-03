#include <iostream>
#include <limits>
#include<string>

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

		std::string input;
		std::getline(std::cin >> std::ws , input);
		size_t len;

		try 
		{
			n = std::stoi(input, &len);

			if (len != input.length())
			{
				std::cout << "Invalid input!" << "\n";
				continue;
			}
		}

		catch(...)
		{
			std::cout << "Invalid input!" << "\n";
			continue;
		}

		if (n == 5) break;

		std::cout << "Type in first operand : ";
		
		if (!(std::cin >> a))
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			//std::cin.ignore(10000, '\n'); can be written this way but the above one is better

			std::cout << "Invalid choice!\n";
			continue;
		}

		std::cout << "Type in second operand : ";
		
		if (!(std::cin >> b))
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			//std::cin.ignore(10000, '\n'); can be written this way but the above one is better

			std::cout << "Invalid choice!\n";
			continue;
		}
		
		if (n == 4 && b == 0)
		{
			std::cout << "Cannot divide by zero!" << "\n";
			continue;
		}

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
			continue; // break is not written, as I do not want to print res, as its value is 0 for this case
		} 
		std::cout << "Answer : " << res << "\n";

	} while (n != 5);

	return 0;
}