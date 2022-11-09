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
	cout << "생성자 실행 radius = " << radius << endl;
}

Circle::Circle(int r)
{
	radius = r;
	cout << "생성자 실행 radius = " << radius << endl;
}

Circle::~Circle()
{
	cout << "소멸자 실행 radius = " << radius << endl;
}

double Circle::getArea() 
{
	return 3.14 * radius * radius;
}

int main()
{
	int n; //개수
	cout << "개수를 입력해 주세요.. >> ";
	cin >> n;

	Circle* cArray = new Circle[n];
	Circle* p = cArray;
	int radius;
	float area;
	int sum = 0;
	
	for (int i = 0; i < n; i++)
	{
		cout << "원 " << i << "의 반지름을 입력해 주세요.. >> ";
		cin >> radius;
		p->setRadius(radius);
		area = p->getArea();
		cout << "면적 : " << area << endl; 

		if (area >= 100 && area <= 200)
			sum++;
		p++;
	}

	cout << "면적이 100에서 200사이인 원의 갯수는 " << sum << "개 입니다\n";

	delete[] cArray;

	return 0;
}