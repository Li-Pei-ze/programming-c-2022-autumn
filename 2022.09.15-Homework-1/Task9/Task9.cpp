// Task9.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

long long x;
int main(int argc, char **argv)
{
	cin >> x;
	long long a = x * x;
	cout << a * (a + x + 1) + x + 1 << endl;
	return EXIT_SUCCESS;
}