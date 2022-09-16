//////#include<iostream>
//////#include<fstream>
//////using namespace std;
//////
//////int main()
//////{
//////	ofstream Myfile("HelloWorld");
//////	Myfile << "Files can be tricky to handle but its fun enough!!";
//////	Myfile.close();
//////}
////
////#include<iostream>
////#include<fstream>
////using namespace std;
////
////int main()
////{
////	char arr[100] = { '\0' };
////	ifstream Myfile;
////	Myfile.open("HelloWorld");
////
////	if (!Myfile)
////	{
////		cout << " not found" << endl;
////	}
////
////	while (!Myfile.eof())
////	{
////		Myfile.getline(arr, 100);
////
////	}
////
////	Myfile.close();
////	for (int i = 0; arr[i] != '\0'; i++)
////	{
////		cout << arr[i];
////	}
////}
//
//
//#include<iostream>
//#include<fstream>
//
//using namespace std;
//
//int main()
//{
//	char name[20];
//	int num;
//
//	fstream Myfile;
//	Myfile.open("HelloWorld");
//	//ofstream Myfilee;
//	// Myfilee.open("HelloWorld");
//
//
//	if (!Myfile)
//	{
//		cout << " nae mili" << endl;
//	}
//
//	while (!Myfile.eof())
//	{
//		Myfile >> name;		
//		cout << name << endl;
//
//		//cin.getline(name, 20);
//
//		Myfile>>num;
//		cout << num << endl;
//		//Myfile << name;
//		//Myfile << num;
//		
//	}
//	Myfile.close();
//	Myfile.open("HelloWorld");
//	while (!Myfile.eof())
//	{
//		cin.getline(name, 20);
//		Myfile << name;
//		cout << name << endl;
//		cin >> num;
//		Myfile << num;
//		cout << num << endl;
//
//
//	}
//	Myfile.close();
//
//
//	Myfile.open("HelloWorld");
//	//ofstream Myfilee;
//	// Myfilee.open("HelloWorld");
//
//
//	if (!Myfile)
//	{
//		cout << " nae mili" << endl;
//	}
//
//	while (!Myfile.eof())
//	{
//		Myfile >> name;
//		cout << name << endl;
//
//		//cin.getline(name, 20);
//
//		Myfile >> num;
//		cout << num << endl;
//		//Myfile << name;
//		//Myfile << num;
//
//	}
//	Myfile.close();
//
//	return 0;
//
//
//}