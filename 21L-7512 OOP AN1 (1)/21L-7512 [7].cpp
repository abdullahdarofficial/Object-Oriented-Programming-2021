
/*
Create a function union which takes two dynamic arrays from the main and returns a
1D dynamic array containing their union.
*/

 /*

#include<iostream>
using namespace std;

int* unionArray(int* arr1, int* arr2, int size1, int size2, int &sizeu , int* uniarr)
{
	int check = 0, j = 0, swap = 0;
	int* temp = new int[sizeu];//temp array for union
	for (int i = 0; i < sizeu; i++)//copying both arrays into the temp array
	{
		if (i < size1)
		{
			*(temp + i) = *(arr1 + i);
			j++;
		}
		else
		{
			*(temp + i) = *(arr2 + i - j);
		}
	}
	for (int a = 0; a < sizeu - 1; a++)//sorting the union array containing elements of both arrays
	{
		for (int i = 0; i < sizeu - 1; i++)
		{
			if (*(temp + i) > *(temp + i + 1))
			{
				swap = *(temp + i);
				*(temp + i) = *(temp + i + 1);
				*(temp + i + 1) = swap;
			}
		}
	}
	for (int k = 0; k < sizeu; k++)//removing consective elements that are same 
	{
		for (int i = 0; i < sizeu - 1; i++)
		{
			if (*(temp + i) == *(temp + i + 1))
			{
				for (int a = i; a < sizeu; a++)
				{
					*(temp + a) = *(temp + a + 1);
				}
				sizeu--;
			}
		}
	}
	uniarr = new int[sizeu];//creating union array
	uniarr = temp;//allocating temp to union array
	return uniarr;//returning array
}

int main()
{
	int size1, size2, * uniarr=NULL;
	cout << "Enter the size of the First Array : ";//taking size of array 1
	cin >> size1;
	cout << "Enter the size of the Second Array : ";//taking size of array 2
	cin >> size2;
	int* arr1 = new int[size1];
	int* arr2 = new int[size2];
	int sizeu = size1 + size2;
	cout << "Enter the elements of First Array  " << endl ;//inputing elements in array 1 
	for (int i = 0; i < size1; i++)
	{
		cout << "element no " << i + 1 << " : ";
		cin >> *(arr1 + i);
	}
	cout << "Enter the elements of Second Array  " << endl ;//inputting elements in array 2
	for (int i = 0; i < size2; i++)
	{
		cout << "element no " << i + 1 << " : ";
		cin >> *(arr2 + i);
	}
	uniarr = unionArray(arr1, arr2, size1, size2, sizeu, uniarr);//calling function
	cout << "The Union of the 2 Dynamic Arrays is : ";
	for (int i = 0; i < sizeu; i++)//printing union of arrays
	{
		cout << *(uniarr + i) << "  ";
	}
	return 0;
}
*/