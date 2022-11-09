#include <iostream>
#include <string>
using namespace std;

class Histogram
{
	string str;
	int arr[30]; //���ĺ� 0~25���� ���� �迭

public:
	Histogram(string str) {this->str.append(str); cout << this->str << endl;}
	void put(string str);
	void putc(char ch);
	void print();

};

void Histogram::put(string str)
{
	fill_n(this->arr, 30, 0);
	cout << str;
	this->str.append(str);
}

void Histogram::putc(char ch)
{
	cout << ch;
	this->str.append(1, ch);
}

void Histogram::print()
{
	char cr; 
	int arr_length=0;
	int sum=0;

	while (true)
	{
		arr_length = this->str.length(); 
		cr = this->str.at(0); //���ڿ� �� �� ���� ��������
		this->str = this->str.substr(1, arr_length- 1); //�̾Ƴ� ���ڴ� ���� ���ڿ����� ������Ŵ
		

		//� ���ĺ����� �˻��� ���ĺ� ���� ������ ++
		if (cr >= 65 && cr <= 90) //�빮�ڸ�
		{
			this->arr[cr-65]++; // �ε��� 0������ ++ ��ų���ֵ��� ����� 
			sum++;
		}
		else if (cr >= 97 && cr <= 122) //�ҹ��ڸ�
		{
			this->arr[cr - 97]++; // �ε��� 0������ ++ ��ų���ֵ��� ����� 
			sum++;
		}
		else //�ٸ� ���ڸ�
		{
			continue; //�ٽ� while ���� ������
		}

		if (this->str.length() == 0) break; //���� �� �̾Ƴ´ٸ� ������ 
		
	}

	
	cout << endl << endl << "�� ���ĺ� �� " << sum << endl << endl;

	for (int i = 0; i < 26;i++)//���ĺ� ������ŭ ������
	{
		cr = i + 97;
		cout << cr << " (" << arr[i] << ")    : ";

		for (int j = 0; j < arr[i]; j++)
		{
			cout << "*";
		}

		cout << endl;
		//���� ���ĺ� ������ŭ ���� ������ش�.
	}
	
}

int main(void)
{
	Histogram eivisHisto("Wise men say, only fools rush in But I can't help,");
	eivisHisto.put("falling in love with you");
	eivisHisto.putc('-');
	eivisHisto.put("Elvis Presley");
	eivisHisto.print();



	return 0;
}