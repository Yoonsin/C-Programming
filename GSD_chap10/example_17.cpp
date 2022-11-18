#include <iostream>
#include <string>
using namespace std;

int main() {
	double pi = 3.14;

	auto clac = [pi](int r) -> double { return pi * r * r;};

	cout << "¸éÀûÀº " << clac(3);

}