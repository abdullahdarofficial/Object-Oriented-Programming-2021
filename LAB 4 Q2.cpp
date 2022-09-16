//#include"LAB 4 Q2.h"
////Default Constructors
//Student::Student()
//{
//	Rollno = 0;
//	Name = new char[nsize];
//	CNIC = new char[csize];
//	Degree = new char[dsize];
//	Address = new char[asize];
//}
////Over Loaded Constructors
////5 variables
//Student::Student(int rollno, char name[], char cnic[], char degree[], char address[])
//{
//	Rollno = rollno;
//	for (int i = 0; i < nsize; i++)
//	{
//		*(Name + i) = name[i];
//	}
//	for (int i = 0; i < csize; i++)
//	{
//		*(CNIC + i) = cnic[i];
//	}
//	for (int i = 0; i < dsize; i++)
//	{
//		*(Degree + i) = degree[i];
//	}
//	for (int i = 0; i < asize; i++)
//	{
//		*(Address + i) = address[i];
//	}
//}
////4 Variables
//Student::Student(int rollno, char name[], char cnic[], char degree[])
//{
//	Rollno = rollno;
//	for (int i = 0; i < nsize; i++)
//	{
//		*(Name + i) = name[i];
//	}
//	for (int i = 0; i < csize; i++)
//	{
//		*(CNIC + i) = cnic[i];
//	}
//	for (int i = 0; i < dsize; i++)
//	{
//		*(Degree + i) = degree[i];
//	}
//}
////3 Variables
//Student::Student(int rollno, char name[], char cnic[])
//{
//	Rollno = rollno;
//	for (int i = 0; i < nsize; i++)
//	{
//		*(Name + i) = name[i];
//	}
//	for (int i = 0; i < csize; i++)
//	{
//		*(CNIC + i) = cnic[i];
//	}
//}
//
////2 Variables
//Student::Student(int rollno, char name[])
//{
//	Rollno = rollno;
//	for (int i = 0; i < nsize; i++)
//	{
//		*(Name + i) = name[i];
//	}
//}
////GETTERS FUNCTIONS
//void Student::Setrollno(int rollno)
//{
//	Rollno = rollno;
//}
//void Student:: Setname(char name[])
//{
//	for (int i = 0; i < nsize; i++)
//	{
//		*(Name + i) = name[i];
//	}
//}
//void Student:: Setcnic(char cnic[])
//{
//	for (int i = 0; i < csize; i++)
//	{
//		*(CNIC + i) = cnic[i];
//	}
//}
//void Student:: Setdegree(char degree[])
//{
//	for (int i = 0; i < dsize; i++)
//	{
//		*(Degree + i) = degree[i];
//	}
//}
//void Student::Setaddress(char address[])
//{
//	for (int i = 0; i < asize; i++)
//	{
//		*(Address + i) = address[i];
//	}
//}
////GETTERS FUNCTIONS
//int Student::Getrollno()
//{
//	return Rollno;
//}
//char* Student::Getname()
//{
//	return Name;
//}
//char* Student::Getcnic()
//{
//	return CNIC;
//}
//char* Student::Getdegree()
//{
//	return Degree;
//}
//char* Student::Getaddress()
//{
//	return Address;
//}
////Display
//void Student :: Display()
//{
//	int rollno = Getrollno();
//	cout << "The Roll no of Student is : " << rollno << endl;
//	char* pname = Getname();
//	cout << "The name of the Student is : ";
//	for (int i = 0; i < nsize && *(pname + i) != '\0'; i++)
//	{
//		cout << *(pname + i);
//	}
//	cout << endl;
//	char* pcnic = Getcnic();
//	cout << "The CNIC of the Student is : ";
//	for (int i = 0; i < csize && *(pcnic + i) != '\0'; i++)
//	{
//		cout << *(pcnic + i);
//	}
//	cout << endl;
//	char* pdegree = Getdegree();
//	cout << "The Degree of the Student is : ";
//	for (int i = 0; i < dsize && *(pdegree + i) != '\0'; i++)
//	{
//		cout << *(pdegree + i);
//	}
//	cout << endl;
//	char* paddress = Getaddress();
//	cout << "The Address of the Student is : ";
//	for (int i = 0; i < asize && *(paddress + i) != '\0'; i++)
//	{
//		cout << *(paddress + i);
//	}
//	cout << endl;
//}
//
//
