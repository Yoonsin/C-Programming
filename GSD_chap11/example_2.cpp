#include <iostream>
using namespace std;

void get1() {
	cout << "cin.get()�� <Enter> Ű���� �Է� �ް� ����մϴ�>>";
	int ch;
	while ((ch = cin.get()) != EOF) { //get�� �ܼ��� �Է� ��Ʈ���� �ִ°� 1���� �������� ���� ��
		cout.put(ch);
		if (ch == '\n')
			break; //����Ű�̸� �Է� �ߴ�
	}
}

void get2() {
	cout << "cin.get(char&)�� <Enter> Ű���� �Է� �ް� ����մϴ�>>";
	char ch;
	while (true) {
		cin.get(ch); //���� �б�
		if (cin.eof()) break; //eof�� ������ �б� ����
		cout.put(ch); //ch�� ���� ���
		
		if (ch == '\n')
			break;
	}
}


int main(int argc, char* argv[]) {
	
	get1();
	get2();

	return 0;
}