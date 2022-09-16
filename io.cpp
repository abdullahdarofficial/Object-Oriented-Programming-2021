#include<iostream>
using namespace std;
//
//class io
//{
//	int x;
//	int y;
//public:
//	io()
//	{
//		x = 0;
//		y = 0;
//	}
//	friend istream& operator>>(istream& in, io& p)
//	{
//		in >> p.x;
//		in >> p.y;
//		return in;
//	}
//	friend ostream& operator<<(ostream& out, const io& p)
//	{
//		out << p.x;
//		out << p.y;
//		return out;
//	}
//};


class io
{
	int x;
	int y;
public:
	friend istream & operator>>(istream& in, io& p)
	{
		in >> p.x;
		in >> p.y;
		return in;
	}
	friend ostream& operator<<(ostream& out, const io& p)
	{
		out << p.x;
		out << p.y;
		return out;
	}
};
int main()
{
	io a;
	cin >> a;
	cout << a;


	return 0;
}