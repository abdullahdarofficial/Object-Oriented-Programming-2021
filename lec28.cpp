////////Multiple Inheritance and Diamond Problem Multiplicity, Memory Management 
////////Bi - directional relationships, Forward - class declarations issues
////
////
////#include<iostream>
////using namespace std;
////
////class A
////{
////public:
////
////	A()
////	{
////		cout << "a constructor" << endl;
////	}
////~A()
////	{
////		cout << "a desnstructor" << endl;
////	}
////};
////
////class B: public A
////{
////public:
////
////	B()
////	{
////		cout << "B constructor" << endl;
////	}
////	~B()
////	{
////		cout << "B desnstructor" << endl;
////	}
////};
////class C :public A
////{
////public:
////
////	C()
////	{
////		cout << "C constructor" << endl;
////	}
////	~C()
////	{
////		cout << "C desnstructor" << endl;
////	}
////}; 
////class D : public B, public C
////{
////public:
////	D()
////	{
////		cout << "D constructor" << endl;
////	}
////	~D()
////	{
////		cout << "d desnstructor" << endl;
////	}
////};
////
////int main()
////{
////	D d;
////
////	return 0;
////}
//
//#include<iostream>
//using namespace std;
//class Person {
//	// Data members of person
//public:
//	Person()
//	{
//		cout<<"person called0"<<endl;
//	}
//	Person(int x) { cout << "Person::Person(int ) called" << endl; }
//};
//
//class Faculty :  public Person {
//	// data members of Faculty
//public:
//	Faculty(int x) :Person(x) {
//		cout << "Faculty::Faculty(int ) called" << endl;
//	}
//};
//
//class Student : public Person {
//	// data members of Student
//public:
//	Student(int x) :Person(x) {
//		cout << "Student::Student(int ) called" << endl;
//	}
//};
//
//class TA : public Faculty, public Student{
//public:
//	TA(int x) :Faculty(x),Student(x) {
//		cout << "TA::TA(int ) called" << endl;
//	}
//};
//
//int main() {
//	TA ta1(30);
//}
