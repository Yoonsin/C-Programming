#include <iostream>
using namespace std;

istream& question(istream& ins) {
	cout << "�ſ�� �ſ�� ���� ���� ���ڴ�?";
	return ins;
}


int main(int argc, char* argv[]) {

	string answer;

	cin >> question >> answer;
	cout << "���󿡼� ���� ���� ����� " << answer << "�Դϴ�." << endl;

	return 0;
}