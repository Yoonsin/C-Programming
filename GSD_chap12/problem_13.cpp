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
        cout << "c:\\Temp\\words.txt ���� ����" << endl;
    }
    while (getline(fin, line)) {
        v.push_back(line);
    }
    cout << "... words.txt ���� �ε� �Ϸ�" << endl;
    fin.close();
    cout << "�˻��� �����մϴ�. �ܾ �Է����ּ���." << endl;
    while (true)
    {
        cout << "�ܾ�>> ";
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
            cout << "�߰��� �� ����" << endl;
    }
}

