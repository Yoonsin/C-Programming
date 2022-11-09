#include <iostream>
using namespace std;

class Circle 
{
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
	void setRadius(int r) { radius = r; }
	double getArea();
};

Circle::Circle()
{
	radius = 1;
	cout << "������ ���� radius = " << radius << endl;
}

Circle::Circle(int r)
{
	radius = r;
	cout << "������ ���� radius = " << radius << endl;
}

Circle::~Circle()
{
	cout << "�Ҹ��� ���� radius = " << radius << endl;
}

double Circle::getArea() 
{
	return 3.14 * radius * radius;
}

int main()
{
	int n; //����
	cout << "������ �Է��� �ּ���.. >> ";
	cin >> n;

	Circle* cArray = new Circle[n];
	Circle* p = cArray;
	int radius;
	float area;
	int sum = 0;
	
	for (int i = 0; i < n; i++)
	{
		cout << "�� " << i << "�� �������� �Է��� �ּ���.. >> ";
		cin >> radius;
		p->setRadius(radius);
		area = p->getArea();
		cout << "���� : " << area << endl; 

		if (area >= 100 && area <= 200)
			sum++;
		p++;
	}

	cout << "������ 100���� 200������ ���� ������ " << sum << "�� �Դϴ�\n";

	delete[] cArray;

	return 0;
}