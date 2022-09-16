/*

#include<iostream>
#include"21L7512 oop lab 4 Q1.h"
using namespace std;

// TASK 1.6  Main 
int main()
{
	int id, size;
	char* NAME = new char[size1];
	char* department = new char[size2];
	cout << "How many Employee's Record you want to Enter : ";
	cin >> size;
	Employee* emp = new Employee[size];
	for (int i = 0; i < size; i++)
	{
		cout << "Enter the ID of Employee no " << i + 1 << " : ";
		cin >> id;
		emp[i].SetID(id);
		cout << "Enter the Name of Employee " << i + 1 << " : ";
		cin.ignore();
		cin.getline(NAME, size1);
		emp[i].SetName(NAME);
		cout << "Enter the Department of Employee " << i + 1 << " : ";
		//cin.ignore();
		cin.getline(department, size2);
		emp[i].SetDept(department);
		cout << "Employee no " << i + 1 << " Record SuccessFully Entered" << endl;
	}
	cout << endl;
	cout << "THe Entered Employee's Record is : " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << "Employee " << i + 1 << endl;
		emp[i].Display();
		cout << endl;
	}
	system("pause");
	return 0;
}


*/