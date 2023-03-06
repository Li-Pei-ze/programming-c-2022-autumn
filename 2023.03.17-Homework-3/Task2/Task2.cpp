#include <iostream>
#include <string>
#include <algorithm>

struct Student
{
public:
	std::string sn;
	std::string nm;
	int ma;
	int ph;
	int cs;

	Student(std::string sn = "Li", std::string nm = "Peize", int ma = 0, int ph = 0, int cs = 0) :
		sn(sn), nm(nm), ma(ma), ph(ph), cs(cs) {};
	Student(const Student& pupil) : sn(pupil.sn), nm(pupil.nm), ma(pupil.ma), ph(pupil.ph), cs(pupil.cs) {};

	double avm()
	{
		return (ma + ph + cs) / 3;
	}

	void print()
	{
		std::cout << sn << " " << nm << std::endl;
	}

	~Student() {};
};

bool cmp(Student a, Student b)
{
	return a.avm() > b.avm();
}
int main(int argc, char* argv[])
{
	int n = 0;
	std::string sn;
	std::string nm;
	int ma = 0;
	int ph = 0;
	int cs = 0;
	std::cin >> n;

	Student* a = new Student[n];

	for (int i = 0; i < n; ++i)
	{
		std::cin >> sn >> nm >> ma >> ph >> cs;
		a[i] = Student(sn, nm, ma, ph, cs);
	}

	std::sort(a, a + n, cmp);

	for (int i = 0; i < n; ++i)
	{
		a[i].print();
	}

	return EXIT_SUCCESS;
}