#include <iostream>

int main(int argc, char** argv)
{
	int n = 0;
	int a[10000]{ 0 };

	std::cin >> n;

	for (int i = 0; i < n; ++i)
	{
		std::cin >> a[i];
	}

	while (a[0] != 1)
	{
		int tmp = a[0];
		for (int i = 0; i < n - 1; ++i)
		{
			a[i] = a[i + 1];
		}
		a[n - 1] = tmp;
	}

	for (int i = 0; i < n; ++i)
	{
		std::cout << a[i] << " ";
	}
	std::cout << std::endl;
	return EXIT_SUCCESS;
}