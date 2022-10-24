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
	int num = 0;
	std::cin >> num;
	int mindis = INT_MAX;
	int minind = 0;
	for (int i = 1; i <= n; ++i)
	{
		if (abs(num - a[i]) < mindis)
		{
			minind = i;
			mindis = abs(num - a[i]);
		}
	}
	std::cout << a[minind] << std::endl;
	return EXIT_SUCCESS;
}