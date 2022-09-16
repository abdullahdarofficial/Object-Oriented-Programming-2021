//#include<iostream>
//using namespace std;
//
//class A;
//class B;
//class A
//{
//private:
//	char* arr1;
//	int size1;
//	int check;
//public:
//	A()
//	{
//		arr1 = NULL;
//		size1 = 0;
//		check = 0;
//	}
//	void get_arr(char array[])
//	{
//		for (int i = 0; i<15; i++)
//		{
//			arr1[i] = array[i];
//		}
//	}
//	friend void count_size(A a1, B b1);
//	friend bool check_equal(A a1, B b1);
//};
//class B
//{
//private:
//	char* arr2;
//	int size2;
//	int check;
//public:
//	B()
//	{
//		arr2 = NULL;
//		size2 = 0;
//		check = 1;
//	}
//	
//	void get_arr(char array[])
//	{
//		for (int i = 0; i<15; i++)
//		{
//			arr2[i] = array[i];
//		}
//	}
//	friend void count_size(A a1, B b1);
//	friend bool check_equal(A a1, B b1);
//};
//void count_size(A a1, B b1)
//{
//    a1.size1 = 0;
//	while (a1.arr1[a1.size1] != '\0')
//	{
//		a1.size1++;
//	}
//	b1.size2 = 0;
//	while (b1.arr2[b1.size2] != '\0')
//	{
//		b1.size2++;
//	}
//}
//bool check_equal(A a1, B b1)
//{
//	int count = 0;
//	for (int i = 0; i < a1.size1; i++)
//	{
//		if (a1.arr1[i] == b1.arr2[i])
//		{
//			count++;
//		}
//	}
//	if (count == b1.size2)
//	{
//		return true;
//	}
//
//	return false;
//}
//int main()
//{
//	int size;
//	cout << "Enter size 1 : ";
//	cin >> size;
//	int size1;
//	cout << "Enter size 2 : ";
//	cin >> size1;
//	char* arr1 = new char[size];
//	cin.ignore();
//	cout << "Enter array 1 : ";
//	cin.getline(arr1, size);
//	char* arr2 = new char[size1];
//	//cin.ignore();
//	cout << "Enter array 2 : ";
//	cin.getline(arr2, size1);
//	A a;
//	a.get_arr(arr1);
//	B b;
//	b.get_arr(arr2);
//	count_size(a, b);
//	bool check;
//	check = check_equal(a, b);
//	if (check == true)
//	{
//		cout << "Both arrays are equal";
//	}
//	else
//		cout << "Both arrays are different";
//	return 0;
//}