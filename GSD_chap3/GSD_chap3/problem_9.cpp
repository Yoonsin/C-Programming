#include <iostream>
using namespace std;

class Oval
{
public:
	Oval();
	Oval(int w, int h);
	~Oval();
	void show();
	int getWidth();
	int getHeight();
	void set(int w, int h);

private:
	int width;
	int height;
};

Oval::Oval()
{
	width = 1;
	height = 1;
}

Oval::Oval(int w, int h)
{
	width = w;
	height = h;
}

Oval::~Oval()
{
	cout << "Oval �Ҹ� ";
	cout << "width = " << width << ", height = " << height << endl;
}

int Oval::getWidth()
{
	return width;
}

int Oval::getHeight()
{
	return height;
}

void Oval::set(int w, int h)
{
	width = w;
	height = h;
}

void Oval::show()
{
	cout << "width = " << width << ", height = " << height << endl;

}

int main()
{
	Oval a, b(3, 4);
	a.set(10, 20);
	a.show();
	cout << b.getWidth() << "," << b.getHeight() << endl;

	return 0;
}