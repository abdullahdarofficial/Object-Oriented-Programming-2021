/*

#include<iostream>
using namespace std;

class Point
{
private:
	int x;
	int y;
public:
	Point()
	{
		x = 0;
		y = 0;
	}
	void operator++()
	{
		x++;
		y++;
	}
	void operator ++(int)
	{
		x++;
		y++;
	}
	void operator--()
	{
		x--;
		y--;
	}
	void operator --(int)
	{
		x--;
		y--;
	}
	void operator-()
	{
		x = -x;
		y = -y;
	}
	void operator!()
	{
		x = !x;
		y = !y;
	}
	void Disp()
	{
		cout << "X : " << x << endl;
		cout << "Y : " << y << endl;
		cout << endl;
	}
};


int main()
{
	Point obj1,obj2;
	++obj1;
	obj1.Disp();
	obj2++;
	obj2.Disp();
	--obj1;
	obj1.Disp();
	obj2--;
	obj2.Disp();
	++obj1;
	obj1.Disp();
	obj2++;
	obj2.Disp();
	-obj1;
	obj1.Disp();
	-obj2;
	obj2.Disp();
	-obj1;
	obj1.Disp();
	-obj2;
	obj2.Disp();
	!obj1;
	obj1.Disp();
	!obj2;
	obj2.Disp();
	!obj1;
	obj1.Disp();
	!obj2;
	obj2.Disp();
	cout << "size obj1 : " << sizeof(obj1) << endl;
	cout << "size obj2 : " << sizeof(obj2) << endl;

	




	return 0;
}

*/