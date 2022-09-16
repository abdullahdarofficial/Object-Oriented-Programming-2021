//find the second largest number entered by the user in a dynamically allocated 1 D array
//Create a Function

/*

#include<iostream>
using namespace std;

int seclargest(int size)
{
	int* arr = new int[size];//initillizing pointer array.
	int large = 0, j = 0, check = -9999, i, check1 = -999;
	for ( i = 0; i < size; i++)//taking inputs in array
	{
		cout << "Enter the " << i + 1 << " element : ";
		cin >> *(arr + i);
	}
	while (j <2)//finding sec largest number
	{
		large = -1111;
		for ( i = 0; i < size ; i++)
		{
			if (i != check1)//The index of the largest number does not come to check in the condition
			{
				if (*(arr + i) > large)
				{
					large = *(arr + i);
					check = i;
				}
			}
		}
		check1 = check;//storing the index of first largest number.
		j++;
	}
	delete[]arr;//Removing memory leakage
	return large;//return sec largest num
}

int main()
{
	int size, result;//initillization 
	cout <<"Enter the size of the Array : ";//Taking size from user
	cin >> size;

	result=seclargest(size);//Calling int function
	cout << "The second Largest element in the array is : " << result << endl;//Exiting output

	system("pause");
	return 0;
}

*/