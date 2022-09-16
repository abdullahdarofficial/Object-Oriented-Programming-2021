
/*

Problem 4: [10]
Write a function to represent an array (created dynamically) using histogram. Make sure to scale
up the histogram by 2.
Sample Output

Array A Histogram (Output)
4  ********
8  ****************
2  ****
6  ************
4  ********
8  ****************
10 ********************
3  ******
5  **********
10 ********************
*/


/*

#include<iostream>
using namespace std;

void Histogram(int* arr, int size)
{
	cout << "Histogram" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << *(arr + i) << "  ";
		for (int j = 0; j < (*(arr + i)*2); j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}

int main()
{
	int size;
	cout << "Please enter the size of Array : ";
	cin >> size;
	int* arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		cout << "Enter the " << i + 1 << " element of the Array : ";
		cin >> *(arr + i);
	}
	Histogram(arr, size);
	delete []arr;
	return 0;
}

*/