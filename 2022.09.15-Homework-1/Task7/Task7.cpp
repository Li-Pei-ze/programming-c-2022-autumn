// Task7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main(int argc, char **argv)
{
	int a = 0;
	int b = 0;
	std::cin >> a >> b;
	int t = a;
	a = b;
	b = t;
	std::cout << a << b << std::endl;
	return EXIT_SUCCESS;
}
