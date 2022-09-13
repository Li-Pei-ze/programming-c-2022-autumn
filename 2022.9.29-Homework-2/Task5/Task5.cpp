// Task5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main(int argc, char **argv)
{
	int n = 0;
	std::cin >> n;
	if (n == 1 || n % 4 == 0)
	{
		std::cout << "YES" << std::endl;
	}
	else
	{
		std::cout << "NO" << std::endl;
	}
	return EXIT_SUCCESS;
}