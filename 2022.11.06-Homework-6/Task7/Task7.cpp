// Task7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main(int argc, char** argv)
{
	int n;
	int a[100]{ 0 };
	int minn = 0;
	int maxn = 0;
	int minind = 0;
	int maxind = 0;
	int sum = 0;
	int p = 0;
	
	std::cin >> n;

	for (int i = 0; i < n; ++i)
	{
		std::cin >> a[i];
		if (a[i] > 0)
		{
			sum += a[i];
		}
	}

	minn = maxn = a[0];
	minind = maxind = 0;

	for (int i = 1; i < n; ++i)
	{
		if (a[i] < minn)
		{
			minn = a[i];
			minind = i;
		}
		if (a[i] > maxn)
		{
			maxn = a[i];
			maxind = i;
		}
	}

	p = 1;

	if (minind > maxind)
	{
		int tmp = minind;
		minind = maxind;
		maxind = tmp;
	}

	for (int i = minind + 1; i < maxind; ++i)
	{
		p *= a[i];
	}

	std::cout << sum << " " << p << std::endl;

	return EXIT_SUCCESS;
}