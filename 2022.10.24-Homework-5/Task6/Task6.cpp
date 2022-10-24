#include <iostream>

int main(int argc, char** argv)
{
	int n = 0;
	int a[1001]{};
	int pro[1001]{};
	std::cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		std::cin >> a[i];
	}
	for (int i = 1; i <= n; ++i)
	{
		std::cin >> pro[i];
	}
	int maxnum = -INT_MAX;
	int maxind = -1;
	for (int i = 1; i <= n; ++i)
	{
		if (a[i] * pro[i] > maxnum)
		{
			maxnum = a[i];
			maxind = i;
		}
	}
	std::cout << maxind << std::endl;
	return EXIT_SUCCESS;
}