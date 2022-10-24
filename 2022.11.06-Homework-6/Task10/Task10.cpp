#include <iostream>


int main(int argc, char** argv)
{
	int n = 0;
	int m = 0;
	
	std::cin >> n >> m;
	
	bool a[100001]{ 0 };
	bool b[100001]{ 0 };
	while (n--)
	{
		int x = 0;
		std::cin >> x;
		a[x] = 1;
	}

	while (m--)
	{
		int x = 0;
		std::cin >> x;
		b[x] = 1;
	}
	for (int i = 0; i <= 100000; ++i)
		if (a[i] & b[i])
		{
			std::cout << i << " ";
		}

	return EXIT_SUCCESS;
}