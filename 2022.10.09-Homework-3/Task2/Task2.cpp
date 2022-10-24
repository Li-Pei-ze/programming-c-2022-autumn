#include <iostream>

int main(int argc, char **argv)
{
	int x = 1;
	int sum = 0;
	while (x != 0)
	{
		if (x < 0)
		{
			++sum;
		}
		std::cin >> x;
	}
	std::cout << sum << std::endl;

	return EXIT_SUCCESS;
}