////Constructors (default, overloaded), Function overloading.	
//
//#include<iostream>
//using namespace std;
//
//class Point
//{
//private:
//	int x;
//	int y;
//	int a, b, c;
//public:
//	Point()
//	{
//		x = y = 0;
//		a = b = c = 0;
//		cout << "Constructor Called" << endl;
//	}
//	Point(int x, int y)
//	{
//		cout << "OverLoaded Constructor Called" << endl;
//		a = b = c = 0;
//		this->x = x;
//		this->y = y;
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
//	void fun(int a, int b, int c)
//	{
//		this->a = a;
//		this->b = b;
//		this->c = c;
//	}
//	void fun(int a, int b)
//	{
//		this->a = a;
//		this->b = b;
//		this->c = 0;
//	}
//	void Display()
//	{
//		cout << "a " << a << endl;
//		cout << "b " << b << endl;
//		cout << "c " << c << endl;
//
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
//	p.fun(1, 2, 3);
//	p.Display();
//	{
//		Point p2;
//		p2.setX(15);
//		p2.setY(110);
//		cout << p2.getX() << endl;
//		cout << p2.getY() << endl;
//		cout << p2.add() << endl;
//		p2.fun(1, 2);
//		p2.Display();
//	}
//	Point p1;
//	p1.setX(25);
//	p1.setY(210);
//	cout << p1.getX() << endl;
//	cout << p1.getY() << endl;
//	cout << p1.add() << endl;
//	p1.fun(1, 2,2);
//	p1.Display();
//
//	Point p3(140, 580); 
//	cout << p3.getX() << endl;
//	cout << p3.getY() << endl;
//	cout << p3.add() << endl;
//	p3.fun(100, 20);
//	p3.Display();
//	return 0;
//}