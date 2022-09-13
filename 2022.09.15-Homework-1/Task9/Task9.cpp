// Task9.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main(int argc, char **argv)
{
	long long x = 0;
	std::cin >> x;
	long long a = x * x;
	std::cout << a * (a + x + 1) + x + 1 << std::endl;
	return EXIT_SUCCESS;
}