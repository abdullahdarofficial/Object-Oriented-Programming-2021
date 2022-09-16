////////////Part-whole relationships, Association/Aggregation
////
//////Composition
//#include<iostream>
//using namespace std;
//
//class Birthday
//{
//private:
//	int month;
//	int day;
//	int year;
//public:
//	Birthday()
//	{
//		month = day = year = 0;
//		cout << "B Default Coonstructor called" << endl;
//	}
//	Birthday(int d, int m, int y)
//	{
//		month = m;
//		day = d;
//		year = y;
//		cout << "B Overloaded constructor called" << endl;
//	}
//	Birthday(Birthday& b)
//	{
//		month = b.month;
//		year = b.year;
//		day = b.day;
//		cout << "B Copy constructor called" << endl;
//		//system("pause");
//
//	}
//	void printdate()
//	{
//		cout << month << "/" << day << "/" << year << endl;
//		cout << "B Print date called" << endl;
//	}
//	~Birthday()
//	{
//		cout << "B destructor" << endl;
//	}
//};
//
//class People
//{
//private:
//	string name;
//	Birthday dateofbirth;
//public:
//	People()
//	{
//		name = '\0';
//		cout << "P default constructor" << endl;
//	}
//	People(string cname, Birthday dob) :name(cname), dateofbirth(dob)
//	{
//		//dateofbirth=dob;
//		cout << "P overloaded constructor" << endl;
//	}
//	void Printinfo()
//	{
//		cout << name << " was born on : ";
//		dateofbirth.printdate();
//		cout << "P Print date" << endl;
//	}
//	~People()
//	{
//		cout << "P destructor" << endl;
//	}
//};
//
//
//int main()
//{
//	Birthday birth(5, 8, 3);
//	People infobj("jdjdG", birth);
//	infobj.Printinfo();
//	return 0;
//}
//
////////////Association
////////
////////#include<iostream>
////////using namespace std;
////////
////////class Student
////////{
////////	char* stuname;
////////	int rollno;
////////public:
////////	Student()
////////	{
////////		stuname = NULL;
////////		rollno = 0;
////////		cout << "stu Default con called" << endl;
////////	}
////////	Student(char name[], int roll)
////////	{
////////		rollno = roll;
////////		int i = 0;
////////		while (name[i] != '\0')
////////		{
////////			i++;
////////		}
////////		stuname = new char[i + 1];
////////		for (int j = 0; j < i; j++)
////////		{
////////			stuname[j] = name[j];
////////		}
////////		stuname[i] = '\0';
////////		cout << " stu Overloaded con called" << endl;
////////	}
////////	void Display()
////////	{
////////		cout << "Roll No of Student is : " << rollno << endl;
////////		cout << "Student name is : ";
////////		for (int i = 0; stuname[i] != '\0'; i++)
////////		{
////////			cout << stuname[i];
////////		}
////////		cout << endl;
////////	}
////////};
////////
////////class Department
////////{
////////	char* deptname;
////////	int ID;
////////public:
////////	Department()
////////	{
////////		deptname = NULL;
////////		ID = 0;
////////		cout << "dept Default con called" << endl;
////////
////////	}
////////	Department(char depname[], int id)
////////	{
////////		ID = id;
////////		int i = 0;
////////		while (depname[i] != '\0')
////////		{
////////			i++;
////////		}
////////		deptname = new char[i + 1];
////////		for (int j = 0; j < i; j++)
////////		{
////////			deptname[j] = depname[j];
////////		}
////////		deptname[i] = '\0';
////////		cout << " dept Overloaded con called" << endl;
////////
////////	}
////////	void Display()
////////	{
////////		cout << "ID of Student is : " << ID << endl;
////////		cout << "Student Department is : ";
////////		for (int i = 0; deptname[i] != '\0'; i++)
////////		{
////////			cout << deptname[i];
////////		}
////////		cout << endl;
////////	}
////////
////////};
////////
////////
////////class Course
////////{
////////	char* coursetitle;
////////	int rollno;
////////	int courseid;
////////	int deptid;
////////public:
////////	Course()
////////	{
////////		coursetitle = NULL;
////////
////////		courseid = 0;
////////		cout << "crse Default con called" << endl;
////////
////////	}
////////	Course(char title[], int roll, int cid, int did)
////////	{
////////
////////		int i = 0;
////////		while (title[i] != '\0')
////////		{
////////			i++;
////////		}
////////		coursetitle = new char[i + 1];
////////		for (int j = 0; j < i; j++)
////////		{
////////			coursetitle[j] = title[j];
////////		}
////////		coursetitle[i] = '\0';
////////		cout << " crse Overloaded con called" << endl;
////////
////////	}
////////	void Display()
////////
////////	{
////////		//cout << "Roll No of Student is : " << rollno << endl;
////////		cout << "Course Title is : ";
////////		for (int i = 0; coursetitle[i] != '\0'; i++)
////////		{
////////			cout << coursetitle[i];
////////		}
////////		cout << endl;
////////	}
////////};
////////
////////
////////
////////int main()
////////{
////////	Student s;
////////	Course c;
////////	Department d;
////////	s.Display();
////////	c.Display();
////////	d.Display();
////////
////////
////////	return 0;
////////}
//////
////////Aggeregation
//////
////////Aggeregation
//////
//////#include<iostream>
//////using namespace std;
//////
//////class A
//////{
//////	int x;
//////public:
//////	A()
//////	{
//////		x = 0;
//////		cout << "default A constructor" << endl;
//////	}
//////	A(int val)
//////	{
//////		x = val;
//////		cout << "overloaded A constructor" << endl;
//////
//////	}
//////	void Disp()
//////	{
//////		cout << "X= " << x << endl;
//////	}
//////	~A()
//////	{
//////		cout << "Destructor Of A is Called " << endl;
//////	}
//////};
//////
//////class B
//////{
//////	int y;
//////	A z;
//////public:
//////
//////	B()
//////	{
//////		y = 0;
//////		z = 0;
//////		cout << "default B constructor" << endl;
//////	}
//////	B(int val, A& a)
//////	{
//////		y = val;
//////		z = a;
//////		cout << "overloaded B constructor" << endl;
//////
//////	}
//////	void Disp()
//////	{
//////		cout << "Y= " << y << endl;
//////		z.Disp();
//////	}
//////	~B()
//////	{
//////		cout << "Destructor Of  B is Called " << endl;
//////	}
//////
//////
//////};
//////int main()
//////{
//////	A a(10);
//////	B b(4, a);
//////	b.Disp();
//////	cout << "Coded end in main" << endl;
//////
//////	return 0;
//////}
