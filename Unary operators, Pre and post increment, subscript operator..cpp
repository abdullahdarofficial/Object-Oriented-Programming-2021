//Unary operators, Pre and post increment, subscript operator.
//Substript Operator
 
#include<iostream>
using namespace std;
class Point
{
	char* arr;
	int size;
public:
	Point()
	{
		arr = NULL;
	}
	void setsize(int sizee)
	{
		size = sizee;
	}
	void setarr(char array[])
	{
		arr = new char[size];
		for (int i = 0; i < size; i++)
		{
			arr[i] = array[i];
		}
	}
	void operator[](int ind)
	{
		char ch;
		cout << "Which character you want to add on place " << ind << endl;
		cin >> ch;
		arr[ind] = ch;
	}
	void Disp()
	{
		for (int i = 0; arr[i] != '\0'; i++)
		{
			cout << arr[i];
		}
	}
	int getsize()
	{
		return size;
	}
};

int main()
{
	Point obj;
	int size;
	cout << "Enter size: ";
	cin >> size;
	cin.ignore();
	char* arr = new char[size];
	cout << "Enter the array : ";
	cin.getline(arr, size);
	obj.setsize(size);
	obj.setarr(arr);
	obj.Disp();
	int index;
	cout << "\nEnter index for changing : ";
	cin >> index;
	while (obj.getsize() < index && index > -1)
	{
		cout << "Enter again : ";
		cin >> index;
	}
	obj[index];
	obj.Disp();
	cout << "\nEnter index you want to change : " << endl;
	cin >> index;
	while (obj.getsize() < index && index > -1)
	{
		cout << "Enter again : ";
		cin >> index;
	}
	obj[index];
	obj.Disp();
	return 0;
}