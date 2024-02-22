#include <iostream>

long int Fib(int n) {
    int* fib = new int[n + 2];
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i <= n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    long int answ = fib[n];
    delete[] fib;
    return answ;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int n;
    do {
        std::cout << "Введите число: ";
        std::cin >> n;
    } while (n < 0);
    std::cout << "Число Фибоначчи под номером " << n << " равно " << Fib(n) << std::endl;
    return 0;
}