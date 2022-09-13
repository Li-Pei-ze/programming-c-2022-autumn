// Task1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main(int argc, char** argv)
{
	int n;
	std::cin >> n;
	int i = 1;
	int sum = 0;
	for (i = 1; i * i < n; ++i)
	{
		if (n % i == 0)
		{
			++sum;
		}
	}
	std::cout << (sum * 2) + ((i * i) == n) << std::endl;
	return EXIT_SUCCESS;
}