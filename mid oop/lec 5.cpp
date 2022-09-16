


#include<iostream>
using namespace std;

int main()
{
	
	int a = 10;
	int* p = new int[5];
	
	int** p2p = &p;
	int* pv = p;
	int* p2p2p = &a;
	

	int var = 7;
	int* p = &var;
	int** p2p = &p;

	cout << " var " << var << endl;
	cout << " &var " << &var  << endl;
	cout << " *p " << *p << endl;
	cout << " &p " << &p << endl;
	cout << " **p2p " << **p2p << endl;
	cout << " p " << p << endl;
	cout << " &p2p " << &p2p << endl;
	cout << " *p2p " << *p2p << endl;
	cout << " p2p " << p2p << endl;


	//creating 2 d array
	int** arr = new int* [5];

	for (int i = 0; i < 5; i++)
	{
		arr[i] = new int[5];
	}
	
	//deleting 2 d array

	for (int i= 0; i < 5; i++)
	{
		delete[]arr[i];
	}
	delete[]arr;

	return 0;
}


