// Task3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
	int k = 0;
	int m = 0;
	int n = 0;

	std::cin >> k >> m >> n;
	if (n <= k)
	{
		std::cout << 2 * m << std::endl;
	}
	else
	{
		if ((n * 2) % k == 0)
		{
			std::cout << m * ((n * 2) / k) << std::endl;
		}
		else
		{
			std::cout << m * (1 + ((n * 2) / k)) << std::endl;
		}
	}

	return EXIT_SUCCESS;
}