#include <iostream>
using namespace std;

class Point {
	int x, y;
public:
	Point(int x = 0, int y = 0) {
		this->x = x;
		this->y = y;
	}
	friend ostream& operator<< (ostream& stream, Point a);
};

ostream& operator << (ostream& stream, Point a) {
	stream << "(" << a.x << "," << a.y << ")";
	return stream;
}


int main(int argc, char* argv[]) {

	Point p(3, 4);
	cout << p << endl;

	Point q(1, 100);
	Point r; //�����ڿ� �Ű����� ���ٶ��� ��ȣ �� �ʿ� ����
	cout << q << endl;
	cout << r;


	return 0;
}