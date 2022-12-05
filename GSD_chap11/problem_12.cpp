#include<iostream>
using namespace std;

class Vending_Machine {
    int coffee;
    int sugar;
    int cream;
    int water;
    int cup;
public:
    Vending_Machine() { coffee = 3; sugar = 3; cream = 3; water = 3; cup = 3; }
    bool lack() {
        if (cup == 0)
            return true;
        else
            return false;
    }
    void _coffee() {
        if (lack())    cout << "��ᰡ �����մϴ�~~" << endl;
        else { coffee--; cream--; water--; cup--;    cout << "���ִ� ���� Ŀ�� ���Խ��ϴ�~~" << endl; }
    }
    void sugar_coffee() {
        if (lack())    cout << "��ᰡ �����մϴ�~~" << endl;
        else { coffee--; sugar--; water--; cup--;    cout << "���ִ� ���� Ŀ�� ���Խ��ϴ�~~" << endl; }
    }
    void black_coffee() {
        if (lack())    cout << "��ᰡ �����մϴ�~~" << endl;
        else { coffee--; water--; cup--;        cout << "���ִ� �� Ŀ�� ���Խ��ϴ�~~" << endl; }
    }
    void fill() { coffee = 3; sugar = 3; cream = 3; water = 3; cup = 3; cout << "��� ���� ä��ϴ�.~~" << endl; }
    void show_all() {
        cout << "Coffee    ";
        for (int i = 0; i < coffee; i++)    cout << "*";
        cout << endl;
        cout << "Sugar    ";
        for (int i = 0; i < sugar; i++)    cout << "*";
        cout << endl;
        cout << "CREAM    ";
        for (int i = 0; i < cream; i++)    cout << "*";
        cout << endl;
        cout << "Water    ";
        for (int i = 0; i < water; i++)    cout << "*";
        cout << endl;
        cout << "Cup    ";
        for (int i = 0; i < cup; i++)    cout << "*";
        cout << endl << endl << endl;
    }
};

int main() {
    Vending_Machine v;
    int input = 0;
    cout << "-----��ǰ Ŀ�� ����Ű �մϴ�-----" << endl;
    while (true) {
        v.show_all();
        cout << "���� Ŀ��:0, ���� Ŀ��:1, �� Ŀ��:2, ä���:3, ����:4>> ";
        cin >> input;
        switch (input) {
        case 0:
            v._coffee();
            break;
        case 1:
            v.sugar_coffee();
            break;
        case 2:
            v.black_coffee();
            break;
        case 3:
            v.fill();
            break;
        case 4:
            return 0;
            break;
        }
    }
}


