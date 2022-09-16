//#include<iostream>
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
//	const int size = 2;
//	Animal * myPets[size];
//	Cat whiskers;
//	Dog mutley;
//	myPets[0] =& whiskers;
//	myPets[1] = &mutley;
//	for (int i = 0; i< size; i++)
//	cout << myPets[i] -> speak() << endl;
//	cout << endl << endl;
//	system("pause");
//	return 0;
//
//}