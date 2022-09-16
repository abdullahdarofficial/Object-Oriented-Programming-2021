////Objects vs Class, state vs behavior, 
//// access specifiers (Public, Private), 
//// Member functions (accessors, utilities,
//// mutators etc)
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
//		cout << "Constructor Called" << endl;
//	}
//	void setX(int x)
//	{
//		this->x = x;
//	}
//	void setY(int y)
//	{
//		this->y = y;
//	}
//	int getX()
//	{
//		return this->x;
//	}
//	int getY()
//	{
//		return this->y;
//	}
//	int add()
//	{
//		return this->x + this->y;
//	}
//	~Point()
//	{
//		cout << "Destructor Called" << endl;
//	}
//};
//
//int main()
//{
//	Point p;
//	p.setX(5);
//	p.setY(10);
//	cout << p.getX() << endl;
//	cout << p.getY() << endl;
//	cout << p.add() << endl;
//
//	{
//		Point p2;
//		p2.setX(15);
//		p2.setY(110);
//		cout << p2.getX() << endl;
//		cout << p2.getY() << endl;
//		cout << p2.add() << endl;
//	}
//	Point p1;
//	p1.setX(25);
//	p1.setY(210);
//	cout << p1.getX() << endl;
//	cout << p1.getY() << endl;
//	cout << p1.add() << endl;
//
//
//	return 0;
//}