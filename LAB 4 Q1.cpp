//
//#include"LAB 4 Q1.h"
//
////TTASK 1.1 = Default Constructor
//Employee::Employee()
//{
//	ID = 0;
//	Name = new char[size1];
//	DeptName = new char[size2];
//}
////TASK 1.2 Over Loaded Constructor [3 variables]
//Employee::Employee(int id, char name[], char department[])
//{
//	ID= id;
//	for (int i = 0; i < size1; i++)
//	{
//		*(Name + i) = name[i];
//	}
//	for (int i = 0; i < size2; i++)
//	{
//		*(DeptName + i) = department[i];
//	}
//}
////TASK 1.3  Over Loaded Constructor [2 variables]
//Employee::Employee(int id, char name[])
//{
//	ID = id;
//	for (int i = 0; i < size1; i++)
//	{
//		*(Name + i) = name[i];
//	}
//}
////TASK 1.4 GETTER and SETTER FUNCTIONS
//void Employee::SetID(int id)
//{
//	ID = id;
//}
//void Employee::SetName(char name[])
//{
//	for (int i = 0; i < size1; i++)
//	{
//		*(Name + i) = name[i];
//	}
//}
//void Employee::SetDept(char department[])
//{
//	for (int i = 0; i < size2; i++)
//	{
//		*(DeptName + i) = department[i];
//	}
//}
//// GETTER FUNCTIONS
//int Employee::getid()
//{
//	return ID;
//}
//char* Employee::GetName()
//{
//	return Name;
//}
//char* Employee::GetDept()
//{
//	return DeptName;
//}
//// TASK 1.5 Display of Employee
//void Employee::Display()
//{
//	int id = getid();
//	cout << "The ID of the Employee is : " << id << endl;
//	char* pname = GetName();
//	cout << "The Name of the Employee is : ";
//	for (int i = 0; i < size1 && *(pname + i) != '\0'; i++)
//	{
//		cout << *(pname + i);
//	}
//	cout << endl;
//	char* pdept = GetDept();
//	cout << "The Department of the Employee is : ";
//	for (int i = 0; i < size1 && *(pdept + i) != '\0'; i++)
//	{
//		cout << *(pdept + i);
//	}
//	cout << endl;
//
//}
//
