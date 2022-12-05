#include <iostream>
#include <iomanip>
using namespace std;

class Coffee {
	int coffee, suger, cream, water, cup;
	int input;

public:
	Coffee(int coffee = 3, int suger = 3, int cream = 3, int water = 3, int cup = 3) {
		this->coffee = coffee;
		this->suger = suger;
		this->cream = cream;
		this->water = water;
		this->cup = cup;

		this->input = 0;

		cout << "------명품 커피 자판기켭니다.------" << endl;
	}

	int renderMenu();
	void renderCoffee(int menu);
};

int Coffee::renderMenu() {

	cout << "보통 커피: 0, 설탕 커피: 1, 블랙 커피:2, 채우기:3, 종료:4 >> ";
	cin >> this->input;

	return this->input;
}

void Coffee::renderCoffee(int menu) {

	switch (menu)
	{
	case 0:
		if (this->coffee > 0 && this->suger > 0 && this->cream > 0 && this->water > 0 && this->cup > 0) {
			cout << "맛있는 보통 커피 나왔습니다~~" << endl;
			this->coffee--; this->suger--; this->cream--; this->water--; this->cup--;
		}
		else {
			cout << "재료가 부족해요~~" << endl;
		}
		
		break;
	case 1:
		if (this->coffee > 0 && this->suger > 0 && this->water > 0 && this->cup > 0) {
			cout << "맛있는 설탕 커피 나왔습니다~~" << endl;
			this->coffee--; this->suger--; this->water--; this->cup--;
		}
		else {
			cout << "재료가 부족해요~~" << endl;
		}
		
		break;
	case 2:
		if (this->coffee > 0 && this->water > 0 && this->cup > 0) {
			cout << "맛있는 블랙 커피 나왔습니다~~" << endl;
			this->coffee--; this->water--; this->cup--;
		}
		else {
			cout << "재료가 부족해요~~" << endl;
		}
		break;
	case 3:
		cout << "모든 통을 채웁니다~~" << endl;
		this->coffee = 3; this->suger = 3; this->cream = 3; this->water=3; this->cup=3;
		break;
	default:
		break;
	}

	cout << left<< setw(10)<< "Coffee"; //setw()는 디폴트가 오른쪽 정렬이기 때문에 왼쪽정렬은 std::left를 넣어주어야 함
	for (int i = 0; i < this->coffee; i++)
		cout << '*';
	cout << endl;

	cout << left << setw(10) << "Sugar";
	for (int i = 0; i < this->suger; i++)
		cout << '*';
	cout << endl;

	cout << left << setw(10) << "Cream";
	for (int i = 0; i < this->cream; i++)
		cout << '*';
	cout << endl;

	cout << left << setw(10)  << "Water";
	for (int i = 0; i < this->water; i++)
		cout << '*';
	cout << endl;

	cout << left << setw(10) << "Cup";
	for (int i = 0; i < this->cup; i++)
		cout << '*';
	cout << endl;

}


int main(int argc, char* argv[]) {

	Coffee c;
	c.renderCoffee(4); //처음엔 아무 메뉴도 출력 안되게 인수에 4 넣어주기
	int menu;

	while (true)
	{
		menu = c.renderMenu();
		if (menu!= 4) {
			c.renderCoffee(menu);
		} else
		{
			break;
		}

	}



	return 0;
}