#include <iostream>
#include <cstring>
using namespace std;

int main(int argc,char* argv[]) {
	char cmd[80];
	cout << "cin.get(char*, int)로 문자열을 읽습니다." << endl;
	while (true) {
		cout << "종료하려면 exit를 입력하세요 >> ";
		cin.get(cmd, 80); //n-1 개까지 입력하고 배열 cmd에 저장. 마지막에 '\0' 문자 삽입. 입력 도중 '\n'을 만나면 '\0'을 삽입하고 리턴
		if (strcmp(cmd, "exit") == 0) {
			cout << "프로그램을 종료합니다...";
			return 0;
		}
		else {
			cin.ignore(1); //버퍼에 남아있는 키 <enter> == '\n' 제거
		}
	}
}