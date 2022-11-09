#include <iostream>
using namespace std;

class Power {
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0) {
		this->kick = kick, this->punch = punch;
	}
	void show();
	bool operator== (Power op2);
};

void Power::show() {
	cout << "kick=" << kick << "," << "punch=" << punch << endl;
}

bool Power::operator==(Power op2) {
	if (this->punch == op2.punch && this->kick == op2.kick)
		return true;
	else return false;
}

int main() {
	Power a(3, 5), b(4, 2);
	a.show();
	b.show();
	if (a == b)
		cout << "a와 b는 같다.";
	else
		cout << "a와 b는 같지 않다.";
	

	return 0;
}