#include <iostream>
using namespace std;

class Point {
	int x, y;
public:
	Point(int x = 0, int y = 0) {
		this->x = x;
		this->y = y;
	}
	friend istream& operator >> (istream& ins, Point& a);
	friend ostream& operator << (ostream& ins, Point a);
};

istream& operator >> (istream& ins, Point& a) {
	cout << "x ÁÂÇ¥>> ";
	ins >> a.x;
	cout << "y ÁÂÇ¥>> ";
	ins >> a.y;
	return ins;
}
ostream& operator << (ostream& stream, Point a) {
	stream << "( " << a.x << ',' << a.y << " )";
	return stream;
}

int main(int argc, char* argv[]) {
	Point a;
	cin >> a;
	cout << a;
	return 0;
}