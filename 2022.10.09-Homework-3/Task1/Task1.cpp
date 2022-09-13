// Task1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    int a = 0;
    int b = 0;
    std::cin >> a >> b;
    while (a < b)
    {
        std::cout << a << " ";
        ++a;
    }
    return EXIT_SUCCESS;
}
