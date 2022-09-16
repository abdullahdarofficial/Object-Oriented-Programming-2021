#include<iostream>
using namespace std;
int main()
{
	int array[10], size = 10, mid = size / 2;
	cout << "Input array elements " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << "element " << i + 1 << " = ";
		cin >> array[i];
	}
	int *ptr1 = array;
	int *ptr2 = &array[size-1];
	int temp=0;
	for (int i = 0; i < mid; i++)
	{
		temp = *(ptr1+i);
		*(ptr1+i) = *(ptr2 - i);
		*(ptr2 - i) = temp;
	}
	cout << "After Reverse" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}