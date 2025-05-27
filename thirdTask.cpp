#include "iolib.hpp"

int main()
{
	long a, b, k;
	a = 0;
	b = 1;
	print("Введите число: ");
    longUserInput(k);
    while (k <= 0)
    {
        cout << "Введите число больше 0.";
        longUserInput(k);
    }
    print("Числа Фибоначчи: ");
    while (k != 0)
    {
        print(a, " ");
        a = a + b;
        b = a - b;
        k = k - 1;
    }
}