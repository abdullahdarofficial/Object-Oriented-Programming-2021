////Use of Constant with Pointers.
////Difference between a Pointerand a Reference.
////Passing pointers to functions by valueand by reference.
//
//
//#include<iostream>
//using namespace std;
//
//void fun(int* ptr1, int* ptr2)
//{
//	int temp = 0;
//	temp = *ptr1;
//	*ptr1 = *ptr2;
//	*ptr2 = temp;
//}
//
//int main()
//{
//
// int a = 10;
//	int* ptr = &a;
//	
//	cout << "Address of pointer : " << &ptr << endl;
//	cout << "Value of Pointer : " << *ptr << endl;
//	
//	//int& ref; // incorrect
//	//ref = a;
//	int& ref = a;
//
//	cout << "address of a " << &a << endl;
//	cout << "Address of ref : " << &ref << endl;
//	cout << "Value of ref : " << ref << endl;
//
//	const int i = 5;
//	//i = 3; //const cannot be changed
//
//	//ptr = &i;
//	*ptr = i;
//	cout << " *ptr = i " << endl;
//	cout << "Address of pointer : " << &ptr << endl;
//	cout << "Value of Pointer : " << *ptr << endl;
//
//	//ptr = &i; error because pointer has access to
//	//change memory or data in allocated address
//
//	//int* const ppp = &a;
//	const int* ptr1 = &i;
//	//const int abc
//	//ppp = &abc;
//	cout << " const int *ptr1 = i " << endl;
//	cout << "Address of pointer : " << &ptr1 << endl;
//	cout << "Value of Pointer : " << *ptr1 << endl;
//	//*ptr1 += 1;
//	//cannot change its value 
//
//	cout << " const int *ptr1 = i " << endl;
//	cout << "Address of pointer : " << &ptr1 << endl;
//	cout << "Value of Pointer : " << *ptr1 << endl;
//	//int const b = 101;
//	int abc = 10;
//	int* const ptr2 = &abc;
//	
//	//will only point to a single one but can chnage its valuse
//	cout << "  int *const ptr2 = i " << endl;
//	cout << "Address of pointer : " << &ptr2 << endl;
//	cout << "Value of Pointer : " << *ptr2 << endl;
//
//
//
//	*ptr2 += 10;
//	cout << "  int * const ptr2 = i " << endl;
//	cout << "Address of pointer : " << &ptr2 << endl;
//	cout << "Value of Pointer : " << *ptr2 << endl;
//
//	int y = 10;
//	int z = 20;
//	cout << "y " << y << endl;
//	cout << "z " << z << endl;
//
//	fun(&y, &z );
//
//	cout << "y " << y << endl;
//	cout << "z " << z << endl;
//
//	//fun(y, z); error pointers need addresses
//
//	return 0;
//}