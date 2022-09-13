// Task4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main(int argc, char** argv)
{
	int n = 0;
	int a[1001]{};
	std::cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		std::cin >> a[i];
	}
	int maxnum = -INT_MAX;
	for (int i = 2; i < n; ++i)
	{
		if (a[i] + a[i - 1] + a[i + 1] > maxnum)
		{
			maxnum = a[i] + a[i - 1] + a[i + 1];
		}
	}
	std::cout << maxnum << std::endl;
	return EXIT_SUCCESS;
}