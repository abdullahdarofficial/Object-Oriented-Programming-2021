//Write a function which sorts dynamic array using pointers and pointers arithematic

/*

#include<iostream>
using namespace std;

int* sort_array(int* arr, int size)
{
	int temp;
	//BUBBLE SORTING
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (*(arr + j) > *(arr + j + 1))
			{
				temp = *(arr + j);
				*(arr + j) = *(arr + j + 1);
				*(arr + j + 1) = temp;
			}
		}
	}
	return arr;//return array pointer 
}

int main()
{
	int size;
	cout << "Enter the size of the array : ";//taking size from user
	cin >> size;
	int* arr = new int[size];
	for (int i = 0; i < size; i++)//taking inputs in the array
	{
		cout << "Enter the " << i + 1 << " element : ";
		cin >> *(arr+i) ;
	}
	arr = sort_array(arr, size);//calling function

	cout << endl;
	cout << "Sorted Array is : ";//output array
	for (int i = 0; i < size; i++)
	{
		cout << *(arr + i)<<" , ";
	}
	system("pause");

	return 0;
}

*/