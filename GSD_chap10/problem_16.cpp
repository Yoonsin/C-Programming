#include <iostream>
#include <vector>
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
	static Shape* printDeleteUi() {
		
		/*if (pStart == NULL) {
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

		while (s->getNext() != NULL && i < n)
		{
			before = s; //����
			s = s->getNext(); //����
			after = s->getNext(); //�ٴ���
			i++;
		}

		before->add(after);
		delete s;
		return st;
		*/


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
	Shape* p;
	vector<Shape*> v;
	int cnt;
	int i;
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
		int i = 0;
		vector<Shape*>::iterator it = this->v.begin();
		while (updateFlag != true)
		{
			switch (UI::printUi()) {
			case 1:
				switch (UI::printInsertUi())
				{
				case 1:
					this->v.push_back(new Line());
					//this->insert(new Line());
					break;
				case 2:
					this->v.push_back(new Circle());
					//this->insert(new Circle());
					break;
				case 3:
					this->v.push_back(new Rect());
					//this->insert(new Rect());
					break;
				default:
					cout << "�߸� �Է��߽��ϴ�.";
					break;
				}
				break;
			case 2:
				if(this->v.size()==0)
				{
					cout << "������ ������ �����ϴ�." << endl;
					break;
				}
				cout << "�����ϰ��� �ϴ� ������ �ε��� >> ";
				int n;
				cin >> n;
				v.erase(v.begin() + n);
				break;
			case 3:
				i = 0;
				for (it = this->v.begin(); it != v.end(); it++) {
					
					cout << i << ": ";
					(*it)->paint();
					i++;
				}
				break;
			case 4:
				updateFlag = true;
				break;
			default:
				cout << "�߸� �Է��߽��ϴ�.";
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