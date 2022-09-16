//#include<iostream>
//#include<string>
//using namespace std;
//
//class Name
//{
//private:
//	string firstname;
//	string secondname;
//	string lastname;
//public:
//	Name()
//	{
//		firstname = '\0';
//		secondname = '\0';
//		lastname = '\0';
//	}
//	Name(string f, string s, string l)
//	{
//		firstname = f;
//		secondname = s;
//		lastname = l;
//	}
//	void setName(string f, string s, string l)
//	{
//		firstname = f;
//		secondname = s;
//		lastname = l;
//	}
//	string getfname()
//	{
//		return firstname;
//	}
//	string getsname()
//	{
//		return secondname;
//	}
//	string getlname()
//	{
//		return lastname;
//	}
//	void Display()
//	{
//		cout << firstname << " " << secondname << " " << lastname << endl;
//	}
//
//};
//
//class Student
//{
//private:
//	Name studentname;
//	string Dept;
//	float CGPA;
//public:
//	Student()
//	{
//		studentname;
//		Dept = '\0';
//		CGPA = 0.0;
//	}
//	Student(Name name, string dept, float gpa) : studentname(name), Dept(dept), CGPA(gpa)
//	{}
//	void setStudent(Name name,string dept,float gpa)
//	{
//		studentname = name;
//		Dept = dept;
//		CGPA = gpa;
//	}
//	string getdept()
//	{
//		return Dept;
//	}
//	float getcgpa()
//	{
//		return CGPA;
//	}
//	
//	string getfname()
//	{
//		return studentname.getfname();
//	}
//	string getsname()
//	{
//		return studentname.getsname();
//	}
//	string getlname()
//	{
//		return studentname.getlname();
//	}
//
//	void Display()
//	{
//		cout << "Student name is : ";
//		studentname.Display();
//		cout << "Dept is : " << Dept << "\nCGPA is : " << CGPA << endl;
//	}
//
//};
//
//
//int main()
//{
//
//	Name n1("Mr.", "Abdullah", "Dar");
//	Student s1(n1, "Computer Science", 3.99455);
//	s1.Display();
//	return 0;
//}