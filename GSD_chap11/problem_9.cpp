#include<iostream>
#include<string>
using namespace std;

class Phone { // ��ȭ ��ȣ�� ǥ���ϴ� Ŭ���� 
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
    cout << "�̸�:";
    getline(stream, name);
    cout << "��ȭ��ȣ:";
    getline(stream, telnum);
    cout << "�ּ�:";
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


