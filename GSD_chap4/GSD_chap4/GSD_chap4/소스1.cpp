#include <iostream>
#include <string>
using namespace std;



int main()
{
	string s;
	cout << "���� ���� ���ڿ��� �Է��ϼ���. �Է��� ���� &�����Դϴ�. " << endl;
	getline(cin, s, '&'); //���ڿ� �Է�
	cin.ignore(); //���� �Ѱ���ŭ �Է¹��۸� ���

	string f, r;
	cout << endl << "find ";
	getline(cin, f, '\n');
	cout << "replace ";
	getline(cin, r, '\n');

	int startindex = 0;
	while (true) {
		int findex = s.find(f, startindex);
		if (findex == -1)
			break;
		s.replace(findex, f.length(), r); //findex���� ���ڿ� f�� ���̸�ŭ ���ڿ� r�� ����
		startindex = findex + r.length();
	}

	cout << s << endl;


	return 0;
}