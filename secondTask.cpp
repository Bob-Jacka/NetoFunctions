#include "iolib.hpp"
#include <cmath>

void numberPower(int value, int power) {
	println(to_string(value) + " в степени " + to_string(power) + " = " + to_string((int) pow(value, power)));
}

int main()
{
	numberPower(5, 2);
	numberPower(3, 3);
	numberPower(4, 4);
}