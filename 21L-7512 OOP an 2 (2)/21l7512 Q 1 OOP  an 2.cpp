/*
Problem 1: [10]
Declare three arrays dynamically containing alphabet letters, Array names are U= Set of all
alphabets, A letters given by user and B letters given by user, find A n B and A u B , U –(AUB) ,
A’ , B’
*/

/*
#include<iostream>
using namespace std;

char* intersection_fun(char* arr1, int size1, char* arr2, int size2,int &sizei)
{
	int temp;
	if (size1 > size2)
		temp = size1;
	else
		temp = size2;
	char* tarr = new char[temp];//if both arrays match placing in temp dynamic array
	int k = 0;
	for (int i = 0; i < size1; i++)
	{
		for (int j = 0; j < size2; j++)
		{
			if (*(arr1 + i) == *(arr2 + j))
			{
				*(tarr + k) = *(arr1 + i);
				k++;
			}
		}
	}
	char* interarr = new char[k];//creating new array of exact size
	for (int i = 0; i < k; i++)//copying array
	{
		*(interarr + i) = *(tarr + i);
	}
	sizei = k;
	delete[]tarr;//deleteing temp array
	return interarr;//returning array
}
char* union_fun(char* arr1, int size1, char* arr2, int size2, int& sizeu)
{
	char* temp = new char[sizeu];//creating temp array
	for (int i = 0; i < sizeu; i++)//copying both arrays in temp array
	{
		if (i < size1)
		{
			*(temp + i) = *(arr1 + i);
		}
		else
			*(temp + i) = *(arr2 + i - size1);
	}
	char alp;
	for (int i = 0; i < sizeu; i++)//Bubble sorting in ascending order
	{
		for (int j = 0; j < sizeu - 1; j++)
		{
			if (*(temp + j) > *(temp + j + 1))
			{
				alp = *(temp + j);
				*(temp + j) = *(temp + j + 1);
				*(temp + j + 1) = alp;
			}
		}
	}
	for (int i = 0; i < sizeu; i++)//deleting elements if match to remove repetition
	{
		for (int j = 0; j < sizeu - 1; j++)
		{
			if (*(temp + j) == *(temp + j + 1))
			{
				for (int k = j; k < sizeu; k++)
				{
					*(temp + k) = *(temp + k + 1);
				}
				sizeu--;
			}
		}
	}
	char* uniarr = new char[sizeu];//new array of exact size
	for (int i = 0; i < sizeu; i++)//copying array
	{
		*(uniarr + i) = *(temp + i);
	}
	delete[]temp;//deleting temp array
	return uniarr;//returning array
}
char* comunion_fun(char* arr, int sizeu, char* Uarr, int &sizesetU)
{
	char* temp = new char[sizesetU];//creating temp array
	for (int i = 0; i < sizesetU; i++)//copying U into temp
	{
		*(temp + i) = *(Uarr + i);
	}
	for (int i = 0; i < sizeu; i++)//if elements of union array matches with temp which then delete it
	{
		for (int j = 0; j < sizesetU; j++)
		{
			if (*(arr + i) == *(temp + j))
			{
				for (int k = j; k < sizesetU; k++)
				{
					*(temp + k) = *(temp + k + 1);
				}
				sizesetU--;
			}
		}
	}
	char* compU = new char[sizesetU];//creating new array of exact size
	for (int i = 0; i < sizesetU; i++)//copying array
	{
		*(compU + i) = *(temp + i);
	}
	delete[]temp;//delete temp array
	return compU;//returning array
}
char* compA_fun(char* arr1, int size1, char* Uarr, int& sU)
{
	char* temp = new char[sU];//creating temp array
	for (int i = 0; i < sU; i++)//copying U in temp
	{
		*(temp + i) = *(Uarr + i);
	}
	for (int i = 0; i < size1; i++)//deleting if A matches with temp array
	{
		for (int j = 0; j < sU; j++)
		{
			if (*(arr1 + i) == *(temp + j))
			{
				for (int k = j; k < sU; k++)
				{
					*(temp + k) = *(temp + k + 1);
				}
				sU--;
			}
		}
	}
	char* compA = new char[sU];//creating array of exact size
	for (int i = 0; i < sU; i++)//copying array
	{
		*(compA + i) = *(temp + i);
	}
	delete[]temp;//deleting temp array
	return compA;//returning array
}
char* compB_fun(char* arr2, int size2, char* Uarr, int& sU)
{
	char* temp = new char[sU];//creating temp array
	for (int i = 0; i < sU; i++)//copying U in temp array
	{
		*(temp + i) = *(Uarr + i);
	}
	for (int i = 0; i < size2; i++)//deleting if B matches with temp array
	{
		for (int j = 0; j < sU; j++)
		{
			if (*(arr2 + i) == *(temp + j))
			{
				for (int k = j; k < sU; k++)
				{
					*(temp + k) = *(temp + k + 1);
				}
				sU--;
			}
		}
	}
	char* compB = new char[sU];//creating array of exact size
	for (int i = 0; i < sU; i++)//copying array
	{
		*(compB + i) = *(temp + i);
	}
	delete[]temp;//deleting temp array
	return compB;//returning array
}
int main()
{
	int size1, size2, sizei, sizeu, sizesetU, cs, sU = 52;//initillizing variables
	char* intersectionarr, * unionarr, * compU, * compA, * compB;
	sizesetU = sU;
	cs = sU;
	cout << "Enter the size of Array A : ";//size of array A
	cin >> size1;
	cout << "Enter the size of Array B : ";//size of array B
	cin >> size2;
	sizeu = size1 + size2;
	char* arr1 = new char[size1];//initillizing dynamic arrays
	char* arr2 = new char[size2];
	char* U = new char[sU];
	for (int i = 0; i < sU; i++)// giving values to set U
	{
		if (i < 26)
			*(U + i) = ('A' + i);
		else
			*(U + i) = ('a' + i - 26);
	}
	for (int i = 0; i < size1; i++)// taking values from user in A
	{
		cout << "Enter " << i + 1 << " element of Array A : ";
		cin >> *(arr1 + i);
	}
	for (int i = 0; i < size2; i++)//taking values from user in B
	{
		cout << "Enter " << i + 1 << " element of Array B : ";
		cin >> *(arr2 + i);
	}
	cout << endl;
	intersectionarr=intersection_fun(arr1, size1, arr2, size2,sizei);//calling intersection function
	cout << "A n B is = { ";//displaying intersection array
	for (int i = 0; i < sizei; i++)
	{
		cout << *(intersectionarr + i) ;
		if (i != sizei - 1)
			cout << ",";
	}
	cout << " } " << endl;
	cout << endl;
	unionarr = union_fun(arr1, size1, arr2, size2, sizeu);//calling union function
	cout << "A u B is = { ";//displaying union array
	for (int i = 0; i < sizeu; i++)
	{
		cout << *(unionarr + i);
		if (i != sizeu - 1)
			cout << ",";
	}
	cout << " } " << endl;
	cout << endl;
	compU=comunion_fun(unionarr, sizeu, U, sizesetU);//calling U complement function
	cout << "U - (A u B) is = { ";//Displaying U complement function
	for (int i = 0; i < sizesetU; i++)
	{
		cout << *(compU + i);
		if (i != sizesetU - 1)
			cout << ",";
	}
	cout << " } " << endl;
	cout << endl;
	compA = compA_fun(arr1, size1, U, cs);//calling A complement function
	cout << " A' is = { ";//Displaying A complement function
	for (int i = 0; i < cs; i++)
	{
		cout << *(compA + i);
		if (i != cs - 1)
			cout << ",";
	}
	cout << " } " << endl;
	cout << endl;
	compB = compB_fun(arr2, size2, U, cs);//calling B complement function
	cout << " B' is = { ";//Displaying B complement function
	for (int i = 0; i < cs; i++)
	{
		cout << *(compB + i);
		if (i != cs - 1)
			cout << ",";
	}
	cout << " } " << endl;
	cout << endl;
	delete[]arr1;//Deleting all created dynamic arrays
	delete[]arr2;
	delete[]intersectionarr;
	delete[]unionarr;
	delete[]compU;
	delete[]compA;
	delete[]compB;
	return 0;
}

*/