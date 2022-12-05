#include <iostream>
#include <string>
using namespace std;

class Book {
	string title;
	string press;
	string author;
public:
	Book(string title = " ", string press = " ", string author = " ") {
		this->title = title;
		this->press = press;
		this->author = author;
	}

	friend ostream& operator << (ostream& stream, Book b);
};

ostream& operator << (ostream& stream, Book b) {
	stream << b.title << ',' << b.press << "," << b.author;
	return stream;
}

int main(int argc,char* argv[]) {
	Book book("������ �����", "�ѱ����ǻ�", "����������");
	cout << book; //Book ��ü book ȭ�� ���
	
	return 0;
}