#include <iostream>
#include <string>
using namespace std;

int main() {
	double pi = 3.14;

	int r;
	cout << "반지름을 입력하세요: ";
	cin >> r;

	auto calc = [pi](int r) -> double {return r * r * pi; };
	cout << calc(r);
}