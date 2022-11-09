#include <iostream>
#include <vector>
using namespace std;

class Stack {
	vector<int> data;
public:
	friend bool operator!(Stack s); //isEmpty
	Stack& operator<<(int op); //push
	void operator>>(int& op); //pop
	
	

};

bool operator!(Stack s) {
	if (s.data.size() == 0)
		return true;
	else
		return false;
}

Stack& Stack::operator<<(int op){
	this->data.push_back(op); //맨 마지막에 넣음
	return *this;
}

void Stack::operator>>(int& op){
	if (!*this)
	{

	}
	else
	{
		op = this->data[this->data.size() - 1];
		this->data.pop_back();
	}
	
}



int main(void)
{
	Stack stack;
	stack << 3 << 5 << 10;
	while (true) {
		if (!stack) break;
		int x;
		stack >> x;
		cout << x << ' ';
	}
	cout << endl;

	return 0;
}