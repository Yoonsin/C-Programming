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
        if (lack())    cout << "재료가 부족합니다~~" << endl;
        else { coffee--; cream--; water--; cup--;    cout << "맛있는 보통 커피 나왔습니다~~" << endl; }
    }
    void sugar_coffee() {
        if (lack())    cout << "재료가 부족합니다~~" << endl;
        else { coffee--; sugar--; water--; cup--;    cout << "맛있는 설탕 커피 나왔습니다~~" << endl; }
    }
    void black_coffee() {
        if (lack())    cout << "재료가 부족합니다~~" << endl;
        else { coffee--; water--; cup--;        cout << "맛있는 블랙 커피 나왔습니다~~" << endl; }
    }
    void fill() { coffee = 3; sugar = 3; cream = 3; water = 3; cup = 3; cout << "모든 통을 채웁니다.~~" << endl; }
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
    cout << "-----명품 커피 자판키 켭니다-----" << endl;
    while (true) {
        v.show_all();
        cout << "보통 커피:0, 설탕 커피:1, 블랙 커피:2, 채우기:3, 종료:4>> ";
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


