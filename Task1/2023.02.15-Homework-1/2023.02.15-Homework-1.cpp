#include<iostream>
#include<string>

struct Animal
{
	std::string type;
	std::string name;
	int age;
	Animal()
	{
		this->type = "dog";
		this->name = "wtf";
		this->age = 1000;
	}
	Animal(std::string type, std::string name, int age)
	{
		this->type = type;
		this->name = name;
		this->age = age;
	}
	Animal(const Animal& zhiv)
	{
		this->type = zhiv.type;
		this->name = zhiv.name;
		this->age = zhiv.age;
	}
	~Animal()
	{

	}
	void elderAnimal()
	{
		age += 1;
	}
};

void printAnimal(struct Animal zhiv)
{
	std::cout << zhiv.type << " " << zhiv.name << " " << zhiv.age << std::endl;
}

int main(int argc, char* argv[])
{
	Animal Default;
	printAnimal(Default);
	Animal AA("haha", "asda", 123);
	AA.elderAnimal();
	printAnimal(AA);

	return EXIT_SUCCESS;
}