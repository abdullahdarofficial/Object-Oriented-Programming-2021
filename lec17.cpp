////Binary operators using non-member
////functions, concept of friendship,
////+,-,*,/,<<,>>
//
//
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
//		x = 0;
//		y = 0;
//	}
//	Point(int val)
//	{
//		x = y = val;
//	}
//	Point operator+(Point& obj);
//	Point operator-(Point& obj);
//	Point operator*(Point& obj);
//	Point operator/(Point& obj);
//	void display();
//	friend istream& operator>>(istream& in, Point& p);
//	friend ostream& operator<<(ostream& out, Point& p);
//};
//
//Point Point :: operator+(Point& p)
//{
//	Point t;
//	t.x = x + p.x;
//	t.y = y + p.y;
//	return t;
//}
//Point Point::operator-(Point& obj)
//{
//	Point temp;
//	temp.x = x - obj.x;
//	temp.y = y - obj.y;
//	return temp;
//}
//Point Point::operator*(Point& obj)
//{
//	Point temp;
//	temp.x = x * obj.x;
//	temp.y = y * obj.y;
//	return temp;
//}
//Point Point::operator/(Point& obj)
//{
//	Point temp;
//	temp.x = x / obj.x;
//	temp.y = y / obj.y;
//	return temp;
//}
//void Point::display()
//{
//	cout << "CHL NIKL" << endl;
//}
//istream& operator>>(istream& in, Point& p)
//{
//	in >> p.x;
//	in >> p.y;
//	return in;
//}
//
//ostream& operator<<(ostream& out, Point& p)
//{
//	out << "X=" << p.x << endl;
//	out << "Y=" << p.y << endl;
//	return out;
//}
//
//int main()
//{
//	Point p1, p2;
//	cout << "Enter Values of X and Y : " << endl;
//	cin >> p1;
//	cout << "The values of X and Y are : " << endl;
//	cout << p1;
//	cout << "Enter Values of X and Y : " << endl;
//	cin >> p2;
//	cout << "The values of X and Y are : " << endl;
//	cout << p2;
//	Point P = p1 + p2;
//	cout << "ADDITION OF BOTH IS : " << endl;
//	cout << P;
//
//	return 0;
//}