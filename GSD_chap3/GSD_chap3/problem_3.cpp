#include <iostream>
#include <string>
using namespace std;


class Account
{
public:

	Account(string name,int id,int balance);
	~Account();
	
	void deposit(int money);
	string getOwner();
	int withdraw(int money);
	int inquiry();

private:
	string name="";
	int id=0, balance=0;

};

Account::Account(string n,int i,int bal)
{
	name = n;
	id = i;
	balance = bal;
}

Account::~Account()
{
}

void Account::deposit(int money)
{
	balance += money;
}

string Account::getOwner()
{
	return name;
}

int Account::withdraw(int money)
{
	balance -= money;
	return money;
}

int Account::inquiry()
{
	return balance;
}

int main()
{
	Account a("kitae", 1, 5000);
	a.deposit(50000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
	int money = a.withdraw(20000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;


	return 0;
}