////Unary operators using member functions
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
//		x = y = 0;
//	}
//	Point(int val)
//	{
//		x = y = val;
//	}
//	void operator++()
//	{
//		++x;
//		++y;
//	}
//	void operator++(int)
//	{
//		x++;
//		y++;
//	}
//	void operator--()
//	{
//		--x;
//		--y;
//	}
//	void operator--(int)
//	{
//		x--;
//		y--;
//	}
//	void operator-()
//	{
//		x = -x;
//		y = -y;
//	}
//	void operator!()
//	{
//		x != x;
//		y != y;
//	}
//	void Display()
//	{
//		cout << "Value of X is : " << x << endl;
//		cout << "Value of Y is : " << y << endl;
//	}
//};
//
//int main()
//{
//	Point p(10);
//	p.Display();
//	//++
//	++p;
//	cout << "Pre increment ++p : " << endl;
//	p.Display();
//	cout << "Post increment p++ : " << endl;
//	p++;
//	p.Display();
//	//--
//	--p;
//	cout << "Pre decrement --p : " << endl;
//	p.Display();
//	cout << "Post decrement p-- : " << endl;
//	p--;
//	p.Display();
//	//-
//	cout << "Negative value : " << endl;
//	-p;
//	p.Display();
//	//!
//	cout << "Not of Value : " << endl;
//	!p;
//	p.Display();
//	cout << "Size of object : " << sizeof(p) << endl;
//	return 0;
//}