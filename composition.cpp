#include<iostream>
#include<string>
using namespace std;

class Birthday
{
private:
	int month;
	int day;
	int year;
public:
	Birthday()
	{
		cout<<"def Birthday con"<<endl;
	}
	Birthday(int d, int m, int y)
	{
		month = m;
		year = y;
		day = d;
		cout<<"over Birthday con"<<endl;
	}
	void printDate()
	{
		cout << month << "/" << day << "/" << year << endl;
	}
};


class People
{
private:
	string name;
	Birthday dateofbirth;
public:
	People(string cname, Birthday dob):name (cname),dateofbirth(dob)
	{}
	void Printinfo()
	{
		cout << name << " was born on : ";
		dateofbirth.printDate();
	}
};
int main()
{
	Birthday birthobj(5, 8, 2003);
	People infobj("Abdullah Dar", birthobj);
	infobj.Printinfo();


	return 0;
}
