#include <iostream>

struct Shape
{
public:
	int a;
	int b;
	int c;
	int d;

	Shape(int a = 0, int b = 0, int c = 0, int d = 0) : a(a), b(b), c(c), d(d) {};
	Shape(const Shape& shp) : a(shp.a), b(shp.b), c(shp.c), d(shp.d) {};

	void printsides()
	{
		std::cout << a << " " << b << " " << c << " " << d << std::endl;
	}

	~Shape() {};
};

struct Rectangle : public Shape
{
	Rectangle(int a = 0, int b = 0) : Shape(a, b) {};

	double area()
	{
		return a * b;
	}

	~Rectangle() {}
};

struct Square : public Rectangle
{
	Square(int a = 0) : Rectangle(a, a) { };

	~Square() {};
};

struct Triangle : public Shape
{
	Triangle(int a = 0, int b = 0, int c = 0) : Shape(a, b, c) {};

	double area()
	{
		double p = 0.5 * (a + b + c);
		return sqrt(p * (p - a) * (p - b) * (p - c));
	}

	~Triangle() {};
};

struct Circle : public Shape
{
	Circle(int a = 0) : Shape(a) {};

	double area()
	{
		return (3.14) * (a * a);
	}

	~Circle() {};
};

int main(int argc, char* argv[])
{
	Rectangle rect;
	rect.a = 123;
	rect.b = 123;

	rect.printsides();
	std::cout << rect.area() << std::endl;

	Square sq;
	sq.a = 555;

	sq.printsides();
	std::cout << sq.area() << std::endl;

	Triangle tr;
	tr.a = 12323;
	tr.b = 2222;
	tr.c = 13333;

	tr.printsides();
	std::cout << tr.area() << std::endl;

	Circle circ;
	circ.a = 2323;

	circ.printsides();
	std::cout << circ.area() << std::endl;

	return EXIT_SUCCESS;
}