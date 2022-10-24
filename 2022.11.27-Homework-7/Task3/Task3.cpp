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

	int** res = new int* [n];
	for (int i = 0; i < n; ++i)
	{
		res[i] = new int[n];
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = n - 1, j2 = 0; j > -1; --j, ++j2)
		{
			res[i][j] = a[j][n - i - 1];
			std::cout << a[j][n - i - 1] << " ";
		}
			
		std::cout << std::endl;
	}

	for (int i = 0; i < n; ++i)
	{
		delete[] a[i];
	}
	delete[] a;

	for (int i = 0; i < n; ++i)
	{
		delete[] res[i];
	}
	delete[] res;

	return EXIT_SUCCESS;
}
