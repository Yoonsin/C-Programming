#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand((unsigned)(time(0)));
	string str;
	
	int n = 0;
	char re_letter;

	while (true)
	{
		cout << "아래에 한 줄을 입력하세요. (exit를 입력하면 종료합니다.) " << endl << ">> ";
		getline(cin, str, '\n');
		
		if (str == "exit") break;

		
		//랜덤으로 바꿀 글자 위치 정하기 (공백 제외)
		do {
			n = rand() % str.length();
		} while (str[n] == ' ');
		
		//랜덤으로 알파벳중 하나를 정한뒤 
		//f~e까지의 정수 rand() % (e-f+1) + f ; 
		re_letter = rand() % (122 - 97 + 1) + 97; 
		
		
		//문자열중 공백이 아닌 곳에 삽입하기

		str[n] = re_letter;
		cout << str <<endl;



	}
	return 0;
}