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
	pShape->draw(); //�θ�� �ڽ� �Ѵ� ȣ��
	pShape->Shape::draw(); //�θ� ȣ�� (���� ���ε�)
}