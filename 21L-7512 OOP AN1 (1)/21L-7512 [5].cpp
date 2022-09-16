/*
Create a function shrinkArray which takes a dynamic array from the main, shrinks it
and returns to the main
*/

/*

#include<iostream>
using namespace std;

int* shrinkArray(int *arr,int size,int shrink)
{
	int* temp = new int[shrink];//making temporary shrink array
	for (int i = 0; i < shrink; i++)//copying elements till the user want to shrink
	{
		*(temp + i) = *(arr + i);
	}
	delete []arr;//deleting original array to remove memory leakage
	arr = temp;//allocating original pointer the shrinked array
	cout << "Your Array size has been shrinked : " ;
	return arr;//returning 1 D shrinked array
}

int main()
{
	int size=0;
	cout << "Enter the size of the Array : ";//taking size from user
	cin >> size;
	int* arr = new int[size];//initillizing array
	for (int i = 0; i < size; i++)//taking elements into the array
	{
		cout << "Enter the " << i + 1 << " element of the Array : ";
		cin >> *(arr + i);
	}
	cout << "Your Array is : ";//outputting array
	for (int i = 0; i < size; i++)
	{
		cout << *(arr + i) << "  ";
	}
	cout << endl;
	int shrink;
	cout << "How much you want to shrink the array : ";//taking shrink size from the user
	cin >> shrink;
	while (shrink > size)//print error if shrink size is greater than the original size
	{
		cout << "Error entered size is greater than existing size \nEnter Again : ";
		cin >> shrink;
	}
	
    arr = shrinkArray(arr,size,shrink);//calling function
	for (int i = 0; i < shrink; i++)//printing shrinked array
	{
		cout << *(arr + i) << "  ";
	}
	cout << endl;
	system("pause");
	return 0;
}

*/