#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
	map<string, string> dic;

	dic.insert(make_pair("love", "���")); //Ű�� ���� �ܾ�, ���� �ѱ� �ܾ�
	dic["love"] = "���";

	string kor = dic["love"];
	cout << kor << endl;
	kor = dic.at("love");
	cout << kor;

}