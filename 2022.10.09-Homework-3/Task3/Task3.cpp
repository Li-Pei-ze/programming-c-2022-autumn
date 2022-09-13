// Task3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main(int argc, char **argv)
{
	int n = 0;
	std::cin >> n;
	int i = 1;
	int j = 1;
	do
	{
		j = 1;
		do
		{
			std::cout << i - 1 + j << " ";
			++j;
		} while (j <= n);
		std::cout << std::endl;

		++i;
	} while (i <= n);
	return EXIT_SUCCESS;
}
