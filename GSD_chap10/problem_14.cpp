#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
	map<string, string> code;
	int input;
	string s;
	
	string name;
	string ps;

	bool test_flag = true;

	cout << "***** ��ȣ ���� ���α׷� WHO�� �����մϴ� *****" << endl;
	
	while (test_flag) {
		cout << "����:1, �˻�:2, ����:3>> ";
		cin >> input;
		getchar();
		switch (input)
		{
		case 1:
			cout << "�̸� ��ȣ ";
			getline(cin,s,'\n');
			name = s.substr(0, s.find(" "));
			ps = s.substr(s.find(" ") + 1, s.size());
			code.insert(make_pair(name, ps));
			break;
		case 2:
			cout << "�̸�? ";
			cin >> name;
			while (true) {
				cout << "��ȣ? ";
				cin >> ps;
				if (code[name] == ps) {
					cout << "���!!" << endl;
					break;
				}
				else {
					cout << "����~~" << endl;
				}
			}
			break;
		case 3:
			cout << "���α׷��� �����մϴ�...";
			test_flag = false;
			break;
		default:
			break;
		}
	}
}