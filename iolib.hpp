#pragma once

/*
Custom library for actions in Netology C++ course.
Version - 1.0.2
*/

#include <iostream>

using namespace std;

void println(string str = "") {
	cout << str << endl;
}

template <typename T>
void print(T str, string separator = "") {
	cout << str << separator;
}

/*
Writes down int value into variable by address
*/
void intUserInput(int &variableAddress) {
	cin >> variableAddress;
}

/*
Writes down long value into variable by address
*/
void longUserInput(long &variableAddress) {
	cin >> variableAddress;
}

/*
Writes down string value into variable by address
*/
void stringUserInput(string &variableAddress) {
	cin >> variableAddress;
}

/*
Function for array output with separator.
*/
void lineArrayOutput(int *array, int array_size, string separator = " ") {
	for (int i = 0; i < array_size - 1; i++) {
        	cout << array[i] << separator;
    }
    cout << array[array_size - 1];
    cout << endl;
}