/*

#include<iostream>
#include"21L7512 oop lab 4 Q2.h"
using namespace std;

int main()
{
	int rollno, size;
	char* name = new char[nsize], * cnic = new char[csize], * degree = new char[dsize], * address = new char[asize];
	cout << "How many Students Record you want to Enter : ";
	cin >> size;
	Student* stu = new Student[size];
	for (int i = 0; i < size; i++)
	{
		cout << "Enter the Roll No of the Student no " << i + 1 << " : ";
		cin >> rollno;
		stu[i].Setrollno(rollno);
		cout << "Enter the Name of the Student no " << i + 1 << " : ";
		cin.ignore();
		cin.getline(name, nsize);
		stu[i].Setname(name);
		cout << "Enter the CNIC of the Student no " << i + 1 << " : ";
		//cin.ignore();
		cin.getline(cnic, csize);
		stu[i].Setcnic(cnic);
		cout << "Enter the Degree of the Student no " << i + 1 << " : ";
		//cin.ignore();
		cin.getline(degree, dsize);
		stu[i].Setdegree(degree);
		cout << "Enter the Address of the Student no " << i + 1 << " : ";
		//cin.ignore();
		cin.getline(address, asize);
		stu[i].Setaddress(address);
		cout << "Student " << i + 1 << " Record SuccessFully Entered !!" << endl;
		cout << endl;
	}
	cout << endl;
	cout << "The Entered Student's Record is : " ;
	cout << endl;
	for (int i = 0; i < size; i++)
	{
		cout << "Student : " << i + 1 << endl;
		stu[i].Display();
		cout << endl;
	}
	system("pause");
	return 0;
}

*/