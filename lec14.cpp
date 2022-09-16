////Cascaded function calls,
////static members, inline functions
////and other miscellaneous issues
//
//#include<iostream>
//using namespace std;
//
//inline void Display()
//{
//	cout << "This is an inline function" << endl;
//}
//class Box
//{
//private:
//	int l, w, h;
//	static int count;
//public:
//	Box()
//	{
//		count++;
//		l = w = h = 0;
//		cout << "def con" << endl;
//	}
//	Box(int val)
//	{
//		count++;
//		l = w = h = val;
//		cout << "Overload con called" << endl;
//	}
//	Box(int a, int b, int c)
//	{
//		l = a;
//		w = b;
//		h = c;
//		count++;
//		cout << "dual Overload con called" << endl;
//
//	}
//	inline void Area()
//	{
//		cout << "The Area of Box is : " << l * w * h << endl;
//	}
//	void NewArea();
//
//	Box fun1()
//	{
//		cout << "Fun 1 " << endl;
//		return *this;
//	}
//	Box fun2()
//	{
//		cout << "Fun 2 " << endl;
//		return *this;
//	}
//	Box fun3()
//	{
//		cout << "Fun 3 " << endl;
//		return *this;
//	}
//	int getcount()
//	{
//		return count;
//	}
//};
//int Box::count = 0;
//int main()
//{
//	Display();
//	Box b1, b2(5), b3(1, 2, 3);
//	b1.Area();
//	b2.Area();
//	b3.Area();
//	b1.NewArea();
//	b2.NewArea();
//	b3.NewArea();
//	Box B;
//	cout << "Cascaded Called : b11.fun1().fun2().fun3();  " << endl;
//	B.fun1().fun2().fun3();
//	cout << "Normal Called : " << endl;
//	B.fun1();
//	B.fun2();
//	B.fun3();
//	cout << "number of objects Created : " << B.getcount() << endl;
//	return 0;
//}
//
//void Box::NewArea()
//{
//	cout << "New area is " << l * w * h << endl;
//}
