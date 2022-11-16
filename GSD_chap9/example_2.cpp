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
	//��ĳ���� : ��� Ŭ������ ����Ű�� ��ü �����͸� �θ� Ŭ������ �����ͷ� �޴� ��.
	//�ٿ�ĳ���� : �θ� Ŭ������ ����Ű�� �����͸� ��� Ŭ������ ����Ű�� �����ͷ� �޴� �� (��������� Ÿ�� ��ȯ 
	Base* pBase;
	pBase = pDer;
	pBase->f();
}