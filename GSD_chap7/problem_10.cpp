#include <iostream>
#include <vector>
using namespace std;


class Statistics
{
	vector<int> data;

public:
	Statistics& operator<<(int a);
	friend void operator>>(Statistics stat, int& a);
	friend bool operator!(Statistics stat);
	friend void operator~(Statistics stat);
};

Statistics& Statistics::operator<<(int a)
{
	this->data.push_back(a);
	return *this;
}



bool operator!(Statistics stat)
{
	if (stat.data.size() == 0)
		return true;
	else return false;
}


void operator>>(Statistics stat,int& a)
{
	int sum=0;
	for (int i : stat.data)
	{
		sum += i;
	}
	a= sum / stat.data.size();
	
}

void operator~(Statistics stat)
{
	for (int i : stat.data)
	{
		cout << i << " ";
	}
}


int main(void)
{
	Statistics stat;
	if (!stat) cout << "현재 통계 데이타가 없습니다." << endl;

	int x[5];
	cout << "5개의 정수를 입력하라>>";
	for (int i = 0; i < 5; i++) cin >> x[i];

	for (int i = 0; i < 5; i++) stat << x[i];
	stat << 100 << 200;
	~stat;

	int avg=0;
	stat >> avg;
	cout << endl << "avg=" << avg << endl;

	return 0;
}