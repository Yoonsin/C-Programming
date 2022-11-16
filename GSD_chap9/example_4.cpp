#include <iostream>
using namespace std;

class Shape {
public:
	virtual void draw() {
		cout << "--Shape--";
	}
};

class Circle : public Shape {
public:
	virtual void draw() override {
		Shape::draw();
		cout << " Circle" << endl;
	}
};

int main(void) {
	Circle circle;
	Shape* pShape = &circle;
	pShape->draw(); //부모랑 자식 둘다 호출
	pShape->Shape::draw(); //부모 호출 (정적 바인딩)
}