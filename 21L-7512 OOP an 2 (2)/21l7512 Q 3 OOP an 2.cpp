/*
Given three variables x, y, z write a function to circularly shift their values to right using
pointers. In other words if x = 5, y = 8, z = 10 after circular shift y = 5, z = 8, x =10 after circular
shift y = 5, z = 8 and x = 10. Call the function with variables a, b, c to circularly shift values.
*/

/*

#include<iostream>
using namespace std;

void fun_circularly(int &x, int &y, int &z)
{
	int* c , * b  , * a ;
	 a = &x;
	 b = &y;
	 c = &z;
	 int temp = *c;
	 *c = *b;
	 *b = *a;
	 *a = temp;
}

int main()
{
	int x, y, z, check = 1;
	cout << "Enter value of X : ";
	cin >> x;
	cout << "Enter value of Y : ";
	cin >> y;
	cout << "Enter value of Z : ";
	cin >> z;

	while (check == 1)
	{
		fun_circularly(x, y, z);
		cout << "After Circulalating" << endl;
		cout << "The Values of X : " << x << endl;
		cout << "The Values of Y : " << y << endl;
		cout << "The Values of Z : " << z << endl;
		check = 0;
		cout << "Do You again want to circulate the numbers : \nPress 1 to continue else Press any key to end : ";
		cin >> check;
	}
	cout << "Program Finished SuccessFully" << endl;
	return 0;
}


*/