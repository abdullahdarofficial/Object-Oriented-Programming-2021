/*Find the smallest element in each column of a 2D dynamic array and store in a 1D 
dynamic array. For this functionality create a function minCol_wise which takes 2D 
array from the main and returns 1D array with minimum values from each column.*/

/*

#include<iostream>
using namespace std;

int* minCol_wise(int** arr, int row, int col)
{
	int* min = new int[row];
	int small = 100000;

	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < row; j++)
		{
			if (arr[j][i] < small)
			{
				small = arr[j][i];
			}
		}
		*(min + i) = small;
		small = 10000;
	}
	return min;

}

int main()
{
	int row, col, * result;//initillizing
	cout << "Enter the number of rows : ";//taking rows from user
	cin >> row;
	cout << "Enter the number of coloumns : ";//taking coloumns from user
	cin >> col;
	int** arr = new int* [row];//initillizing 2 D array
	for (int i = 0; i < row; i++)
	{
		arr[i] = new int[col];
	}
	for (int i = 0; i < row; i++)//taking inputs from the user
	{
		for (int j = 0; j < col; j++)
		{
			cout << "Enter the " << i + 1 << " x " << j + 1 << " element : ";
			cin >> arr[i][j];
		}
	}

	cout << "2D Array is " << endl;//outputing the 2D array
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << arr[i][j] << "  ";
		}
		cout << endl;
	}
	cout << endl;
	result = minCol_wise(arr, row, col);//Calling function
	for (int i = 0; i < col; i++)//outputing 1 D array 
	{
		cout << "Smallest element in col " << i + 1 << " is : " << *(result + i) << endl;
	}
	for (int i = 0; i < row; i++)//deleting 2 D array for removing memory leakage
	{
		delete arr[i] ;
	}
	delete []arr;
	system("pause");
	return 0;
}



*/