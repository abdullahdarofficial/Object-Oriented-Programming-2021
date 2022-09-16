////Dynamic memory allocation and 
////Object assignment, Parameter passing, 
////Shallow vs Deep copy, 
//
//
////
//// A copy constructor is called when a new object is
////  created from an existing object, as a copy of 
//// the existing object. The assignment operator is
////  called when an already initialized object is 
//// assigned a new value from another existing object.
////
//#include<iostream>
//using namespace std;
//
//class Point
//{
//private:
//	int x;
//	int y;
//	
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
//
//	/*Point p;
//	
//	Point p1(10, 20);
//	p.Display();
//	p1.Display();
//	p = p1;
//	p.Display();
//	p1.Display();
//	Point p2 = p;
//	p2.Display();
//	p2.Display();*/
//	cout << "Copy constructor " << endl;
//	cout << "Point(const Point& p)" << endl;
//	cout << "Assignment Opearator " << endl;
//	cout << "void operator=(const Point& p)" << endl;
//
//	Point p;
//	Point p1(10, 20);
//	Point p2 = p;
//	cout << "------------------ Copying --------------" << endl;
//	
//	cout << "Point p3(p2);" << endl;
//	Point p3(p2);
//	cout << "Point p4 = p;" << endl;
//	Point p4 = p;
//	cout << "Point p5; p5 = p1; " << endl;
//	Point p5;
//	p5 = p1;
//
//	return 0;
//}