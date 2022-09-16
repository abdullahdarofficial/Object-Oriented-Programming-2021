//////#include<iostream>
//////using namespace std;
//////class MyString {
//////private:
//////	char* str;
//////	int length;
//////	int size = 100;
//////public:
//////	MyString();
//////	MyString(char ar[],int c);
////////	Mystring(const MyString& d);
//////	void disp();
//////};
//////MyString::MyString() {
//////	str = new char[size];
//////	str = NULL;
//////	length = 0;
//////}
//////MyString::MyString(char ar[], int c) {
//////	str = new char[c];
//////	length = c;
//////	for (int i = 0; ar[i] != '\0'; i++) {
//////		str[i] = ar[i];
//////	}
//////}
///////// MyString::Mystring(const MyString&d){
//////   //         	length=d.length;
//////	 //       	str=new char[size];
//////	   //     	for(int i=0;d.str[i]!='\0';i++){
//////		  //  		str[i]=d.str[i];
//////		//		}
//////		//	}
//////
//////void MyString::disp() {
//////	cout << length << endl;
//////	for (int i = 0; str[i] != '\0'; i++) {
//////		cout << str[i];
//////	}
//////}
//////int main() {
//////	MyString s1("abcdef", 100);
//////	s1.disp();
//////	MyString s2;
//////	s2 = s1;//assignment operator
//////	MyString s3(s2);
//////	s2.disp();
//////	//MyString s3=s2;
//////	//s3.disp();
//////	return 0;
//////}
////
////#include<iostream>
////using namespace std;
////
////class MyString
////{
////private:
////	char* str;
////	int length;
////public:
////	
////	MyString();
////	MyString(char arr[], int size);
////	MyString(const MyString& obj);
////	void Display();
////};
////MyString::MyString()
////{
////	str = NULL;
////	length = 0;
////	cout << "Default Constructor Called" << endl;
////}
////MyString::MyString(char arr[], int size)
////{
////	str = new char[size];
////	length = size;
////	for (int i = 0; i < size; i++)
////	{
////		str[i] = arr[i];
////	}
////	cout << "Ovrloaded Constructor Called" << endl;
////}
////MyString::MyString(const MyString& obj)
////{
////	length = obj.length;
////	str = new char[length];
////	for (int i = 0; i < length; i++)
////	{
////		str[i] = obj.str[i];
////	}
////	cout << "Copy Constructor called " << endl;
////}
////void  MyString :: Display()
////{
////	cout << "The String is : ";
////	for (int i = 0; i < length; i++)
////	{
////		cout << str[i];
////	}
////	cout << endl;
////}
////
////int main()
////{
////	MyString s1("Abdullah", 10);
////	s1.Display();
////	MyString s2;
////	s2 = s1;
////	MyString s3(s2);
////	s2.Display();
////	s3.Display();
////
////	return 0;
////}
//
//
//#include<iostream>
//using namespace std;
//
//class Point
//{
//	int x;
//	int y;
//public:
//	Point()
//	{
//		x = 0; y = 0;
//		cout << "default constructor called" << endl;
//	}
//	Point(int val)
//	{
//		x = y = val;
//		cout << "Overloaded Constructor Called " << endl;
//	}
//	Point(const Point& p)
//	{
//		x = p.x;
//		y = p.y;
//		cout << "Copy Constructor Called " << endl;
//	}
//	void Display()
//	{
//		cout << "VAlUE OF X is : " << x << endl;
//		cout << "VAlUE OF Y is : " << y << endl;
//
//
//	}
//
//};
//int main()
//{
//
//	Point p1(3);
//	p1.Display();
//	Point p2;
//	p2.Display();
//	p2 = p1;
//	p2.Display();
//	Point p3(p2);
//	p3.Display();
//	p2.Display();
//
//	return 0;
//}