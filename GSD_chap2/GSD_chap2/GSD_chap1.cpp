#include <iostream>
#include <cstring> // strcmp() 함수를 사용하기 위한 헤더 파일 (C-스트링 방식)

using namespace std; //std 이름 공간에 선언된 모든이름에 std:: 생략

int main() {
	// << 스트림 삽입 연산자
	// >> 스트림 입력 연산자
	// cout 객체 -> 스크린 출력 장치에 연결된 표준 C++ 출력 스트림 객체
	// cin 객체 -> 표준 입력 장치인 키보드를 연결하는 C++ 입력 스트림 객체

	int menu = 0;
	int size = 0;

	cout << "***** 승리장에 오신 것을 환영합니다. *****" << endl;

	while (true) {
		cout << "짬뽕:1, 짜장:2, 군만두:3, 종료:4>> ";
		cin >> menu;
		if (menu == 4) {
			cout << "오늘 영업은 끝났습니다.";
			break;
		}
		else if (menu < 4) {
			cout << "몇인분?";
			cin >> size;

			switch (menu) {
			case 1: cout << "짬뽕 " << size << "인분 나왔습니다." << endl; break;
			case 2: cout << "짜장 " << size << "인분 나왔습니다." << endl; break;
			case 3: cout << "군만두 " << size << "인분 나왔습니다." << endl; break;
			}
		}
		else {
			cout << "다시 주문하세요!!" << endl;
		}
		
	}

	return 0;
}