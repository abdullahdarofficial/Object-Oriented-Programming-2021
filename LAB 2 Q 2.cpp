//#include<iostream>
//using namespace std;
//int* InputArray(int& size)
//{
//	cout << "Enter the size of the array : ";
//	cin >> size;
//	int* ptr = new int[size];
//	for (int i = 0; i < size; i++)
//	{
//		cout << "Enter " << i + 1 << " element ";
//		cin >> *(ptr + i);
//	}
//	cout << endl;
//	return ptr;
//}
//void OutputArray(int* myArray, const int& size)
//{
//	cout << "Resultant Array is : ";
//	for (int i = 0; i < size; i++)
//	{
//		cout << *(myArray + i) << "  ";
//	}
//	cout << endl;
//}
//int* CompressArray(int* originalArr, int& size)
//{
//	int tsize = size;
//	for (int i = 0, k = 0; i < size-1 && k < 10; i++, k++)
//	{
//		if (*(originalArr + i) == *(originalArr + i + 1))
//		{
//			for (int j = i; j < tsize; j++)
//			{
//				*(originalArr + j) = *(originalArr + j + 1);
//			}
//			tsize--;
//			k++;
//		}
//	}
//	cout << "Compressed Array Given Below " << endl;
//	OutputArray(originalArr, tsize);
//	return originalArr;
//}
//int* Intersection(int* setA, int& size1, int* setB, int& size2, int& size3)
//{
//	cout << "Enter the size of the set A : ";
//	cin >> size1;
//	setA = new int[size1];
//	for (int i = 0; i < size1; i++)
//	{
//		cout << "Enter the " << i + 1 << " element of the Set A : ";
//		cin >> *(setA + i);
//	}
//	cout << "Enter the size of the set B : ";
//	cin >> size2;
//	setB = new int[size2];
//	for (int i = 0; i < size2; i++)
//	{
//		cout << "Enter the " << i + 1 << " element of the Set B : ";
//		cin >> *(setB + i);
//	}
//	size3 = size1 + size2;
//	int* setC = new int[size3];
//	int k = 0, check = 0;
//	for (int i = 0; i < size1; i++)
//	{
//		for (int j = 0; j < size2; j++)
//		{
//			if (*(setA + i) == *(setB + j))
//			{
//				for (int l = 0; l <= k; l++)
//				{
//					if (*(setC + l) == *(setA + i))
//					{
//						check = 1;
//					}
//				}
//				if(check==0)
//				*(setC + k) = *(setA + i);
//				k++;
//				check == 0;
//			}
//		}
//	}
//	size3 = k;
//	cout << "The Intersection of Array is" << endl;
//	OutputArray(setC, size3);
//	return setC;
//}
//
//int main()
//{
//	int* setA=NULL, size1 = 0, * setB=NULL,  size2 = 0,  size3 = 0;
//	int size = 1;
//	//input function
//	int* myArray = InputArray(size);
//	//output function
//	OutputArray(myArray, size);
//	//compress function
//	int *compArr= CompressArray(myArray, size);
//	//intersection function
//	int* intersArr = Intersection(setA,size1,setB,size2,size3);
//
//	system("pause");
//	return 0;
//}
