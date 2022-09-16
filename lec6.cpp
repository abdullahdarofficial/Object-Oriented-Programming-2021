////Pointers Indirection.
////  Dynamic 2D, allocation,
////  matrices, CStrings etc
////
//
//#include<iostream>
//using namespace std;
//int main()
//{
//	int* ptr = new int;
//	int a = 10;
//	*ptr = a;
//	int val;
//	val = *ptr;
//	cout << "address of ptr loc  : " << ptr << endl;
//	cout << "address of ptr loc of a : " << &ptr << endl;
//	cout << "address of a as &a : " << &a << endl;
//	cout << "value : " << a << endl;
//	cout << "value : " << *ptr << endl;
//
//	/*int** matrix = new int*[3];
//	for(int i=0;i<3;i++ )
//	{
//		matrix[i] = new int[3];
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			cout << "enter : ";
//			cin >> matrix[i][j];
//		}
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			cout << matrix[i][j] <<" ";
//		}
//		cout << endl;
//	}*/
//
//	char** matrixx = new char* [3];
//	for (int i = 0; i < 3; i++)
//	{
//		matrixx[i] = new char[10];
//	}
//	cin.getline(matrixx[0], 10);
//	cin.getline(matrixx[1], 10);
//	cin.getline(matrixx[2], 10);
//
//	//cin.ignore();
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			if (matrixx[i][j] == '\0')
//				break;
//			cout << matrixx[i][j] << " ";
//		}
//		cout << endl;
//	}
//	return 0;
//}