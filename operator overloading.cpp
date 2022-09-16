////operator overloading
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
//		x = y = 0;
//	}
//	Point(int val)
//	{
//		x = y = val;
//	}
//	void setX(int x)
//	{
//		this->x = x;
//	}
//	void setY(int y)
//	{
//		this->y = y;
//	}
//	void operator ++()
//	{
//		++x;
//		++y;
//	}
//	void operator ++(int)
//	{
//		x++;
//		y++;
//	}
//	Point operator+(Point const& P)
//	{
//		Point temp;
//		temp.x = x + P.x;
//		temp.y = y + P.y;
//		return temp;
//	}
//	Point operator*(Point  const& P)
//	{
//		Point temp;
//		temp.x = x * P.x;
//		temp.y = y * P.y;
//		return temp;
//	}
//	void Display()
//	{
//		cout << "\nX : " << x << endl;
//		cout << "Y : " << y << endl;
//	}
//
//};
//
//int main()
//{
//	Point P;
//	P.Display();
//	P.setX(5);
//	P.Display();
//	P.setY(10);
//	P.Display();
//	++P;
//	P.Display();
//	P++;
//	P.Display();
//	Point P1(6);
//	P1.Display();
//	Point p;
//	p.Display();
//	p = P + P1;
//	p.Display();
//	p = P * P1;
//	p.Display();
//	return 0;
//}