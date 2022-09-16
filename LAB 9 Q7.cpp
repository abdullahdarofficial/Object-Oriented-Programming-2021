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
//	virtual ~Animal() { cout<<" ~Animal() called."<< endl; }
//};
//
//class Dog: public Animal
//{
//public:
//	char* speak()
//	{
//		return "Woof!!";
//	}
//	~Dog() 
//	{ cout<<" ~Dog() called."<< endl; }
//};
//
//class Cat:public Animal
//{
//public:
//	char*speak()
//	{
//		return  "Mew!!";
//	}
//	~Cat()
//	{
//		cout << " ~Cat() called." << endl;
//	}
//};
//
//class Sheep :public Animal
//{
//public:
//	char*speak()
//	{
//		return  "Bleat!!";
//	}
//	~Sheep()
//	{
//		cout << " ~Sheep() called." << endl;
//	}
//};
//
//class Cows :public Animal
//{
//public:
//	char*speak()
//	{
//		return  "Moo!!";
//	}
//	~Cows()
//	{
//		cout << " ~Cows() called." << endl;
//	}
//};
//
//class Horses :public Animal
//{
//public:
//	char*speak()
//	{
//		return  "Neigh!!";
//	}
//	~Horses()
//	{
//		cout << " ~Horses() called." << endl;
//	}
//};
//
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
//
//			break;
//
//		case '3':
//			myPets[i] = new Sheep;
//			cout << " Sheep added at position :" << i << endl << endl;
//			i++;
//			break;
//
//		case '4':
//			myPets[i] = new Cows;
//			cout << " Cows added at position :" << i << endl << endl;
//			i++;
//			break;
//
//		case '5':
//			myPets[i] = new Horses;
//			cout << " Horses added at position :" << i << endl << endl;
//			i++;
//			break;
//
//		default:
//			cout<<" Invalid input.Enter again."<< endl<< endl;
//			break;
//		}
//	}
//	for (int i = 0; i < size; i++)
//	{
//		myPets[i]->~Animal();
//	}
//	system("pause");
//	return 0;
//}