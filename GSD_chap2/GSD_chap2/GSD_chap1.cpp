#include <iostream>
#include <cstring> // strcmp() �Լ��� ����ϱ� ���� ��� ���� (C-��Ʈ�� ���)

using namespace std; //std �̸� ������ ����� ����̸��� std:: ����

int main() {
	// << ��Ʈ�� ���� ������
	// >> ��Ʈ�� �Է� ������
	// cout ��ü -> ��ũ�� ��� ��ġ�� ����� ǥ�� C++ ��� ��Ʈ�� ��ü
	// cin ��ü -> ǥ�� �Է� ��ġ�� Ű���带 �����ϴ� C++ �Է� ��Ʈ�� ��ü

	int menu = 0;
	int size = 0;

	cout << "***** �¸��忡 ���� ���� ȯ���մϴ�. *****" << endl;

	while (true) {
		cout << "«��:1, ¥��:2, ������:3, ����:4>> ";
		cin >> menu;
		if (menu == 4) {
			cout << "���� ������ �������ϴ�.";
			break;
		}
		else if (menu < 4) {
			cout << "���κ�?";
			cin >> size;

			switch (menu) {
			case 1: cout << "«�� " << size << "�κ� ���Խ��ϴ�." << endl; break;
			case 2: cout << "¥�� " << size << "�κ� ���Խ��ϴ�." << endl; break;
			case 3: cout << "������ " << size << "�κ� ���Խ��ϴ�." << endl; break;
			}
		}
		else {
			cout << "�ٽ� �ֹ��ϼ���!!" << endl;
		}
		
	}

	return 0;
}