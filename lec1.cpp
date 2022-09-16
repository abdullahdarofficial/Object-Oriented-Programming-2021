////Pointers Introduction,
////Pointer variables and Initialization,
////Address of Operator, Dereferencing Operator.
////Pointer Operations (Relational, Arithmetic) 
////
//
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int* ptr;
//	ptr = new int;//allocation of memory
//	*ptr = 5;// value given
//	//delete ptr; //deallocate memory
//	//*ptr = 9;
//
//	//ptr pointer
//
//	//address var ptr (&ptr)
//	//address where pointed (ptr)
//	//Value where pointer (*ptr)
//
//	cout << "Address of pointer &ptr " << &ptr << endl;
//	cout << "Address number initilization ptr " << ptr << endl;
//	cout << "Value in ptr as *ptr " << *ptr << endl;
//	*ptr = 9;
//	cout << "Address of pointer &ptr " << &ptr << endl;
//	cout << "Address no initilization ptr " << ptr << endl;
//	cout << "Value in ptr as *ptr " << *ptr << endl;
//
//
//	cout << "Address = 9 given" << ptr << endl;
//	cout << "Value in ptr as *ptr " << *ptr << endl;
//
//	int* PTR;
//	int abc=26;
//	abc = 17;
//	PTR = &abc;//adress pass
//	cout << "&PTR  " << &PTR << endl;//address of ptr 
//	cout << "PTR  " << PTR << endl;//address of abc
//	cout << "&abc  " << &abc << endl;//address of abc
//	cout << "*PTR  " << *PTR << endl;//17 value of abc
//	cout << "abc  " << abc << endl;
//	
//	*PTR = 20;
//	
//	cout << "&PTR  " << &PTR << endl;//address of ptr 
//	cout << "PTR  " << PTR << endl;//address of abc
//	cout << "&abc  " << &abc << endl;//address of abc
//	cout << "*PTR  " << *PTR << endl;//17 value of abc
//	cout << "abc  " << abc << endl;
//	
//	/**PTR = abc;
//	cout << *PTR;*/
//
//	int* ptrr;
//	int xyz = 19;
//	ptrr = &abc;
//	*ptrr = xyz;
//
//	cout << "Address of pointer &ptr " << &ptrr << endl;
//	cout << "Address number initilization ptr " << ptrr << endl;
//	cout << "Value in ptr as *ptr " << *ptrr << endl;
//	cout << "xyz" << xyz << endl;
//	cout << "abc  " << abc << endl;
//	
//	*ptrr = 100;
//
//	cout << "Address of pointer &ptr " << &ptrr << endl;
//	cout << "Address number initilization ptr " << ptrr << endl;
//	cout << "Value in ptr as *ptr " << *ptrr << endl;
//	cout << "xyz" << xyz << endl;
//	cout << "abc  " << abc << endl;
//
//
//	int a = 10;
//	*ptr = a;
//	cout << "Address *a given" << ptr << endl;
//	cout << "Value in ptr as *ptr " << *ptr << endl;
//
//	ptr = &a;
//	cout << "Address & a given" << ptr << endl;
//
//	// (*) is called dereferencing operator as it return the
//	//value stored in the pointer
////
//	cout << "Value stored in pointer is ptr = a = 10 is : " << *ptr << endl;
//
//    //Relational and Arithematic Operations
//	cout << "Relational and Arithematic Operations" << endl;
//
//	int* ptr1 = new int;
//	*ptr1 = 10;
//
//	int* ptr2 = &a;
//	a = 5;
//	if (*ptr1 > *ptr2)
//	{
//		cout << *ptr1 << ">" << *ptr2 << endl;
//	}
//	else if (*ptr1 < *ptr2)
//		cout << *ptr2 << ">" << *ptr1 << endl;
//
//	cout << "*ptr1+*ptr2   " << *ptr1 + *ptr2 << endl;
//
//	/*int& ref =a;
//	cout << "ref  " << ref << endl;
//
//	a = 1;
//	cout << "ref  " << ref << endl;
//
//	ref = *ptr1;
//	cout << "ref  " << ref << endl;*/
//	return 0;
//}