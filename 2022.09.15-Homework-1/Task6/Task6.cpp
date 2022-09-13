// Task6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main(int argc, char **argv)
{
	int a = 0;
	std::cin >> a;
	std::cout << a + (a + 1) % 2 + 1 << std::endl;
	return EXIT_SUCCESS;
}