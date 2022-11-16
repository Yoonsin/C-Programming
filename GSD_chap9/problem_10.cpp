#include <iostream>
#include "Shape.h"
#include "Line.h"
#include "Rect.h"
#include "Circle.h"
using namespace std;

class GraphicEditor {
	Shape* pStart;
	Shape* pLast;
	int cnt;
	bool updateFlag;
public:
	//friend static int printSeekUI(Shape* pStart);

	GraphicEditor() { this->pStart == NULL, this->pLast == NULL; cnt = 0; }
	void insert(Shape* p) {
		if (cnt == 0) {
			this->pStart = p; this->pLast = this->pStart;
		}
		else {
			this->pLast = this->pLast->add(p);
		}
	}
	void update() {
		while (updateFlag!=true)
		{
			switch (UI::printUi()) {
			case 1:
				switch (UI::printInsertUi())
				{
				case 1:
					this->insert(new Line());
					break;
				case 2:
					this->insert(new Circle());
					break;
				case 3:
					this->insert(new Rect());
					break;
				}
			case 2:
				UI::printDeleteUi();
				break;
			case 3:
				UI::printSeekUi(this->pStart);
				break;
			case 4:
				updateFlag = true;
				break;


		    }
		}

	}
};

	

class UI {
public:
	static int n;
	static int printUi() {
		cout << "삽입:1, 삭제:2, 모두보기:3, 종료:4 >> " << endl;
		cin >> n;
		return n;
	}
	static int printInsertUi() {
		cout << "선:1, 원:2, 사각형:3 >> " << endl;
		cin >> n;
		return n;
	}
	static int printDeleteUi() {
		cout << "삽입하고자 하는 도형의 인덱스 >> " << endl;
		cin >> n;
		return n;
	}
	static int printSeekUi(Shape* pStart) {
		Shape* s = pStart;
	}
};

int UI::n = 0;

int main(void) {

}