#include <iostream>
#include <string>
using namespace std;

int main() {
	auto love = [](string a, string b) {cout << a << b;};
	love("±è±è±è", "È²È²È²");
}