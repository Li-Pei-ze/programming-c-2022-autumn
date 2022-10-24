// Task3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main(int argc, char** argv)
{
	int a[1001]{ 0 };
	int n = 0;

	std::cin >> n;

	for (int i = 1; i <= n; ++i)
	{
		std::cin >> a[i];
	}

	int m = 0;

	std::cin >> m;

	for (int i = 1; i <= n; ++i)
	{
		if (m > a[i])
		{
			std::cout << i << std::endl;
			break;
		}
	}
	return EXIT_SUCCESS;
}
