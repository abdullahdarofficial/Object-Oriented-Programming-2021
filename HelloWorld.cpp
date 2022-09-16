//#include<iostream>
//#include<fstream>
//using namespace std;
//
//int main()
//{
//	ofstream Myfile("HelloWorld");
//	Myfile << "Files can be tricky to handle but its fun enough!!";
//	Myfile.close();
//}

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	char arr[100] = { '\0' };
	ifstream Myfile;
	Myfile.open("HelloWorld.txt");
	if (!Myfile)
	{
		cout << " not found" << endl;
	}

	while (!Myfile.eof())
	{
		Myfile.getline(arr, 100);

	}

	Myfile.close();
	for (int i = 0; arr[i] != '\0'; i++)
	{
		cout << arr[i];
	}
}
