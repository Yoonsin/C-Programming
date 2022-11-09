#include <iostream>
using namespace std;

class Color {
	int red, green, blue;
public:
	Color() { this->red = this->green = this->blue = 0; }
	Color(int r, int g, int b) { this->red = r, this->green = g, this->blue = b; }
	void setColor(int r, int g, int b) { this->red = r, this->green = g, this->blue = b; }
	void show() { cout << red << ' ' << green << ' ' << blue << endl; }
};

int main()
{
	Color screenColor(255, 0, 0); //빨간색 screenColor 객체 생성
	Color* p; //Color 타입의 포인터 변수 p 선언
	p = &screenColor;
	p->show();
	Color colors[3];
	p = colors;

	p[0].setColor(255, 0, 0);
	p[1].setColor(0, 255, 0);
	p[2].setColor(0, 0, 255);

	for (int i = 0; i < 3; i++)
	{
		p[i].show();
	}




	return 0;
}