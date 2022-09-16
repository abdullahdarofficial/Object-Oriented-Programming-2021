//////Association
////Student: studentname, rollno
////Department : deptName, deptId
////Course : coursetitle, courseid, rollno, deptid
//
//#include<iostream>
//using namespace std;
//
//class Student
//{
//	char* stuname;
//	int rollno;
//public:
//	Student()
//	{
//		stuname = NULL;
//		rollno = 0;
//	}
//	Student(char name[],int roll)
//	{
//		rollno = roll;
//		int i = 0;
//		while (name[i] != '\0')
//		{
//			i++;
//		}
//		stuname = new char[i+1];
//		for (int j = 0; j < i; j++)
//		{
//			stuname[j] = name[j];
//		}
//		stuname[i] = '\0';
//	}
//	void Display()
//	{
//		cout << "Roll No of Student is : " << rollno << endl;
//		cout << "Student name is : ";
//		for (int i = 0; stuname[i] != '\0'; i++)
//		{
//			cout << stuname[i];
//		}
//		cout << endl;
//	}
//};
//
//class Department
//{
//	char* deptname;
//	int ID;
//public:
//	Department()
//	{
//		deptname = NULL;
//		ID = 0;
//	}
//	Department(char depname[], int id)
//	{
//		ID = id;
//		int i = 0;
//		while (depname[i] != '\0')
//		{
//			i++;
//		}
//		deptname = new char[i + 1];
//		for (int j = 0; j < i; j++)
//		{
//			deptname[j] = depname[j];
//		}
//		deptname[i] = '\0';
//	}
//	void Display()
//	{
//		cout << "ID of Student is : " << ID << endl;
//		cout << "Student Department is : ";
//		for (int i = 0; deptname[i] != '\0'; i++)
//		{
//			cout << deptname[i];
//		}
//		cout << endl;
//	}
//
//};
//
//
//class Course
//{
//	char* coursetitle;
//	int rollno;
//	int courseid;
//	int deptid;
//public:
//	Course()
//	{
//		coursetitle = NULL;
//		
//		courseid = 0;
//		
//	}
//    Course(char title[], int roll,int cid,int did)
//	{
//	
//		int i = 0;
//		while (title[i] != '\0')
//		{
//			i++;
//		}
//		coursetitle = new char[i + 1];
//		for (int j = 0; j < i; j++)
//		{
//			coursetitle[j] = title[j];
//		}
//		coursetitle[i] = '\0';
//	}
//	void Display()
//
//	{
//		//cout << "Roll No of Student is : " << rollno << endl;
//		cout << "Course Title is : ";
//		for (int i = 0; coursetitle[i] != '\0'; i++)
//		{
//			cout << coursetitle[i];
//		}
//		cout << endl;
//	}
//};
//
//
//
//int main()
//{
//
//
//
//	return 0;
//}


#include<iostream>
using namespace std;
int main()
{
	float a;
	a=27.0+(60.0/80.0)*50;
	cout<<a;
}
