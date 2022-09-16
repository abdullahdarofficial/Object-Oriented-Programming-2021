//#include<iostream>
//using namespace std;
//int main()
//{
//	int arr1[10] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
//	int arr2[10] = { 0, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
//	int ptrtemp=0, *arrptr1, *arrptr2;
//	arrptr1 = arr1, arrptr2 = arr2;
//	 for (int i = 0; i < 10; i++)
//	 {
//		 ptrtemp = *arrptr1;
//		 *arrptr1 = *arrptr2;
//		 *arrptr2 = ptrtemp;
//		 arrptr1++;
//		 arrptr2++;
//	 }
//	 cout << "After Swapping first Array  ";
//	 for (int i = 0; i < 10; i++)
//	 {
//		 cout << arr1[i]<<" ";
//	 }
//	 cout << endl;
//	 cout << "After Swapping second Array  ";
//	 for (int i = 0; i < 10; i++)
//	 {
//		 cout << arr2[i] << " ";
//	 }
//	 cout << endl;
//	system("pause");
//	return 0;
//}
