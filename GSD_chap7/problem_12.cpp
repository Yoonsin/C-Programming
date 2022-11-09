#include <iostream>
using namespace std;

class SortedArray {
	int size;
	int* p;
	void sort(SortedArray& s);
public:
	SortedArray();
	SortedArray(const SortedArray& src);
	SortedArray(int p[], int size);
	~SortedArray();
	SortedArray operator + (SortedArray& op2);
	SortedArray& operator = (const SortedArray& op2);
	void show();

	
};

void SortedArray::sort(SortedArray& s){
	for (int i = 0; i < s.size - 1; i++) {
		for (int j = 1; j < s.size; j++){
			if (s.p[i] > s.p[j]) {
				int temp = s.p[j];
				s.p[j] = s.p[i];
				s.p[i] = temp;
			}
		}
	}
}

SortedArray::SortedArray(const SortedArray& src) {
	this->size = src.size;
	this->p = new int[this->size];
	for (int i = 0; i < this->size; i++)
		this->p[i] = src.p[i];
}


SortedArray::SortedArray(int p[], int size){
	this->p = new int[size];
	for (int i = 0; i < size; i++)
		this->p[i] = p[i];
	sort(*this);
}

SortedArray SortedArray::operator+(SortedArray& op2){
	SortedArray s;
	s.size = this->size + op2.size;
	s.p = new int[s.size];
	for (int i = 0; i < this->size; i++)
		s.p[i] = this->p[i];

	int j = 0;
	for (int i = this->size; i < s.size; i++)
	{
		s.p[i] = op2.p[j];
		j++;
	}

	sort(s);

	//delete[] this->p;
	//delete[] op2.p;

	return s;
	
}

SortedArray& SortedArray::operator=(const SortedArray& op2){
	SortedArray c(op2);
	//delete[] op2.p;
	return c;
}

void SortedArray::show() {
	cout << "배열 출력 : ";
	for (int i=0; i < this->size; i++)
	{
		cout << this->p[i];
	}
	cout << endl;
}

int main()
{
	int n[] = { 2,20,6 };
	int m[] = { 10,7,8,30 };
	SortedArray a(n, 3), b(m, 4), c;

	c = a + b;

	a.show();
	b.show();
	c.show();

	return 0;
}