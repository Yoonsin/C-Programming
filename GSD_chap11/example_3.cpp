#include <iostream>
#include <cstring>
using namespace std;

int main(int argc,char* argv[]) {
	char cmd[80];
	cout << "cin.get(char*, int)�� ���ڿ��� �н��ϴ�." << endl;
	while (true) {
		cout << "�����Ϸ��� exit�� �Է��ϼ��� >> ";
		cin.get(cmd, 80); //n-1 ������ �Է��ϰ� �迭 cmd�� ����. �������� '\0' ���� ����. �Է� ���� '\n'�� ������ '\0'�� �����ϰ� ����
		if (strcmp(cmd, "exit") == 0) {
			cout << "���α׷��� �����մϴ�...";
			return 0;
		}
		else {
			cin.ignore(1); //���ۿ� �����ִ� Ű <enter> == '\n' ����
		}
	}
}