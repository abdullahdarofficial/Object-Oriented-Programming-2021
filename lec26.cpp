////
////Polymorphism vs down casting,
////run-time type identification, dynamic cast
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
//	virtual void Disp()
//	{
//		cout << "Base Display called" << endl;
//	}
//	~Base()
//	{
//		cout << "Base def destructor" << endl;
//	}
//};
//
//class Derived : public Base
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
////
////class Derived_1
////{
////public:
////	Derived_1()
////	{
////		cout << "Derived 1 def constructor" << endl;
////	}
////	void Disp()
////	{
////		cout << "Derived 1 Display called" << endl;
////	}
////	~Derived_1()
////	{
////		cout << "Derived 1 def destructor" << endl;
////	}
////
////};
//int main()
//{
//	//Derived d;
//	//Base* b = &d;//Upcasting
//	//b->Disp();
//	
//	//Base b;
//	//Derived* d = (Derived*)(&b); //downcasting
//	//d->Disp();
//
//	////Base b;
//	////Derived* d = dynamic_cast<Derived*>(&b); //Dynamic casting
//	////d->Disp();
//
//	//upcasting
//	/*Derived d;
//	Base* b = &d;
//	b->Disp();
//*/
//
//	//downcasting
//	/*Base b;
//	Derived* d = (Derived*)(&b);
//	d->Disp();*/
//
//	/*Derived d;
//	Base* b = &d;
//	b->Disp();*/
//
//	//Base b;
//	//Derived* d = (Derived*)(&b);
//	//d->Disp();
//
//	return 0;
//}