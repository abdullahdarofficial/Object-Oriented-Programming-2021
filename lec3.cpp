////Dynamic memory allocation using pointers 
//// and accessing dynamic memory. Dynamic Variables 
//// new and delete operators
//
//#include<iostream>
//using namespace std;
//int main()
//{
//	//int* arr;
//	//arr = new int[17];
//	int* arr = new int[5];
//	for (int i = 0; i < 5; i++)
//	{
//		*(arr + i) = i + 1;
//	}
//	cout << "*arr  : " << *arr << endl;
//	for (int i = 0; i < 5; i++)
//	{
//		cout << "i : "<<i<< " : " << *(arr + i) << endl;
//	}
// //simple variable delete //delete arr;
// 
//	delete[]arr;
//	/*arr = new int;
//	delete arr;*/
//	//for (int i = 0; i < 5; i++)
//	//{
//	//	cout << "i : " << *(arr + i) << endl;
//	//} //not allowed arr memory has been deallocated
//	
//	//system("pause");
//	
//	int a = 10;
//	//int* ptr = &a;
//
//	int* ptr=new int;
//	*ptr = a;
//
//	cout << "a " << *ptr << endl;
//	delete ptr;
//	//cout << "a " << *ptr << endl
//	// ptr=&a;
//	//it cannot de allocate memory of a static variable
//
//	//Q1
//
//	char* name = new char[15];
//	cin.getline(name, 15);
//
//	for (int i = 0; i < 15; i++)
//	{
//		//cout << name[i] << endl;//avoid till mid1
//		cout << *(name + i) << endl;
//	}
//
//
//	return 0;
//
//
//}