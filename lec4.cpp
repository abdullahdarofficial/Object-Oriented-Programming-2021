////Dynamic 1- dimensional arrays, Create, 
//// Delete, Grow and Shrink.
////Example of programs using 1D dynamic 
//// allocation : e.g., mathematical sets
////  unionand intersection
////
//
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	cout << "Simple Array " << endl;
//	int* arr = new int[10];
//
//	int* temp = new int[15];
//
//	
//	for (int i = 0; i < 10; i++)
//	{
//		*(arr + i) = i + 1;
//	}
//	for (int i = 0; i<10; i++)
//	{
//		cout << (*arr + i) << endl;
//	}
//	cout << "Grow array " << endl;
//	for (int i = 0; i < 15; i++)
//	{
//		if (i < 10)
//		{
//			*(temp + i) = *(arr + i);
//		}
//		else
//			*(temp + i) = i + 1;
//	}
//	delete[]arr;
//	arr = temp;
//	//delete[] temp; //all data will loss
//	for (int i = 0;i< 15; i++)
//	{
//		cout << (*arr + i) << endl;
//	}
//	//system("pause");
//	cout << "Shrink Array " << endl;
//	
//
//   // temp = new int[10];
//	for (int i = 0; i < 15; i++)
//	{
//		if (i < 10)
//			*(temp + i) = *(arr + i);
//		else
//			*(temp + i) = '\0';
//
//	}
//	arr = temp;
//	//delete[]temp;
//	for (int i = 0; i<15; i++)
//	{
//		cout << (*arr + i) << endl;
//	}
//	//system("pause");
//
//	delete[] arr;
//	//delete[] temp;
//
//	//system("pause");
//
//	int *arr1 = new int[10];
//	int *arr2 = new int[10];
//	int* unionarr = new int[20];
//	int* interarr = new int[10];
//
//
//	for (int i = 0; i < 10; i++)
//	{
//		*(arr1 + i) = i + 2;
//		cout << *(arr1 + i) << endl;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		*(arr2 + i) = i + 1;
//		cout << *(arr2 + i) << endl;
//
//	}
//	cout << "INTERSECTION" << endl;
//	for(int k=0;k<10;k++)
//	{
//		for (int i = 0, j = 0; i < 10; i++)
//		{
//			if (*(arr1 + k) == *(arr2 + i))
//			{
//				*(interarr + j) = *(arr1 + k);
//				cout << *(interarr + j) << endl;
//				j++;
//			}
//		}
//	}
//	cout << "UNION" << endl;
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			if (i < 10)
//			{
//				*(unionarr + i) = *(arr1 + i);
//			}
//			else
//				*(unionarr + i) = *(arr2 + i - 10);
//		}
//	}
//	for (int i = 0; i < 20; i++)
//	{
//		cout << *(unionarr + i) << endl;
//	}
//	for (int i = 0; i < 20; i++)
//	{
//		for (int j = 0; j < 20; j++)
//		{
//			if ((*(unionarr + i) == *(unionarr + j)) && j<i)
//			{
//				cout << *(unionarr + j) << endl;
//			}
//		}
//	}
//
//
//	return 0;
//}