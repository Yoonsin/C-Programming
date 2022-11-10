#include <iostream>
#include <string>
using namespace std;

class Printer{
private:
	int printedCount, availableCount;
	string model, manufacturer;
protected:
	Printer(string model, string manufacturer, int availableCount);
public:
	bool print(int pages);
	void showPrinter();


};

Printer::Printer(string model, string manufacturer, int availableCount) {
	this->model = model, 
	this->manufacturer = manufacturer,
	this->availableCount = availableCount;
	
}

void Printer::showPrinter() {
	cout << this->model << " ," << this->manufacturer << " ,���� ���� " << this->availableCount << "��";
}

bool Printer::print(int pages) {
	if (this->availableCount - pages >= 0) {
		this->availableCount -= pages;
		cout << "����Ʈ�Ͽ����ϴ�." << endl;
		return true;
	} 
	else {
		cout << "������ �����Ͽ� ����Ʈ �� �� �����ϴ�." << endl;
		return false;
	}
}

class InkjetPrinter : public Printer {
private:
	int availableInk;
public:
	InkjetPrinter(string model, string manufacturer, int availableCount, int availableInk) : Printer(model, manufacturer, availableCount) { this->availableInk = availableInk; }
	void showInkJet() { showPrinter(); cout << ", ���� ��ũ " << this->availableInk;}
	void printIntJet(int pages, int ink);
};


void InkjetPrinter::printIntJet(int pages, int ink) {
	
	if (this->availableInk - ink >= 0){
		
		if (print(pages)) {
			this->availableInk -= ink;
			
		}

	}
	else {
		cout << "��ũ�� �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;

	}
	
}

class LazerPrinter : public Printer {
public:
	int availableToner;
	LazerPrinter(string model, string manufacturer, int availableCount, int availableToner) : Printer(model, manufacturer, availableCount) { this->availableToner = availableToner; }
	void showLazer() { showPrinter(); cout << ", ���� ��� " << this->availableToner; }
	void printLazer(int pages, int toner);
	
};

void LazerPrinter::printLazer(int pages, int toner) {
	if (this->availableToner - toner >= 0) {
		if (print(pages)) {
			this->availableToner -= toner;
			
		}

		
	}
	else {
		cout << "��ʰ� �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;

	}
}


int main()
{
	InkjetPrinter* pr_ink = new InkjetPrinter("Officejet V40", "HP", 5, 10);
	LazerPrinter* pr_laz = new LazerPrinter("SCX-6x45","�Ｚ����",3,20);

	cout << "���� �۵����� 2 ���� �����ʹ� �Ʒ��� ����." << endl;
	cout << "��ũ�� : "; pr_ink->showInkJet(); cout << endl;
	cout << "������ : "; pr_laz->showLazer(); cout << endl << endl ;
	
	int pr_num = 0, pages = 0;
	int ink = 0, toner = 0;
	char cr;
	

	while(true) {

		cout << "������ (1:��ũ��, 2:������)�� �ż� �Է�>> ";
		cin >> pr_num >> pages;
		if (pr_num == 1){
			ink = pages;
			pr_ink->printIntJet(pages, ink);
		}
		else if (pr_num == 2) {
			toner = pages;
			pr_laz->printLazer(pages, toner);
		}
		pr_ink->showInkJet(); cout << endl;
		pr_laz->showLazer(); cout << endl;

		cout << "��� ����Ʈ �Ͻðڽ��ϱ�(y/n)>>";
		cin >> cr;
		if (cr == 'y')
			continue;
		else if (cr == 'n')
			break;
		else
			continue;

		cout << endl;
		


	}

	delete pr_ink, pr_laz;

	return 0;
}