////copy constructor 
////Destructor
////This Pointer 
//
//#include<iostream>
//using namespace std;
//
//class Point
//{
//private:
//	int* x;
//	int* y;
//public:
//	Point()
//	{
//		x = new int;
//		y = new int;
//		*x = *y = 0;
//	}
//	Point(int val)
//	{
//		x = new int;
//		y = new int;
//		*x = val;
//		*y = val;
//	}
//	Point(int* x, int* y)
//	{
//		this->x = new int;
//		this->y = new int;
//		this->x = x;
//		this->y = y;
//	}
//	void Display()
//	{
//		cout << "The Value of X is : " << *x << endl;
//		cout << "The Value of Y is : " << *y << endl;
//	}
//	~Point()
//	{
//		delete x;
//		delete y;
//	}
//
//};
//
//int main()
//{
//	int* a = new int ;
//	*a = 10;
//	int* b = new int;
//	*b = 20;
//
//	Point p1;
//	p1.Display();
//	Point p2(5);
//	p2.Display();
//	Point p3(a, b);
//	p3.Display();
//	return 0;
//}