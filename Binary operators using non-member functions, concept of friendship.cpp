//Binary operators using non-member functions, concept of friendship
//+,-,*,/,<<,>>


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
	Point(int val)
	{
		x = y = val;
	}
	Point operator+(Point& obj);
	Point operator-(Point& obj);
	Point operator*(Point& obj);
	Point operator/(Point& obj);
	friend istream& operator >>(istream& in, Point& p);
	friend ostream& operator << (ostream & out, const Point & p);
	
};

Point Point::operator +(Point &obj)
{
	Point temp;
	temp.x = x + obj.x;
	temp.y = y + obj.y;
	return temp;
}
Point Point::operator-(Point& obj)
{
	Point temp;
	temp.x = x - obj.x;
	temp.y = y - obj.y;
	return temp;
}
Point Point::operator*(Point& obj)
{
	Point temp;
	temp.x = x * obj.x;
	temp.y = y * obj.y;
	return temp;
}
Point Point::operator/(Point& obj)
{
	Point temp;
	temp.x = x / obj.x;
	temp.y = y / obj.y;
	return temp;
}
istream& operator>>(istream& in, Point& p)
{
	in >> p.x;
	in >> p.y;
	return in;
}
ostream& operator<<(ostream& out, const Point& p)
{
	out <<"X = " << p.x << endl;
	out <<"Y = "<< p.y << endl;
	return out;
}

int main()
{
	Point p1, p2;
	cout << "Enter Values of X and Y : " << endl;
	cin >> p1;
	cout << "The values of X and Y are : " << endl;
	cout << p1;
	cout << "Enter Values of X and Y : " << endl;
	cin >> p2;
	cout << "The values of X and Y are : " << endl;
	cout << p2;

	
	
	return 0;
}