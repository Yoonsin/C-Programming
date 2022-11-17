#include <iostream>
#include "Shape.h"
#include "Line.h"
#include "Rect.h"
#include "Circle.h"
using namespace std;

class UI {
public:
	static int n;
	static int cnt;
	static int printUi() {
		cout << "����:1, ����:2, ��κ���:3, ����:4 >> ";
		cin >> n;
		return n;
	}
	static int printInsertUi() {

			cout << "��:1, ��:2, �簢��:3 >> ";
			cin >> n;
			
		return n;
	}
	static Shape* printDeleteUi(Shape* pStart) {
		if (pStart == NULL) {
			cout << "������ ������ �����ϴ�.";
			return NULL;
		}
		cout << "�����ϰ��� �ϴ� ������ �ε��� >> ";
		cin >> n;
		int i = 0;
		Shape* st = pStart;
		Shape* s = pStart;
		Shape* before = NULL;
		Shape* after = NULL;

		if (n == 0) //�����ϰ� ���� �ε����� 0���̸�
		{
			before = s->getNext();
			delete s;
			return before; //0�� ���� �ε��� 1���� grepicediter Ŭ���� pStart�� ����
		}

		while(s->getNext() != NULL&&i<n)
		{
			before = s; //����
			s = s->getNext(); //����
			after = s->getNext(); //�ٴ���
			i++;
		}

		before->add(after);
		delete s;
		return st;


	}
	static void printSeekUi(Shape* pStart) {
		Shape* s = pStart;
		int i = 0;
		while (s != NULL) {
			cout << i << " ";
			s->paint();
			s = s->getNext();
			i++;
		}
	}
};

int UI::n = 0;
int UI::cnt = 0;

class GraphicEditor {
	Shape* pStart;
	Shape* pLast;
	int cnt;
	bool updateFlag;
public:
	//friend static int printSeekUI(Shape* pStart);

	GraphicEditor() { this->pStart == NULL, this->pLast == NULL; this->cnt = 0; this->updateFlag = false; }
	void insert(Shape* p) {
		if (this->cnt == 0) {
			this->pStart = p; this->pLast = this->pStart;
			this->cnt++;
		}
		else {
			this->pLast = this->pLast->add(p);
			this->cnt++;
		}
	}
	void update() {
		while (updateFlag != true)
		{
			cout << this->cnt;
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
				default:
					cout << "�߸� �Է��߽��ϴ�.";
				}
				break;
			case 2:
				if (this->cnt == 0)
				{
					cout << "������ ������ �����ϴ�."<<endl;
					break;
				}
				this->pStart=UI::printDeleteUi(this->pStart);
				this->cnt--;
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





int main(void) {
	GraphicEditor g;
	g.update();
	return 0;
}