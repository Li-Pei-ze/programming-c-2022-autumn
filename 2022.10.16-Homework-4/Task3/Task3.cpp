#include <iostream>

int main(int argc, char **argv)
{
	int n;
	std::cin >> n;
	int tot = 0;
	for (int i = 1; tot < n; ++i)
	{
		for (int j = 1; j <= i && tot < n; ++j)
		{
			std::cout << i << " ";
			++tot;
		}
	}
	return EXIT_SUCCESS;
}
