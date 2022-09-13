// Task2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main(int argc, char **argv)
{
	int x = 1;
	int sum = 0;
	while (x != 0)
	{
		if (x < 0)
		{
			++sum;
		}
		std::cin >> x;
	}
	std::cout << sum << std::endl;

	return EXIT_SUCCESS;
}