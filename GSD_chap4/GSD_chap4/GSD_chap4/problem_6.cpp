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
		cout << "�Ʒ��� �� ���� �Է��ϼ���. (exit�� �Է��ϸ� �����մϴ�.) " << endl << ">> ";
		getline(cin, str, '\n');
		
		if (str == "exit") break;

		
		//�������� �ٲ� ���� ��ġ ���ϱ� (���� ����)
		do {
			n = rand() % str.length();
		} while (str[n] == ' ');
		
		//�������� ���ĺ��� �ϳ��� ���ѵ� 
		//f~e������ ���� rand() % (e-f+1) + f ; 
		re_letter = rand() % (122 - 97 + 1) + 97; 
		
		
		//���ڿ��� ������ �ƴ� ���� �����ϱ�

		str[n] = re_letter;
		cout << str <<endl;



	}
	return 0;
}