////Aggeregation
//
//#include<iostream>
//using namespace std;
//
//class A
//{
//	int x;
//public:
//	A()
//	{
//		x = 0;
//		cout << "default A constructor" << endl;
//	}
//	A(int val)
//	{
//		x = val;
//		cout << "overloaded A constructor" << endl;
//
//	}
//	void Disp()
//	{
//		cout << "X= " << x << endl;
//	}
//	~A()
//	{
//		cout << "Destructor Of A is Called " << endl;
//	}
//};
//
//class B
//{
//	int y;
//	A z;
//public:
//
//	B()
//	{
//		y =0;
//		z = 0;
//		cout << "default B constructor" << endl;
//	}
//	B(int val,A &a)
//	{
//		y = val;
//		z =  a;
//		cout << "overloaded B constructor" << endl;
//
//	}
//	/*void Disp()
//	{
//		cout << "Y= " << y << endl;
//		cout << "Z = " << z << endl;
//	}*/
//	~B()
//	{
//		cout << "Destructor Of  B is Called " << endl;
//	}
//
//
//};
//int main()
//{
//	A a(10);
//	B(4, a); 
//	cout << "Coded end in main" << endl;
//
//	return 0;
//}