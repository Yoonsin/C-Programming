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

	v.push_back(Word {"dall", "����" });
	v.push_back(Word{ "stock", "�ֽ�" });
	v.push_back(Word{ "painting", "����" });
	v.push_back(Word{ "bear", "��" });
	v.push_back(Word{ "lover", "����" });
	
	srand((unsigned)time(0));
	


	

	int input; //�׽�Ʈ�� input ��

	Word w; //���ֻ��Խ� �ʿ��� ����
	int problem_num= DEFAULT_PROBLEM; //�����׽�Ʈ�� ���� ����
	int n[4]; //�����׽�Ʈ�� �ߺ����� �������� ������� �迭
	int ans_num; //�����׽�Ʈ�� ���� �ε���
	int ans; //�����׽�Ʈ�� input��

	bool test_flag = true; //�׽�Ʈ ���� ����


	while (test_flag) {
		cout << "���� ���� �׽�Ʈ�� �����մϴ�. 1~4�� �ٸ� �Է½� �����մϴ�." << endl;
		cout << "���� ����: 1, ���� �׽�Ʈ: 2, ���α׷� ����: �׿�Ű >> ";
		cin >> input;

		switch (input) {
		case 1:
			cout << "���� �ܾ exit�� �Է��ϸ� �Է� ��"<<endl;
			while (true) {
				cout << "���ܾ� : ";
				cin >> eng;
				if (eng == "exit")
					break;
				cout << "�Ѵܾ� : ";
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
				for (i = 0; i < 4; i++) { //�����ϰ� ����

					n[i] = rand() % problem_num; //0���� DEFAULT_PROBLEM-1���� ������ ����

					for (int j = 0; j < i; j++) { //�ߺ� ����
						if (n[i] == n[j])i--;
					}

				}

				for (i = 0; i < 4; i++) {
					v_2.push_back(v[n[i]]);
				}

				ans_num = rand() % 4;

				cout << v_2[ans_num].eng << "?" << endl; //0��° �ε����� ��
				//������ 3��


				for (int i = 0; i < 4; i++) { //�����ϰ� ���
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