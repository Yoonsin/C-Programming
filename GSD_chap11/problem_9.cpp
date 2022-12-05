#include<iostream>
#include<string>
using namespace std;

class Phone { // 전화 번호를 표현하는 클래스 
    string name;
    string telnum;
    string address;
public:
    Phone(string name = "", string telnum = "", string address = "") {
        this->name = name;
        this->telnum = telnum;
        this->address = address;
    }
    void set(string name, string telnum, string address) {
        this->name = name;
        this->telnum = telnum;
        this->address = address;
    }
    string getName() { return name; }
    string getTelnum() { return telnum; }
    string getAddress() { return address; }
};
istream& operator >>(istream& stream, Phone& p) {
    string name, telnum, address;
    cout << "이름:";
    getline(stream, name);
    cout << "전화번호:";
    getline(stream, telnum);
    cout << "주소:";
    getline(stream, address);
    p.set(name, telnum, address);
    return stream;
}

ostream& operator <<(ostream& stream, Phone& p) {
    stream << "(" << p.getName() << "," << p.getTelnum() << "," << p.getAddress() << ")";
    return stream;
}


int main() {
    Phone girl, boy;
    cin >> girl >> boy;
    cout << girl << endl << boy << endl;
}


