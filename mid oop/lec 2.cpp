/*

#include<iostream>
using namespace std;

void swap(int* p1, int* p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
int main()
{

	int a = 10;
	int* ptr = &a;
	cout << " a " << a << endl;
	cout << " *ptr " << *ptr << endl;

	int& ref = a;//correct
	cout << " ref " << &ref << endl;
	//int& re;
	//ref = a;   incorrect cannot be declared in two steps

	int arr[5] = { 1,2,3,4,5 };
	 ptr = arr;
	 cout << " ptr " << ptr << endl;
	 cout << " arr " << arr << endl;
	cout << " ++ptr " << ++ptr << endl;
	cout << " arr+1 " << arr + 1 << endl;
	//cout << " arr++  " << arr++ << endl; incorrect because array is a kind of pointer and its kind is 
	//  int *const ptr; which means that it can point to just a single value but is change its value


	int n1 = 10, n2 = 20;

	cout << "Before swapping " << endl;
	cout << " n1 " << n1 << endl;
	cout << " n2 " << n2 << endl;
	swap(n1, n2);

	cout << "After swapping " << endl;
	cout << " n1 " << n1 << endl;
	cout << " n2 " << n2 << endl;

	return 0;
}

*/