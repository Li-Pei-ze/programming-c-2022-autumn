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
	int maxnum = -1000000;
	int minnum = 1000000;
	for (int i = 1; i <= n; ++i)
	{
		if (a[i] > maxnum)
		{
			maxnum = a[i];
		}
		if (a[i] < minnum)
		{
			minnum = a[i];
		}
	}
	for (int i = 1; i <= n; ++i)
	{
		if (a[i] == maxnum)
			a[i] = minnum;
	}
	for (int i = 1; i <= n; ++i)
		std::cout << a[i] << " ";
	return EXIT_SUCCESS;
}