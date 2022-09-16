///*
//Write a function char** AllocateMemory(int& rows, int& cols) that takes size of matrix (rows
//and columns) from user, allocates memory for the matrix and return its pointer.
//
//Write a function void InputMatrix(char** matrix, const int rows, const int cols) which takes
//input the values in matrix from user(console).
//
//Write a function void DisplayMatrix(char** matrix, const int&amp; rows, const int&amp; cols) that
//displays the matrix in proper format.
//
//Write a function that does the following:
//? Creates three dynamic char arrays namely alphabets, numbers, and specialchar.
//(Define the sizes yourself).
//? Iterate the 2D array and separate alphabet elements and save them in the alphabets
//array, separate number elements and save them in numbers array and separate
//special character elements and save them in the specialchar array.
//? The function returns the three arrays alphabets, numbers, and specialchar.
//? Note: The three arrays should not consume any extra space. Resize the arrays
//accordingly.
//For example, if the Sample Matrix is
//A 1 v @
//+ 9 s 6
//P # ^ 4
//
//Your function will return the following arrays:
//alphabets = A v s P
//numbers = 1 9 6 4
//specialchar = @ + # ^
//
//Write a function DeallocateMemory that deallocates all the memory.
//
//*/
//
//#include<iostream>
//using namespace std;
//
//char** AllocateMemory(int& rows, int& cols)
//{
//	cout << "Enter the number of Rows : ";
//	cin >> rows;
//	cout << "Enter the number of Coloumns : ";
//	cin >> cols;
//	char** array = new char* [rows];
//	for (int i = 0; i < rows; i++)
//	{
//		array[i] = new char[cols];
//	}
//	return array;
//}
//
//void InputMatrix(char** matrix, const int rows, const int cols)
//{
//	cout << "Enter the values in the 2D array " << endl;
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			cout << "Enter the " << i + 1 << "x" << j + 1 << " element : ";
//			cin >> matrix[i][j];
//		}
//	}
//}
//
//void DisplayMatrix(char** matrix, const int& rows, const int& cols)
//{
//	cout << "The 2D Array is " << endl;
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			cout << matrix[i][j] << "  ";
//		}
//		cout << endl;
//	}
//}
//void calculte_size(char** matrix, int rows, int cols, int& alp, int& num, int& spc)
//{
//	alp = 0, num = 0, spc = 0;
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			if ((matrix[i][j] >= 'A' && matrix[i][j] <= 'Z') || (matrix[i][j] >= 'a' && matrix[i][j] <= 'z'))
//			{
//				alp++;
//			}
//			else if (matrix[i][j] >= '0' && matrix[i][j] <= '9')
//			{
//				num++;
//			}
//			else
//				spc++;
//		}
//	}
//}
//void calculateASCII(char* alphabets, char* numbers, char* specialchar, char** matrix, int rows, int cols, int& alp, int& num, int& spc)
//{
//	alp = 0, num = 0, spc = 0;
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			if ((matrix[i][j] >= 'A' && matrix[i][j] <= 'Z') || (matrix[i][j] >= 'a' && matrix[i][j] <= 'z'))
//			{
//				alp++;
//			}
//			else if (matrix[i][j] >= '0' && matrix[i][j] <= '9')
//			{
//				num++;
//			}
//			else
//				spc++;
//		}
//	}
//	//	alphabets = new char[alp], numbers = new char[num], specialchar = new char[spc];
//	int a = 0, b = 0, c = 0;
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			if ((matrix[i][j] >= 'A' && matrix[i][j] <= 'Z') || (matrix[i][j] >= 'a' && matrix[i][j] <= 'z'))
//			{
//				*(alphabets + a) = matrix[i][j];
//				a++;
//			}
//			else if (matrix[i][j] >= '0' && matrix[i][j] <= '9')
//			{
//				*(numbers + b) = matrix[i][j];
//				b++;
//			}
//			else
//			{
//				*(specialchar + c) = matrix[i][j];
//				c++;
//			}
//		}
//	}
//}
//void Outputarray(char* alphabets, char* numbers, char* specialchar, int alp, int num, int spc)
//{
//	cout << "Alphabets : ";
//	for (int i = 0; i < alp; i++)
//	{
//		cout << *(alphabets + i) << "  ";
//	}
//	cout << endl;
//	cout << "Numbers : ";
//	for (int i = 0; i < num; i++)
//	{
//		cout << *(numbers + i) << "  ";
//	}
//	cout << endl;
//	cout << "Special Characters : ";
//	for (int i = 0; i < spc; i++)
//	{
//		cout << *(specialchar + i) << "  ";
//	}
//	cout << endl;
//}
//void DeallocateMemory(char* alphabets, char* numbers, char* specialchar, char** matrix, int rows)
//{
//	delete[]numbers;
//	delete[]alphabets;
//	delete[]specialchar;
//	for (int i = 0; i < rows; i++)
//	{
//		delete[] matrix[i];
//	}
//	delete[]matrix;
//}
//int main()
//{
//	int rows, cols, alp, num, spc;
//	char** matrix = AllocateMemory(rows, cols);
//	InputMatrix(matrix, rows, cols);
//	DisplayMatrix(matrix, rows, cols);
//	calculte_size(matrix, rows, cols, alp, num, spc);
//	char* alphabets = new char[alp], * numbers = new char[num], * specialchar = new char[spc];
//	calculateASCII(alphabets, numbers, specialchar, matrix, rows, cols, alp, num, spc);
//	Outputarray(alphabets, numbers, specialchar, alp, num, spc);
//	DeallocateMemory(alphabets, numbers, specialchar, matrix, rows);
//	system("pause");
//	return 0;
//}
