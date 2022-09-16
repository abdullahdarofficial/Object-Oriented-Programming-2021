/*
For each of the following, write a single statement that performs the specified task.
Assume that long variables value1 and value2 have been declared and value1 has been
initialized to 200000.
1. Declare the variable longPtr to be a pointer to an object of type long.
2. Assign the address of variable value1 to pointer variable longPtr.
3. Display the value of the object pointed to by longPtr.
4. Assign the value of the object pointed to by longPtr to variable value2.
5. Display the value of value2.
6. Display the address of value1.
7. Display the address stored in longPtr. Is the address displayed the same as value1’s?
*/

/*

#include<iostream>
using namespace std;

int main()
{
	long value1 = 200000, value2;               
	long* longptr;                                                   //1
	longptr = &value1;                                               //2
	cout << "Value of object by pointer : " << *longptr << endl;     //3
	value2 = *longptr;                                               //4
	cout << "Value 2 : " << value2 << endl;                          //5
	cout << "Address of Value 1 : " << &value1 << endl;              //6
	cout << "Address stored in longptr : " << longptr << endl;       //7

	return 0;
}

*/