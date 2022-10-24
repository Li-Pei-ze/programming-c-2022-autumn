#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int k = 0;
	int a[100000]{ 0 };

	std::cin >> n;

	for (int i = 0; i < n; ++i)
	{
		std::cin >> a[i];
	}

	std::cin >> k;

	if (k < 0)
	{
		while (k != 0)
		{
			int tmp = a[0];
			for (int i = 0; i < n - 1; ++i)
			{
				a[i] = a[i + 1];
			}
			a[n - 1] = tmp;
			++k;
		}
	}
	else
	{
		while (k != 0)
		{
			int tmp = a[n - 1];
			for (int i = n - 1; i > 0; --i)
			{
				a[i] = a[i - 1];
			}
			a[0] = tmp;
			--k;
		}
	}

	for (int i = 0; i < n; ++i)
	{
		std::cout << a[i] << " ";
	}

	return EXIT_SUCCESS;
}