////Binary operators using member functions
//#include<iostream>
//using namespace std;
//
//class Point
//{
//private:
//	int x;
//	int y;
//public:
//	Point()
//	{
//		x = y = 0;
//		cout << "Def" << endl;
//	}
//	Point(int val)
//	{
//		x = y = val;
//	}
//	Point operator+(Point& p)
//	{
//		Point temp;
//		temp.x = x + p.x;
//		temp.y = y + p.y;
//		return temp;
//	}
//	Point operator-(Point& p)
//	{
//		Point temp;
//		temp.x = x - p.x;
//		temp.y = y - p.y;
//		return temp;
//	}
//	Point operator*(Point& p)
//	{
//		Point temp;
//		temp.x = x * p.x;
//		temp.y = y * p.y;
//		return temp;
//	}
//	Point operator/(Point& p)
//	{
//		Point temp;
//		temp.x = x / p.x;
//		temp.y = y / p.y;
//		return temp;
//	}
//	void operator=(Point& p)
//	{
//		x = p.x;
//		y = p.y;
//	}
//	void operator+=(Point& p)
//	{
//		x += p.x;
//		y += p.y;
//	}
//	void operator-=(Point& p)
//	{
//		x -= p.x;
//		y -= p.y;
//	}
//	void operator*=(Point& p)
//	{
//		x *= p.x;
//		y *= p.y;
//
//	}
//	void operator/=(Point& p)
//	{
//		x /= p.x;
//		y /= p.y;
//	}
//	bool operator==(Point& p)
//	{
//		if (p.x == x && p.y == y)
//		{
//			return true;
//		}
//		else 
//			return false;
//	}
//	bool operator!=(const Point& obj)
//	{
//		if (x != obj.x || y != obj.y)
//		{
//			return true;
//		}
//		return false;
//	}
//	bool operator>(const Point& obj)
//	{
//		if (x > obj.x && y > obj.y)
//		{
//			return true;
//		}
//		return false;
//	}
//	bool operator<(const Point& obj)
//	{
//		if (x < obj.x && y < obj.y)
//		{
//			return true;
//		}
//		return false;
//	}
//	bool operator>=(const Point& obj)
//	{
//		if (x >= obj.x && y >= obj.y)
//		{
//			return true;
//		}
//		return false;
//	}
//	bool operator<=(const Point& obj)
//	{
//		if (x <= obj.x && y <= obj.y)
//		{
//			return true;
//		}
//		return false;
//	}
//	void Display()
//	{
//		cout << "Value of X is : " << x << endl;
//		cout << "Value of Y is : " << y << endl;
//	}
//	~Point()
//	{
//		cout << "des" << endl;
//	}
//};
//
//
//int main()
//{
//	Point p1(100), p2(10), p10(150);
//	p1.Display();
//	p2.Display();
//	p10.Display();
//	cout << "Addtition" << endl;
//	Point p3 = p1 + p2 ;
//	p3.Display();
//	cout << "Subtraction" << endl;
//	Point p4 = p1 - p2;
//	p4.Display();
//	cout << "Multiplication" << endl;
//	Point p5 = p1 * p2;
//	p5.Display();
//	cout << "Division" << endl;
//	Point p6 = p1 / p2;
//	p6.Display();
//	cout << "Equal " << endl;
//	p1 = p2;
//	p1.Display();
//	cout << "+=" << endl;
//	p1 += p2;
//	p1.Display();
//	cout << "-=" << endl;
//	p1 -= p2;
//	p1.Display();
//	cout << "*=" << endl;
//	p1 *= p2;
//	p1.Display();
//	cout << "/=" << endl;
//	p1 /= p2;
//	p1.Display();
//	cout << "logical Operators " << endl;
//	p2 *= p1;
//	p1.Display();
//	p2.Display();
//	cout << "==" << endl;
//	if (p1 == p2)
//	{
//		cout << " True equal" << endl;
//	}
//	else
//		cout << "False Not equal " << endl;
//	cout << "!=" << endl;
//	if (p1 != p2)
//	{
//		cout << "True Not equal" << endl;
//	}
//	else
//		cout << "False equal " << endl;
//	cout << ">" << endl;
//	if (p1 > p2)
//	{
//		cout << "True P1 Greater " << endl;
//	}
//	else
//		cout << "False P1 less or equal " << endl;
//	cout << "<" << endl;
//	if (p1 < p2)
//	{
//		cout << "True P1 Smaller " << endl;
//	}
//	else
//		cout << "False P1 greater of equal " << endl;
//	cout << ">=" << endl;
//	if (p1 >= p2)
//	{
//		cout << "True P1 Greater or equal" << endl;
//	}
//	else
//		cout << "False P1 less " << endl;
//	cout << "<=" << endl;
//	if (p1 <= p2)
//	{
//		cout << "True P1 Less or equal " << endl;
//	}
//	else
//		cout << "False P1 Greater " << endl;
//
//	cout << "Program Completed Successfully " << endl;
//	return 0;
//}