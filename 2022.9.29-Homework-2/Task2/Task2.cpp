// Task2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    int year;
    std::cin >> year;

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
                std::cout << "YES" << std::endl;
            else
                std::cout << "NO" << std::endl;
        }
        else
            std::cout << "YES" << std::endl;
    }
    else
        std::cout << "NO" << std::endl;
	return EXIT_SUCCESS;
}
