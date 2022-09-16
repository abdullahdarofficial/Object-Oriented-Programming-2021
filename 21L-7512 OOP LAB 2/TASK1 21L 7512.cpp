
/*
#include<iostream>
using namespace std;
int main()

{
	int *ptr = new int[5];
	int size = 5;
	int count = 0;
	for (int i = 0; i < ( size); i++)
	{
		if (*(ptr + i) != -1)
		{
			cout << "Enter the " << i + 1 << " element of array : ";
			cin >> *(ptr + i);
			if (*(ptr + i) == -1)
				break;
			count++;
		if (i == ( size-1) && *(ptr + i) != -1)
			{
				size=size*2;
				int *temp = new int[size];
				for (int j = 0; j < (size) - 1; j++)
				{
					*(temp + j) = *(ptr + j);
				}
				delete[] ptr;
				ptr = temp;
				temp = 0;
			}
		}
	}
	cout << "The reversed output is : " << endl;
	for (int i = count-1; i >=0; i--)
	{
		cout << *(ptr + i) << "  ";
	}
	system("pause");
	return 0;
}
*/