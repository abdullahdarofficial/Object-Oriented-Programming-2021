//#include<iostream>
//#include<conio.h>
//using namespace std;
//class Animal
//{
//public:
//	virtual char* speak()
//	{
//		return "Speak() Called";
//	}
//};
//
//class Dog: public Animal
//{
//public:
//	char* speak()
//	{
//		return "Woof!!";
//	}
//};
//
//class Cat:public Animal
//{
//public:
//	char*speak()
//	{
//		return  "Mew!!";
//	}
//};
//int main()
//{
//	const int size = 5;
//	Animal * myPets[size];
//	int i = 0;
//	while (i< size)
//	{
//		cout <<" Press 1 for a Dog and 2 for a Cat."<<endl;
//		switch (_getch())
//		{
//		case '1' :
//			myPets[i] = new Dog;
//			cout <<"Dog added at position "<< i << endl<< endl;
//			i++;
//			break;
//		case '2' :
//			myPets[i] = new Cat;
//			cout<<" Cat added at position :"<< i << endl<< endl;
//			i++;
//			break;
//		default:
//			cout<<" Invalid input.Enter again."<< endl<< endl;
//			break;
//		}
//	}
//
//	system("pause");
//	return 0;
//}