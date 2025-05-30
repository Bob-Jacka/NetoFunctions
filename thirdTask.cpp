#include "iolib.hpp"

int fibonacciSolver(int number) {
    if (number <= 0) {
        return 0;
    } else if (number == 1) {
        return 1;
    } else {
        return fibonacciSolver(number - 1) + fibonacciSolver(number - 2);
    }
}

int main() {
    int count;

    print("Введите число: ");
    intUserInput(count);

    print("Числа Фибоначчи: ");
    for (int i = 0; i < count; i++) {
        std::cout << fibonacciSolver(i) << " ";
    }
    println();
}
