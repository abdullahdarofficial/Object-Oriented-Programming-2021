////
////  Memory Leak and Dangling Pointers,
////  Dynamic 1- dimensional char arrays
////  for strings, string operations like
////  search, concatenation etc.  
////
//
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	char* arr = new char[10];
//	char* arr1 = new char[10];
//	char* arr2 = new char[20];
//	cout << "Enter your first name : ";
//	cin.getline(arr, 10);
//	char find;
//	cout << "Enter Character which you want to find : ";
//	cin >> find;
//	for (int i = 0; i < 10; i++)
//	{
//		if (find == *(arr + i))
//		{
//			cout << "Char " << find << " found at index " << i << endl;
//		}
//	}
//	cin.ignore();
//	cout << "Enter your second name : ";
//	cin.getline(arr1, 10);
//	for (int i = 0, j = 0; i < 20; i++)
//	{
//		*(arr2 + i) = '\0';
//		if (*(arr+j) != '\0')
//		{
//			*(arr2 + i) = *(arr + i);
//			j = i;
//			j++;
//			//cout << j;
//		}
//		else if(*(arr + j) == '\0' && *(arr1 + i - j) != '\0')
//		{
//			*(arr2 + i) = *(arr1 + i - j);
//		}
//	}
//	for (int i = 0; *(arr2 + i) != '\0'; i++)
//	{
//		cout << *(arr2 + i) << " ";
//	}
//	cout << endl;
//	//Dangling Pointer 
//	char* ptr;
//	ptr = arr2;
//	for (int i = 0; *(arr2 + i) != '\0'; i++)
//	{
//		cout << *(ptr + i) << " ";
//	}
//	delete[]arr;
//	delete[]arr1;
//	delete[]arr2;
//	/*for (int i = 0; *(arr2 + i) != '\0'; i++)
//	{
//		cout << *(ptr + i) << " ";
//	}*/
//    //Dangling pointer issue
//	return 0;
//}