//Cascaded function calls, static members, inline functions and other miscellaneous issues
#include<iostream>
using namespace std;

////Inline function
//inline void Display()
//{
//	cout << "This is an inline function " << endl;
//}
//int main()
//{
//	Display();
//	return 0;
//}

class Box
{
private:
	int l, w, h;
	static int count;
public:
	Box()
	{
		l = w = h = 0;
		count++;
	}
	Box(int val)
	{
		l = w = h = val;
		count++;
	}
	Box(int a, int b, int c)
	{
		l = a;
		w = b;
		h = c;
		count++;
	}
	inline void Area()
	{
		cout << "The Area of Box is : " << l * w * h << endl;
	}
	void NewArea();
	Box fun1()
	{
		cout << "FUN 1 " << endl;
		return *this;
	}
	Box fun2()
	{
		cout << "FUN 2 " << endl;
		return *this;
	}
	Box fun3()
	{
		cout << "FUN 3 " << endl;
		return *this;
	}
	int getcount()
	{
		return count;
	}
};

inline void Box::NewArea()
{
	cout << "The New Area is : " << l * w * h << endl;
}
int Box::count = 0;
int main()
{

	Box b1, b2(5), b3(5, 10, 15);
	b1.Area();
	b2.Area();
	b3.Area();
	b1.NewArea();
	b2.NewArea();
	b3.NewArea();
	Box b11;
	cout << "Cascaded Called : b11.fun1().fun2().fun3();  " << endl;
	b11.fun1().fun2().fun3();
	cout << "Normal Called : " << endl;
	b11.fun1();
	b11.fun2();
	b11.fun3();
	cout << "Number of objects created : " << b11.getcount() << endl;
	cout << "Program Completed SuccessFully" << endl;
	return 0;
}