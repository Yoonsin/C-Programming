#include <iostream>
using namespace std;

class Person 
{
	string name;
public:
	Person() {}
	Person(string name) { this->name = name; }
	void setname(string name) { this->name = name; }
	string getName() { return name; }

};

class Family
{
	Person* p;
	int size;
	string familyName;
public:
	Family(string name, int size);
	void setName(int num, string name);
	void show();
	~Family();
};

Family::Family(string name, int size)
{
	this->p = new Person[size];
	this->size = size;
	this->familyName = name;
}

Family::~Family()
{
}

void Family::setName(int num, string name)
{
	this->p[num].setname(name);
	
}

void Family::show()
{
	cout << this->familyName << " 가족은 다음과 같이 " << this->size << " 명 입니다." << endl;
	for (int i = 0; i < this->size; i++)
	{
		cout << this->p[i].getName() << "  ";
	}
}

int main()
{
	Family* simpson = new Family("Simpson", 3);
	simpson->setName(0, "Mr.Simpson");
	simpson->setName(1, "Mrs.Simpson");
	simpson->setName(2, "Bart.Simpson");

	simpson->show();
	delete simpson;
	
	return 0;
}