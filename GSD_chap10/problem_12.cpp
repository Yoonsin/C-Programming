#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <cstdlib>
#define DEFAULT_PROBLEM 5
using namespace std;

class Word {
public:
	string eng;
	string kor;
};

int main(void) {

	string eng;
	string kor;

	vector<Word> v;
	vector<Word> v_2;
;

	v.push_back(Word {"dall", "인형" });
	v.push_back(Word{ "stock", "주식" });
	v.push_back(Word{ "painting", "사진" });
	v.push_back(Word{ "bear", "곰" });
	v.push_back(Word{ "lover", "애인" });
	
	srand((unsigned)time(0));
	


	

	int input; //테스트의 input 값

	Word w; //어휘삽입시 필요한 변수
	int problem_num= DEFAULT_PROBLEM; //어휘테스트의 문제 갯수
	int n[4]; //어휘테스트시 중복없는 랜덤값을 담기위한 배열
	int ans_num; //어휘테스트의 정답 인덱스
	int ans; //어휘테스트의 input값

	bool test_flag = true; //테스트 지속 여부


	while (test_flag) {
		cout << "영어 어휘 테스트를 시작합니다. 1~4외 다른 입력시 종료합니다." << endl;
		cout << "어휘 삽입: 1, 어휘 테스트: 2, 프로그램 종료: 그외키 >> ";
		cin >> input;

		switch (input) {
		case 1:
			cout << "영어 단어에 exit를 입력하면 입력 끝"<<endl;
			while (true) {
				cout << "영단어 : ";
				cin >> eng;
				if (eng == "exit")
					break;
				cout << "한단어 : ";
				cin >> kor;
				w.eng = eng;
				w.kor = kor;
				v.push_back(w);
				problem_num++;
			}
			break;

		case 2:
			while (true)
			{
				int i = 0;
				for (i = 0; i < 4; i++) { //랜덤하게 선택

					n[i] = rand() % problem_num; //0부터 DEFAULT_PROBLEM-1까지 범위의 난수

					for (int j = 0; j < i; j++) { //중복 방지
						if (n[i] == n[j])i--;
					}

				}

				for (i = 0; i < 4; i++) {
					v_2.push_back(v[n[i]]);
				}

				ans_num = rand() % 4;

				cout << v_2[ans_num].eng << "?" << endl; //0번째 인덱스가 답
				//나머지 3개


				for (int i = 0; i < 4; i++) { //랜덤하게 출력
					cout << "(" << i + 1 << ")" << v_2[i].kor << " ";
				}
				cout << ":";

				//cout << endl << ans_num;

				cin >> ans;
				if (1 > ans || ans > 4) {
					break;
				}
				if (v_2[ans - 1].eng == v_2[ans_num].eng) {
					cout << "Excellent !!" << endl;
				}
				else {
					cout << "No. !!" << endl;
				}

				v_2.clear();
				
			}
			break;
		default:
			test_flag = false;
			break;
		}

		
	}

}