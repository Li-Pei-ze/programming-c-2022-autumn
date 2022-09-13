// Task2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main(int argc, char** argv)
{
	int n = 0;
	int a[1001]{};
	int l = 0;
	int r = 0;
	std::cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		std::cin >> a[i];
	}
	std::cin >> l >> r;
	int maxnum = -INT_MAX;
	int maxind = -1;
	for (int i = l; i <= r; ++i)
	{
		if (a[i] > maxnum)
		{
			maxnum = a[i];
			maxind = i;
		}
	}
	std::cout << maxnum << " " << maxind << std::endl;
	return EXIT_SUCCESS;
}