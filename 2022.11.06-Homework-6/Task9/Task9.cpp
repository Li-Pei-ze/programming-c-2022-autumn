// Task9.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main(int argc, char** argv)
{
	int n = 0;
	
	int a[100]{ 0 };

	std::cin >> n;

	for (int i = 0; i < n; ++i)
	{
		std::cin >> a[i];
	}

	int val = a[0];

	int length = 1;
	int pid = 0;
	int old = 0;
	int ca = 0;

	while (old != n - 1)
	{
		for (int i = old + 1; i < n; ++i)
		{
			if (a[i] > val)
			{
				val = a[i];
				pid = i;
			}
		}
		length += pid - old;
		ca += length * val;
		old = pid;
		val = 0;
		length = 0;
	}

	std::cout << ca << std::endl;

	return EXIT_SUCCESS;
}