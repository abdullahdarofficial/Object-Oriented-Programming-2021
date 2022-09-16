/*
Find the smallest element in each row of a 2D dynamic array and store in a 1D dynamic
array. For this functionality create a function minRow_wise which takes 2D array from
the main and returns 1D array with minimum values from each row*/

/*

#include<iostream>
using namespace std;

int* minRow_wise(int** arr, int row, int col)
{
	int* min = new int[row];//initillizing 1D array for smallest elements of each row
	int small = 999999999;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (arr[i][j] < small)
			{
				small = arr[i][j];
			}
		}
		*(min + i) = small;//storing in 1D array
		small = 999999999;
	}
	return min;//returning 1D array
}

int main()
{
	int row, col, * result;//initillizing 
	cout << "Enter the number of rows : ";//taking rows from user
	cin >> row;
	cout << "Enter the number of coloumns : ";//taking coloumns from user 
	cin >> col;

	int** arr = new int* [row];//initillizing 2d pinter array
	for (int i = 0; i < row; i++)//initilling pointer coloumns
	{
		arr[i] = new int[col];
	}
	for (int i = 0; i < row; i++)//taking inputs from the user into 2D dynamic array
	{
		for (int j = 0; j < col; j++)
		{
			cout << "Enter the " << i + 1 << " x " << j + 1 << " element : ";
			cin >> arr[i][j];
		}
	}

	cout << "2D Array is " << endl;//output 2d array
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << arr[i][j] << "  ";
		}
		cout << endl;
	}
	cout << endl;
	result = minRow_wise(arr, row, col);//calling function
	for (int i = 0; i < row; i++)
	{
		cout << "Smallest element in row " << i + 1 << " is : " << *(result + i) << endl;//outputing the 1D array
	}
	for (int i = 0; i < row; i++)//Deleting 2D array for removing memory leakage54

	{
		delete arr[i] ;
	}
	delete []arr;

	system("pause");
	return 0;
}

*/