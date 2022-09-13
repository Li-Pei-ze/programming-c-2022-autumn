// Task6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int a;
int main()
{
	cin >> a;
	cout << a + (a + 1) % 2 + 1 << endl;
	return 0;
}