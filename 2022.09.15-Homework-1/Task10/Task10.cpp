// Task10.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

long long p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20,
p21, p22, p23, p24, p25, p26, p27, p28, p29, p30;

long long a, b, c;
int main(int argc, char **argv)
{
	p0 = 1;
	p1 = p0 * 2;
	p2 = p1 * 2;
	p3 = p2 * 2;
	p4 = p3 * 2;
	p5 = p4 * 2;
	p6 = p5 * 2;
	p7 = p6 * 2;
	p8 = p7 * 2;
	p9 = p8 * 2;
	p10 = p9 * 2;
	p11 = p10 * 2;
	p12 = p11 * 2;
	p13 = p12 * 2;
	p14 = p13 * 2;
	p15 = p14 * 2;
	p16 = p15 * 2;
	p17 = p16 * 2;
	p18 = p17 * 2;
	p19 = p18 * 2;
	p20 = p19 * 2;
	p21 = p20 * 2;
	p22 = p21 * 2;
	p23 = p22 * 2;
	p24 = p23 * 2;
	p25 = p24 * 2;
	p26 = p25 * 2;
	p27 = p26 * 2;
	p28 = p27 * 2;
	p29 = p28 * 2;
	p30 = p29 * 2;

	cin >> a >> b;
	c = 0;
	c += (p30 * b <= a) * p30;
	a -= (p30 * b <= a) * p30 * b;
	c += (p29 * b <= a) * p29;
	a -= (p29 * b <= a) * p29 * b;
	c += (p28 * b <= a) * p28;
	a -= (p28 * b <= a) * p28 * b;
	c += (p27 * b <= a) * p27;
	a -= (p27 * b <= a) * p27 * b;
	c += (p26 * b <= a) * p26;
	a -= (p26 * b <= a) * p26 * b;
	c += (p25 * b <= a) * p25;
	a -= (p25 * b <= a) * p25 * b;
	c += (p24 * b <= a) * p24;
	a -= (p24 * b <= a) * p24 * b;
	c += (p23 * b <= a) * p23;
	a -= (p23 * b <= a) * p23 * b;
	c += (p22 * b <= a) * p22;
	a -= (p22 * b <= a) * p22 * b;
	c += (p21 * b <= a) * p21;
	a -= (p21 * b <= a) * p21 * b;
	c += (p20 * b <= a) * p20;
	a -= (p20 * b <= a) * p20 * b;
	c += (p19 * b <= a) * p19;
	a -= (p19 * b <= a) * p19 * b;
	c += (p18 * b <= a) * p18;
	a -= (p18 * b <= a) * p18 * b;
	c += (p17 * b <= a) * p17;
	a -= (p17 * b <= a) * p17 * b;
	c += (p16 * b <= a) * p16;
	a -= (p16 * b <= a) * p16 * b;
	c += (p15 * b <= a) * p15;
	a -= (p15 * b <= a) * p15 * b;
	c += (p14 * b <= a) * p14;
	a -= (p14 * b <= a) * p14 * b;
	c += (p13 * b <= a) * p13;
	a -= (p13 * b <= a) * p13 * b;
	c += (p12 * b <= a) * p12;
	a -= (p12 * b <= a) * p12 * b;
	c += (p11 * b <= a) * p11;
	a -= (p11 * b <= a) * p11 * b;
	c += (p10 * b <= a) * p10;
	a -= (p10 * b <= a) * p10 * b;
	c += (p9 * b <= a) * p9;
	a -= (p9 * b <= a) * p9 * b;
	c += (p8 * b <= a) * p8;
	a -= (p8 * b <= a) * p8 * b;
	c += (p7 * b <= a) * p7;
	a -= (p7 * b <= a) * p7 * b;
	c += (p6 * b <= a) * p6;
	a -= (p6 * b <= a) * p6 * b;
	c += (p5 * b <= a) * p5;
	a -= (p5 * b <= a) * p5 * b;
	c += (p4 * b <= a) * p4;
	a -= (p4 * b <= a) * p4 * b;
	c += (p3 * b <= a) * p3;
	a -= (p3 * b <= a) * p3 * b;
	c += (p2 * b <= a) * p2;
	a -= (p2 * b <= a) * p2 * b;
	c += (p1 * b <= a) * p1;
	a -= (p1 * b <= a) * p1 * b;
	c += (p0 * b <= a) * p0;
	a -= (p0 * b <= a) * p0 * b;
	cout << c << endl;
	return EXIT_SUCCESS;
}