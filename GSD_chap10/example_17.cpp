#include <iostream>
#include <string>
using namespace std;

int main() {
	double pi = 3.14;

	int r;
	cout << "�������� �Է��ϼ���: ";
	cin >> r;

	auto calc = [pi](int r) -> double {return r * r * pi; };
	cout << calc(r);
}