// Task2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
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

	for (int i = 1; i <= m; ++i)
	{
		int x, y;
		std::cin >> x >> y;
		for (int j = x; j <= y; ++j)
		{
			std::cout << a[j] << " ";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
	return EXIT_SUCCESS;
}