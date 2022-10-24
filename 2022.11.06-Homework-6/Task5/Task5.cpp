#include <iostream>

int main(int argc, char** argv)
{
	int n = 0;
	int odd = 0, even = 0;

	std::cin >> n;
	
	int o[1001]{ 0 }, e[1001]{ 0 };


	while (n--)
	{
		int x;
		std::cin >> x;
		if (x & 1)
			o[++odd] = x;
		else e[++even] = x;
	}

	for (int i = 1; i <= odd; ++i)
		std::cout << o[i] << " ";
	std::cout << std::endl;
	for (int i = 1; i <= even; ++i)
		std::cout << e[i] << " ";
	std::cout << std::endl;
	if (odd > even)
		std::cout << "NO" << std::endl;
	else std::cout << "YES" << std::endl;
	return EXIT_SUCCESS;
}
