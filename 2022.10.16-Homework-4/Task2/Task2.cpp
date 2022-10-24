#include <iostream>

int main(int argc, char **argv)
{
	int n = 0;
	std::cin >> n;
	int res = 0;
	for (int i = 1; n > 0; i <<= 1)
	{
		// std::cout << "n : " << (n % 10) << " i : " << std::endl;
		res += (n % 10) * i;
		n /= 10;
	}
	std::cout << res << std::endl;
	return EXIT_SUCCESS;
}