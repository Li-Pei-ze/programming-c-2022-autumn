#include <iostream>

int main(int argc, char **argv)
{
	int n = 0;
	std::cin >> n;
	int** a = new int* [n];
	for (int i = 0; i < n; ++i)
	{
		a[i] = new int[n];
	}
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j)
			std::cin >> a[i][j];

	for (int i = 0; i < n; ++i)
	{
		for (int j = n - 1; j > - 1; --j)
			std::cout << a[j][n - i - 1] << " ";
		std::cout << std::endl;
	}
	return EXIT_SUCCESS;
}
