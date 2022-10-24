#include <iostream>

int main(int argc, char** argv)
{
	int n = 0;
	int m = 0;
	std::cin >> n >> m;
	int** a1 = new int* [n];
	for (int i = 0; i < n; ++i)
	{
		a1[i] = new int[m];
	}

	int** a2 = new int* [n];
	for (int i = 0; i < n; ++i)
	{
		a2[i] = new int[m];
	}
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
			std::cin >> a1[i][j];

	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
			std::cin >> a2[i][j];

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
			std::cout << a1[i][j] + a2[i][j] << " ";
		std::cout << std::endl;
	}

	for (int i = 0; i < n; ++i)
	{
		delete[] a1[i];
	}
	delete[] a1;

	for (int i = 0; i < n; ++i)
	{
		delete[] a2[i];
	}
	delete[] a2;
	return EXIT_SUCCESS;
}