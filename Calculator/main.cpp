#include <iostream>

float Addition(float a, float b)
{
	return a + b;
}

float Subtraction(float a,float b)
{
	return a - b;
}

int main()
{
	float a, b, res;
	std::cin >> a >> b;

	res = Subtraction(a, b);

	std::cout << res;

	return 0;
}