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

		cout << "------��ǰ Ŀ�� ���Ǳ��մϴ�.------" << endl;
	}

	int renderMenu();
	void renderCoffee(int menu);
};

int Coffee::renderMenu() {

	cout << "���� Ŀ��: 0, ���� Ŀ��: 1, �� Ŀ��:2, ä���:3, ����:4 >> ";
	cin >> this->input;

	return this->input;
}

void Coffee::renderCoffee(int menu) {

	switch (menu)
	{
	case 0:
		if (this->coffee > 0 && this->suger > 0 && this->cream > 0 && this->water > 0 && this->cup > 0) {
			cout << "���ִ� ���� Ŀ�� ���Խ��ϴ�~~" << endl;
			this->coffee--; this->suger--; this->cream--; this->water--; this->cup--;
		}
		else {
			cout << "��ᰡ �����ؿ�~~" << endl;
		}
		
		break;
	case 1:
		if (this->coffee > 0 && this->suger > 0 && this->water > 0 && this->cup > 0) {
			cout << "���ִ� ���� Ŀ�� ���Խ��ϴ�~~" << endl;
			this->coffee--; this->suger--; this->water--; this->cup--;
		}
		else {
			cout << "��ᰡ �����ؿ�~~" << endl;
		}
		
		break;
	case 2:
		if (this->coffee > 0 && this->water > 0 && this->cup > 0) {
			cout << "���ִ� �� Ŀ�� ���Խ��ϴ�~~" << endl;
			this->coffee--; this->water--; this->cup--;
		}
		else {
			cout << "��ᰡ �����ؿ�~~" << endl;
		}
		break;
	case 3:
		cout << "��� ���� ä��ϴ�~~" << endl;
		this->coffee = 3; this->suger = 3; this->cream = 3; this->water=3; this->cup=3;
		break;
	default:
		break;
	}

	cout << left<< setw(10)<< "Coffee"; //setw()�� ����Ʈ�� ������ �����̱� ������ ���������� std::left�� �־��־�� ��
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
	c.renderCoffee(4); //ó���� �ƹ� �޴��� ��� �ȵǰ� �μ��� 4 �־��ֱ�
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