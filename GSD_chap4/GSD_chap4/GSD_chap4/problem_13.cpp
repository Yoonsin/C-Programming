#include <iostream>
#include <string>
using namespace std;

class Histogram
{
	string str;
	int arr[30]; //알파벳 0~25까지 담을 배열

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
		cr = this->str.at(0); //문자열 맨 앞 글자 가져오기
		this->str = this->str.substr(1, arr_length- 1); //뽑아낸 글자는 기존 문자열에서 삭제시킴
		

		//어떤 알파벳인지 검사후 알파벳 갯수 베열에 ++
		if (cr >= 65 && cr <= 90) //대문자면
		{
			this->arr[cr-65]++; // 인덱스 0번부터 ++ 시킬수있도록 만들기 
			sum++;
		}
		else if (cr >= 97 && cr <= 122) //소문자면
		{
			this->arr[cr - 97]++; // 인덱스 0번부터 ++ 시킬수있도록 만들기 
			sum++;
		}
		else //다른 문자면
		{
			continue; //다시 while 루프 돌리기
		}

		if (this->str.length() == 0) break; //만약 다 뽑아냈다면 나가기 
		
	}

	
	cout << endl << endl << "총 알파벳 수 " << sum << endl << endl;

	for (int i = 0; i < 26;i++)//알파벳 순서만큼 돌리고
	{
		cr = i + 97;
		cout << cr << " (" << arr[i] << ")    : ";

		for (int j = 0; j < arr[i]; j++)
		{
			cout << "*";
		}

		cout << endl;
		//각각 알파벳 갯수만큼 별을 출력해준다.
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