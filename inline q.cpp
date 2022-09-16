//Program to convert a decimal number into binary by inline function
/*
#include<iostream>
using namespace std;

class convert
{
private:
	int num;
public:
	convert()
	{
		num = 0;
	}
	void get_num(int n)
	{
		num = n;
	}
	inline void convert_Num()
	{
		int check = num, count = 0;
		while (check!= 0)
		{
			check = check / 2;
			count++;

		}
		int* arr = new int[count];
		check = num;
		int count1 = count;
		while (check != 0)
		{
			arr[count-1] = check % 2;
			check = check / 2;
			count--;
		}
		cout<<"Binary conversion of decimal " << num << " is : ";
		if (num == 0)
			cout << "0";
		else
		{
			for (int i = 0; i <(4- (count1 % 4)); i++)
			{
				cout << "0";
			}
		}
		for (int i = 0; i < count1; i++)
		{		
    		if ((count1 - i) % 4 == 0)
			{
				cout << " ";
			}
			cout << arr[i];
		}
	}
};




int main()
{
	int n;
	convert obj;
	cout << "Enter the number : ";
	cin >> n;
	obj.get_num(n);
	obj.convert_Num();
	return 0;
}*/