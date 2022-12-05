#include<iostream>
#include<fstream>
using namespace std;


int main() {
	ifstream fin("c:\\windows\\system.ini", ios::in | ios::binary);
	if (!fin) {
		cout << "c:\\windows\\system.ini 열기 오류" << endl;
	}
	char ch[32] = { 0 };
	int cnt = 0;
	while (!fin.eof()) {
		fin.read(ch, 32);
		int n = fin.gcount();
		cnt += n;
	}
	cout << "파일의 크기는 " << cnt << " 입니다." << endl;
}

