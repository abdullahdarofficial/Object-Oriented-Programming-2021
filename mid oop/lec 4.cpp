/*


#include<iostream>
using namespace std;

int main()
{
	
	int* ptr = new int[10];//create 1 d dynamic array


	for (int i = 0; i < 10;i ++)
	{
		cout << "Enter " << i + 1 << " element : ";
		//cin >> ptr[i];
		cin >> *(ptr + i);
	}
	for (int i = 0; i < 10; i++)
	{
		cout <<  " element : "<< i + 1 << "   is   ";
		//cin >> ptr[i];
		cout << *(ptr + i) << "   " << endl;
	}

	//delete 1 d dynamic array
	delete[] ptr;

	
	//////////////
	
	int* p1 = new int[5];
	for (int i = 0; i < 5; i++)
	{
		cin >> *(p1 + i);
	}
	cout << " Now growwing array to 10 size";
	int *temp = new int[10];

	for (int i = 0; i < 10; i++)
	{
		if (i < 5)
		{
			*(temp + i) = *(p1 + i);
		}
		else
		{
			cout << "Enter " << i + 1 << " : ";
			cin >> *(temp + i);
		}
	}
	delete [] p1;
	p1 = temp;
	for (int i = 0; i < 10; i++)
	{
		cout << *(p1 + i) << endl;
	}
//	delete temp;
	cout << "Shrink array to 5 : " << endl;
	 temp = new int[5];
	for (int i = 0; i < 5; i++)
	{
		*(temp + i) = *(p1 + i);

	}
	delete[]p1;
	p1 = temp;
//	delete temp;

	for (int i = 0; i < 5; i++)
	{
		cout << *(p1 + i) << endl;
	}
	
	///////////////////


	int* pt1 = new int[5] ;
	int* pt2 = new int[5];
	int* inter = new int[5];
	for (int i = 0; i < 5; i++)
	{
		cout << " array 1 : " << i + 1 << "  : ";
		cin >> *(pt1 + i);
	}
	for (int i = 0; i < 5; i++)
	{
		cout << " array 2 : " << i + 1 << "  : ";
		cin >> *(pt2 + i);
	}
	int k = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
		
			{
				if (*(pt1 + i) == *(pt2 + j))
				{
					*(inter + k) = *(pt1 + i);
					k++;
				}
			}
		}
	}

	for (int i = 0; i < k; i++)
	{
		cout << *(inter + i) << endl;
	}

return 0;
}

*/