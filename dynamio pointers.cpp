////////Dynamic 2 D pointer
//////
//////#include<iostream>
//////using namespace std;
//////
//////int main()
//////{
//////
//////	int** arr = new int* [5];
//////	for (int i = 0; i < 5; i++)
//////	{
//////		arr[i] = new int[5];
//////	}
//////	cout << "Enter the values in array : " << endl;
//////
//////	for (int i = 0,k=1; i < 5; i++)
//////	{
//////		for (int j = 0; j < 5; j++)
//////		{
//////			 arr[i][j]=k++;
//////		}
//////	}
//////	cout << endl;
//////	for (int i = 0; i < 5; i++)
//////	{
//////		for (int j = 0; j < 5; j++)
//////		{
//////			cout << arr[i][j]<<"  ";
//////		}
//////		cout << endl;
//////	}
//////	for (int i = 0; i < 5; i++)
//////	{
//////		delete[]arr[i];
//////	}
//////	delete[]arr;
//////
//////	return 0;
//////}
////
//////add numbers in array 
//////just odd
////#include<iostream>
////using namespace std;
////
////void odd_count(int* list,int **arr, int rows,int cols)
////{
////	for (int i = 0; i < rows; i++)
////	{
////		list[i] = 0;
////		for (int j = 0;j < cols; j++)
////		{
////			if (arr[i][j] % 2 != 0)
////			{
////				list[i]++;
////			}
////		}
////	//	cout << list[i] << endl;
////	}
////}
////int ** new_arr(int *list,int **arr,int rows,int cols)
////{
////	int** newarr = new int* [rows];
////	for (int i = 0; i < rows ;i++)
////	{
////		newarr[i] = new int[list[i]];
////	}
////	for (int i = 0; i < rows; i++)
////	{
////		for (int j = 0,k=0; j < cols; j++)
////		{
////			if (arr[i][j] % 2 != 0)
////			{
////				newarr[i][k] = arr[i][j];
////				k++;
////			}
////		}
////	}
////	return newarr;
////}
////
////int main()
////{
////
////	int rows = 0 , cols = 0;
////	cout << "Enter rows : ";
////	cin >> rows;
////	cout << "Enter cols : ";
////	cin >> cols;
////	int** arr = new int* [rows];
////	for (int i = 0; i < rows; i++)
////	{
////		arr[i] = new int[cols];
////	}
////	for (int i = 0, k = 1; i < rows; i++)
////	{
////		for (int j = 0; j < cols; j++)
////		{
////			arr[i][j] = k++;
////		}
////	}
////	for (int i = 0; i < rows; i++)
////	{
////		for (int j = 0; j < cols; j++)
////		{
////			cout<<arr[i][j]<<"  ";
////		}
////		cout << endl;
////	}
////
////	int* list = new int[rows];
////	odd_count(list, arr, rows, cols);
////	int** mod_arr = new_arr(list, arr, rows, cols);
////	cout << "ODD ELEMENTS IS ARRAY ARE :: " << endl;
////	for (int i = 0; i < rows; i++)
////	{
////		for (int j = 0; j < list[i]; j++)
////		{
////			cout << mod_arr[i][j] << "  ";
////			if (mod_arr[i][j] < 10)
////			{
////				cout << " ";
////			}
////		}
////		cout << endl;
////	}
////	for (int i = 0; i < rows; i++)
////	{
////		delete[]arr[i];
////		delete[]mod_arr[i];
////	}
////	delete[]list;
////	delete[]arr;
////	delete[]mod_arr;
////
////	return 0;
////}
//
//
//#include<iostream>
//using namespace std;
//
//int **fun()
//{
//	int* arr1 = new int[5];
//	int* arr2 = new int[5];
//	int* arr3 = new int[5];
//	int* arr4 = new int[5];
//	for (int i = 0, k = 0; i < 5; i++)
//	{
//		arr1[i] = ++k;
//		arr2[i] = ++k;
//		arr3[i] = ++k;
//		arr4[i] = ++k;
//	}
//	int** arr = new int* [4];
//	arr[0] = arr1;
//	arr[1] = arr2;
//	arr[2] = arr3;
//	arr[3] = arr4;
//
//	return arr;
//}
//int main()
//{
//
//	int** array = fun();
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			cout << array[i][j] << " ";
//		}
//		cout << endl;
//	}
//	for (int i = 0; i < 4; i++)
//	{
//		delete[]array[i];
//	}
//	delete[]array;
//
//	return 0;
//}