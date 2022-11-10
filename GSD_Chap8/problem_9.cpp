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
	cout << this->model << " ," << this->manufacturer << " ,남은 종이 " << this->availableCount << "장";
}

bool Printer::print(int pages) {
	if (this->availableCount - pages >= 0) {
		this->availableCount -= pages;
		cout << "프린트하였습니다." << endl;
		return true;
	} 
	else {
		cout << "용지가 부족하여 프린트 할 수 없습니다." << endl;
		return false;
	}
}

class InkjetPrinter : public Printer {
private:
	int availableInk;
public:
	InkjetPrinter(string model, string manufacturer, int availableCount, int availableInk) : Printer(model, manufacturer, availableCount) { this->availableInk = availableInk; }
	void showInkJet() { showPrinter(); cout << ", 남은 잉크 " << this->availableInk;}
	void printIntJet(int pages, int ink);
};


void InkjetPrinter::printIntJet(int pages, int ink) {
	
	if (this->availableInk - ink >= 0){
		
		if (print(pages)) {
			this->availableInk -= ink;
			
		}

	}
	else {
		cout << "잉크가 부족하여 프린트할 수 없습니다." << endl;

	}
	
}

class LazerPrinter : public Printer {
public:
	int availableToner;
	LazerPrinter(string model, string manufacturer, int availableCount, int availableToner) : Printer(model, manufacturer, availableCount) { this->availableToner = availableToner; }
	void showLazer() { showPrinter(); cout << ", 남은 토너 " << this->availableToner; }
	void printLazer(int pages, int toner);
	
};

void LazerPrinter::printLazer(int pages, int toner) {
	if (this->availableToner - toner >= 0) {
		if (print(pages)) {
			this->availableToner -= toner;
			
		}

		
	}
	else {
		cout << "토너가 부족하여 프린트할 수 없습니다." << endl;

	}
}


int main()
{
	InkjetPrinter* pr_ink = new InkjetPrinter("Officejet V40", "HP", 5, 10);
	LazerPrinter* pr_laz = new LazerPrinter("SCX-6x45","삼성전자",3,20);

	cout << "현재 작동중인 2 대의 프린터는 아래와 같다." << endl;
	cout << "잉크젯 : "; pr_ink->showInkJet(); cout << endl;
	cout << "레이저 : "; pr_laz->showLazer(); cout << endl << endl ;
	
	int pr_num = 0, pages = 0;
	int ink = 0, toner = 0;
	char cr;
	

	while(true) {

		cout << "프린터 (1:잉크젯, 2:레이저)와 매수 입력>> ";
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

		cout << "계속 프린트 하시겠습니까(y/n)>>";
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