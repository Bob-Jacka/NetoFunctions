#include "iolib.hpp"

int numberPower(int value, int power) {
	int result = value;
    	for (int i = 1; i < power; i++) {
        	result = result * value;
    	}
    	return result;
}

int main()
{
	int fValue = 5, sValue = 2;
	println(to_string(fValue) + " в степени " + to_string(sValue) + " = " + to_string(numberPower(fValue, sValue)));
	int tValue = 3;
	println(to_string(tValue) + " в степени " + to_string(tValue) + " = " + to_string(numberPower(tValue, tValue)));
	int nValue = 4;
	println(to_string(nValue) + " в степени " + to_string(nValue) + " = " + to_string(numberPower(nValue, nValue)));
}
