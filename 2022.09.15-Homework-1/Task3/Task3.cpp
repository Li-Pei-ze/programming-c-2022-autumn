// Task3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main(int argc, char **argv)
{
	int n = 0;
	int k = 0;
	std::cin >> n >> k;
	std::cout << k % n << std::endl;
	return EXIT_SUCCESS;
}