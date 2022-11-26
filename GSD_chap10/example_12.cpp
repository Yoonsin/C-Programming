#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
	map<string, string> dic;

	dic.insert(make_pair("love", "사랑")); //키는 영어 단어, 값은 한글 단어
	dic["love"] = "사랑";

	string kor = dic["love"];
	cout << kor << endl;
	kor = dic.at("love");
	cout << kor;

}