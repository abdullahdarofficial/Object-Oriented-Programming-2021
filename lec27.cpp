////Pure-virtual functions, Abstract classes, Interfaces (optional)
//
//#include<iostream>
//using namespace std;
//
//class A
//{
//public:
//	A()
//	{
//
//	}
//	virtual void Disp() = 0;
//	~A()
//	{
//
//	}
//};
//
//class B : public A
//{
//	int x;
//public:
//	B()
//	{
//		x = 0;
//	}
//	void Disp()
//	{
//		cout << "Disp" << endl;
//	}
//
//		~B()
//	{
//
//	}
//};
//
//int main()
//{
//	//A* a;
//   A *a =new B;
//	a->Disp();
//
//	return 0;
//}