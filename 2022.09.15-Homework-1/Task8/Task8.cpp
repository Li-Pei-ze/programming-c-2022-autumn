﻿// Task8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
	int h1 = 0;
	int m1 = 0;
	int s1 = 0;
	int h2 = 0;
	int m2 = 0;
	int s2 = 0;
	std::cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;
	std::cout << (h2 - h1) * 3600 + (m2 - m1) * 60 + s2 - s1 << std::endl;
	return EXIT_SUCCESS;
}
