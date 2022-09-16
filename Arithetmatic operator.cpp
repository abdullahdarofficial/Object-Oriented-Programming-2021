//Arithematic operators
//Addition(+), Subtraction(-), multiplication(*), Division(/) operators

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
	void Setval(int a, int b)
	{
		x = a;
		y = b;
	}
	Point operator+(Point& obj)
	{
		Point temp;
		temp.x = obj.x + x;
		temp.y = obj.y + y;
		return temp;
	}
	Point operator -(Point& obj)
	{
		Point temp;
		temp.x = x - obj.x;
		temp.y = y - obj.y;
		return temp;
	}
	Point operator*(Point obj)
	{
		Point temp;
		temp.x = x * obj.x;
		temp.y = y * obj.y;
		return temp;
	}
	Point operator/(Point obj)
	{
		Point temp;
		temp.x = x / obj.x;
		temp.y = y / obj.y;
		return temp;
	}
	void Disp()
	{
		cout << "X : " << x << endl;
		cout << "Y : " << y << endl;
	}
	
};


int main()
{
	Point a, b, c, d, e, f;
	a.Setval(10, 20);
	a.Disp();
	b.Setval(20, 30);
	b.Disp();
	c = a + b;
	c.Disp();
	d = a - b;
	d.Disp();
	e = a * b;
	e.Disp();
	f = a / b;
	f.Disp();

	return 0;
}
*/