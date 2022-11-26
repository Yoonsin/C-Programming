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

	cout << "***** 암호 관리 프로그램 WHO를 시작합니다 *****" << endl;
	
	while (test_flag) {
		cout << "삽입:1, 검사:2, 종료:3>> ";
		cin >> input;
		getchar();
		switch (input)
		{
		case 1:
			cout << "이름 암호 ";
			getline(cin,s,'\n');
			name = s.substr(0, s.find(" "));
			ps = s.substr(s.find(" ") + 1, s.size());
			code.insert(make_pair(name, ps));
			break;
		case 2:
			cout << "이름? ";
			cin >> name;
			while (true) {
				cout << "암호? ";
				cin >> ps;
				if (code[name] == ps) {
					cout << "통과!!" << endl;
					break;
				}
				else {
					cout << "실패~~" << endl;
				}
			}
			break;
		case 3:
			cout << "프로그램을 종료합니다...";
			test_flag = false;
			break;
		default:
			break;
		}
	}
}