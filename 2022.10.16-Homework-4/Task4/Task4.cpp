// Task4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main(int argc, char **argv)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	std::cin >> a >> b >> c >> d >> e;
	int tot = 0;
	for (int i = 0; i <= 1000; ++i)
	{
		if (i != e)
		{
			if ((long long)a * i * i * i + (long long)b * i * i + (long long)c * i + (long long)d == 0ll)
			{
				++tot;
			}
		}
	}
	std::cout << tot << std::endl;
	return EXIT_SUCCESS;
}