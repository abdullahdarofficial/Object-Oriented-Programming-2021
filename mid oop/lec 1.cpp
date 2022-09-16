/*


#include<iostream>
using namespace std;

int main()
{
	
	int variable = 10;
	int* ptr ;
	ptr = &variable;
	//pointer takes 4 bytes
	cout << "The garbage address of the pointer at this point is (&ptr) : " << &ptr << endl;
	ptr = &variable;
	cout << "Value of variable is (a) : " << variable << endl;
	cout << "The Adrress of the variable through pointer is (ptr) : " << ptr << endl;
	cout << "The Address of variable is (&variable) : " << &variable << endl;
	cout << "The Address of the pointer is (&ptr) : " << &ptr << endl;
	cout << "The value of the variable using the pointer is (*ptr) : " << *ptr << endl;

	
	
	int arr[5] = { 11,12,13,14,15 };
	int* ptr;
	ptr = arr;

	for (int i = 0; i < 5; i++)
	{
		cout << *ptr<<"  ";
		ptr++;
	}
	cout << endl;

	ptr -= 5;
	//Another way is 
	for (int i = 0; i < 5; i++)
	{
		cout << *(ptr + i) << "  ";
	}
	cout << endl;

	cout << "arr  : " << arr << endl;
	cout << "arr[0]  : " << arr[0] << endl;
	cout << "&arr  : " << &arr << endl;
	cout << "&arr[0]  : " << &arr[0] << endl;
	cout << "ptr  : " << ptr << endl;
	cout << "*ptr  : " << *ptr << endl;
	cout << "&ptr  : " << &ptr << endl;

	return 0;

}

*/