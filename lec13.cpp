////Copy constructor, Destructors, this pointer,
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
//		cout << "Default constructor Called " << endl;
//	}
//	Point(int x, int y)
//	{
//		this->x = x;
//		this->y = y;
//		cout << "Overloaded Constructor Called" << endl;
//	}
//	void Display()
//	{
//		cout << "X : " << x << endl;
//		cout << "Y : " << y << endl;
//	}
//	Point(const Point& p)
//	{
//		x = p.x;
//		y = p.y;
//		cout << "Copy Constructor Called" << endl;
//	}
//	void operator=(const Point& p)
//	{
//		x = p.x;
//		y = p.y;
//		cout << "Assignment operator Called" << endl;
//	}
//
//	~Point()
//	{
//		cout << "Destructor Called" << endl;
//	}
//};
//int main()
//{
//	Point p(10, 20);
//	Point p1;
//	Point p2 = p;
//	Point p3(p1);
//	p1 = p;
//
//
//	return 0;
//}