// Additional-Task.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cstring>

int main(int argc, char** argv)
{
	int f[101]{};
	int a[101]{};
	int n = 0;
	std::cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		std::cin >> a[i];
	}
	memset(f, 0, sizeof f);
	for (int i = 1; i <= n; ++i)
		for (int j = 0; j < i; ++j)
		{
			if (f[j] + (i - j) * a[i] > f[i])
			{
				f[i] = f[j] + (i - j) * a[i];
			}
		}
	std::cout << f[n] << std::endl;
	return EXIT_SUCCESS;
}