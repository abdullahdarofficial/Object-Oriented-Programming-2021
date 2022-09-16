/*
Create a function growArray which takes a dynamic array from the main, grows it and
returns to the main
*/

/*

#include<iostream>
using namespace std;

int* GrowArray(int *arr,int size,int grow)
{
	int* temp = new int[grow];//temp array of grow size
	int check,i;
	for ( i = 0; i < size; i++)//copying the original array
	{
		*(temp + i) = *(arr + i);
	}
	//condition if user want to add more number into the grown array else null will be placed in remaining array indexs
	cout << "Do you want to add more elements into the Array \nPress 1 if yes Else Any Key to to leave the Growed array empty \n(AUTO NULL for remaining entries)!!! : ";
	cin >> check;
	if (check == 1)
	{
		cout << "Enter remaining " << grow - size << " elements : " << endl;
		for (; i < grow; i++)
		{
			cout << "Enter the " << i + 1 << " element : ";
			cin >> *(temp + i);
		}
	}
	else
	{
		cout << "NULL is Placed on Remaining Index of Dynamic Array" << endl;
		for (; i < grow; i++)
		{
			*(temp + i)='\0';
		}
	}
	delete []arr;//deleting original array to remove memory leakage
	arr = temp;//allocating new array
	cout << "Your Array size has been Growed : " ;
	return arr;//returning array.
}

int main()
{
	int size=0;
	cout << "Enter the size of the Array : ";//taking size
	cin >> size;
	int* arr = new int[size];
	for (int i = 0; i < size; i++)//taking inputs into the array
	{
		cout << "Enter the " << i + 1 << " element of the Array : ";
		cin >> *(arr + i);
	}
	cout << "Your Array is : ";//outputting the array
	for (int i = 0; i < size; i++)
	{
		cout << *(arr + i) << "  ";
	}
	cout << endl;
	int grow = 0;
	cout << "How much you want to grow the array : ";//taking the grown size
	cin >> grow;
	while (grow <= size)//if grown size is less or equal to original size
	{
		cout << "Error entered size is less than existing size \nEnter Again : ";
		cin >> grow;
	}

	arr = GrowArray(arr,size,grow);//calling function
	for (int i = 0; i < grow && *(arr+i)!='\0'; i++)//printing the array
	{
		cout << *(arr + i) << "  ";
	}
	cout << endl;
	system("pause");
	return 0;
}



*/