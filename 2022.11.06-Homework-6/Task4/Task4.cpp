#include <iostream>

int main(int argc, char** argv)
{
	int a[1001]{ 0 };
	int n = 0;

	std::cin >> n;

	for (int i = 1; i <= n; ++i)
	{
		a[i] = i;
	}

	int aa = 0;
	int bb = 0;
	int cc = 0;
	int dd = 0;
	
	std::cin >> aa >> bb >> cc >> dd;
	

	for (int i = aa; i < bb - ((bb - aa) >> 1); ++i)
	{
		int t = a[i];
		a[i] = a[bb - i + aa];
		a[bb - i + aa] = t;
	}

	for (int i = cc; i < dd - ((dd - cc) >> 1); ++i)
	{
		int t = a[i];
		a[i] = a[dd - i + cc];
		a[dd - i + cc] = t;
	}
	for (int i = 1; i <= n; ++i)
		std::cout << a[i] << " ";
	return EXIT_SUCCESS;
}
