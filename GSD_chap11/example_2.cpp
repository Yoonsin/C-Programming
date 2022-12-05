#include <iostream>
using namespace std;

void get1() {
	cout << "cin.get()로 <Enter> 키까지 입력 받고 출력합니다>>";
	int ch;
	while ((ch = cin.get()) != EOF) { //get은 단순히 입력 스트림에 있는걸 1개씩 가져오는 것일 뿐
		cout.put(ch);
		if (ch == '\n')
			break; //엔터키이면 입력 중단
	}
}

void get2() {
	cout << "cin.get(char&)로 <Enter> 키까지 입력 받고 출력합니다>>";
	char ch;
	while (true) {
		cin.get(ch); //문자 읽기
		if (cin.eof()) break; //eof를 만나면 읽기 종료
		cout.put(ch); //ch의 문자 출력
		
		if (ch == '\n')
			break;
	}
}


int main(int argc, char* argv[]) {
	
	get1();
	get2();

	return 0;
}