// Task7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int a, b;
	cin >> a >> b;
	int t = a;
	a = b;
	b = t;
	cout << a << b << endl;
	return EXIT_SUCCESS;
}
