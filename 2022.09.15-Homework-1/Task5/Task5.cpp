// Task5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include<iostream>

int main(int argc, char **argv)
{
	int a = 0;
	std::cin >> a;
	std::cout << (int)(a / 100) + (int)(a / 10) % 10 + a % 10 << std::endl;
	return EXIT_SUCCESS;
}