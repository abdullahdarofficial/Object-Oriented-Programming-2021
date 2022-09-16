////Polymorphism introduction Static vs dynamic
////binding details, virtual tables and virtual
////pointers,
//
////function overriding is a runtime dynamic late binding 
////function overloading is a compile time static early binding
//
//#include<iostream>
//using namespace std;
//
//class Base
//{
//public:
//	Base()
//	{
//		cout << "Base def constructor" << endl;
//	}
//	void Disp()
//	{
//		cout << "Base Display called" << endl;
//	}
//	~Base()
//	{
//		cout << "Base def destructor" << endl;
//	}
//};
//
//class Derived:public Base
//{
//public:
//	Derived()
//	{
//		cout << "Derived def constructor" << endl;
//	}
//	void Disp()
//	{
//		cout << "Derived Display called" << endl;
//	}
//	~Derived()
//	{
//		cout << "Derived def destructor" << endl;
//	}
//
//};
//int main()
//{
//	//Derived *d;
//	/*Base* b = &d;
//	b->Disp();
//	d.Disp();*/
//	return 0;
//}