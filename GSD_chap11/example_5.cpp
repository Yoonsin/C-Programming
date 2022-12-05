#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char* argv[]) {

	cout << 30 << endl;
	
	cout.unsetf(ios::dec);
	cout.setf(ios::hex);
	cout << 30 << endl;

	cout.setf(ios::showbase);
	cout << 30 << endl;

	return 0;
}