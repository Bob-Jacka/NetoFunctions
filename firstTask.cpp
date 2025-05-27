#include <iostream>

int sum(int firstValue, int secondValue) {
	return firstValue + secondValue;
}

int diff(int firstValue, int secondValue) {
	return firstValue - secondValue;
}

int multiplication(int firstValue, int secondValue) {
	return firstValue * secondValue;
}

double division(int firstValue, int secondValue) {
	return firstValue / secondValue;
}

int main(int argc, char** argv)
{
	int a = 5, b = 10;

	int s = sum(a, b);
	int dif = diff(a, b);
	int mult = multiplication(a, b);
	double div = division(a, b);

	std::cout << a << " + " << b << " = " << s << std::endl;
	std::cout << a << " - " << b << " = " << dif << std::endl;
	std::cout << a << " * " << b << " = " << mult << std::endl;
	std::cout << a << " / " << b << " = " << div << std::endl;
	
	return 0;
}