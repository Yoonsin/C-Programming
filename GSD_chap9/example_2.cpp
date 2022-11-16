#include <iostream>
using namespace std;

class Base {
public:
	virtual void f() { cout << "Base::f() called" << endl; }
};

class Derived : public Base {
public:
	virtual void f() { cout << "Derived::f()called" << endl; }
};

void main() {
	Derived d, * pDer;
	pDer = &d;
	pDer->f();
	//업캐스팅 : 상속 클래스를 가리키는 객체 포인터를 부모 클래스의 포인터로 받는 것.
	//다운캐스팅 : 부모 클래스를 가리키는 포인터를 상속 클래스를 가리키는 포인터로 받는 것 (명시적으로 타입 변환 
	Base* pBase;
	pBase = pDer;
	pBase->f();
}