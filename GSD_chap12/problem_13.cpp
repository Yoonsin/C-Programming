#include<iostream>
#include<fstream>
#include<vector>
#include<string>
using namespace std;

void compare(vector<string>& v, string input) {
    int cnt = 0;

}

int main() {
    string line, input;
    vector<string> v;
    ifstream fin("c:\\Temp\\words.txt");
    if (!fin) {
        cout << "c:\\Temp\\words.txt 열기 오류" << endl;
    }
    while (getline(fin, line)) {
        v.push_back(line);
    }
    cout << "... words.txt 파일 로딩 완료" << endl;
    fin.close();
    cout << "검색을 시작합니다. 단어를 입력해주세요." << endl;
    while (true)
    {
        cout << "단어>> ";
        cin >> input;
        if (input == "exit")
            return 0;

        vector<string> temp;
        for (int i = 0; i < v.size(); i++) {
            if (input == v[i].substr(0, input.length()))
                temp.push_back(v[i]);
        }
        for (int i = 0; i < temp.size(); i++) {
            cout << temp[i] << endl;
        }
        if (temp.size() == 0)
            cout << "발견할 수 없음" << endl;
    }
}

