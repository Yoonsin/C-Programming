#include <iostream>
using namespace std;

class Calculator {
public:
	virtual int add(int a, int b) = 0;
	virtual int subtract(int a, int b) = 0;
	virtual double average(int a[], int size) = 0;
};

class GoodCalc : public Calculator {
public:
	int add(int a, int b) { return a + b; }
	int subtract(int a, int b) { return a - b; }
	double average(int a[], int size) {
		double sum = 0;
		for (int i = 0; i < size; i++)
			sum += a[i];
		return sum / size;
	}
};

int main(void) {
	int a[] = { 1,2,3,4,5 };
	Calculator* c = new GoodCalc();
	cout << c->add(1, 2) << endl;
	cout << c->subtract(6, 2) << endl;
	cout << c->average(a, 5) << endl;
	delete c;
}