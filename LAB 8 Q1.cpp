//
//#include<iostream>
//using namespace std;
//class Ship
//{
//	char *ship;
//	int year;
//public:
//	Ship()
//	{
//		ship = nullptr;
//		year = 0;
//	}
//	Ship(char arr[], int ye)
//	{
//		year = ye;
//		int i = 0;
//		while (arr[i] != '\0')
//		{
//			i++;
//		}
//		ship = new char[i + 1];
//		for (int j = 0; j < i; j++)
//		{
//			ship[j] = arr[j];
//		}
//		ship[i] = '\0';
//	}
//	Ship(char arr[])
//	{
//		year = 0;
//		int i = 0;
//		while (arr[i] != '\0')
//		{
//			i++;
//		}
//		ship = new char[i + 1];
//		for (int j = 0; j < i; j++)
//		{
//			ship[j] = arr[j];
//		}
//		ship[i] = '\0';
//	}
//	Ship(int ye)
//	{
//		year = ye;
//	}
//	int getyear()
//	{
//		return year;
//	}
//	char * getship()
//	{
//		return ship;
//	}
//	void setyear(int y)
//	{
//		year = y;
//	}
//	void setyear(char arr[])
//	{
//		int i = 0;
//		while (arr[i] != '\0')
//		{
//			i++;
//		}
//		ship = new char[i + 1];
//		for (int j = 0; j < i; j++)
//		{
//			ship[j] = arr[j];
//		}
//		ship[i] = '\0';
//	}
//	virtual void Display()
//	{
//		cout << "The name of Ship is : ";
//		for (int i = 0; ship[i] != '\0'; i++)
//		{
//			cout << ship[i];
//		}
//		cout << "\nIt s Year of making is : " << year << endl;
//	}
//};
//class CruiseShip :public Ship
//{
//	int mp;
//public:
//	CruiseShip()
//	{
//		mp = 0;
//	}
//	CruiseShip(int m, char arr[], int y) :Ship(arr, y)
//	{
//		mp = m;
//	}
//	void setmp(int m)
//	{
//		mp = m;
//	}
//	int getmp()
//	{
//		return mp;
//	}
//	void Display()
//	{
//		cout <<"Ship name is "<< Ship::getship();
//		cout << " The Maximum Passengers in the Ship are : " << mp << endl;
//	}
//};
//class CargoShip : public Ship
//{
//	int cap;
//public:
//	CargoShip()
//	{
//		cap = 0;
//	}
//	CargoShip(int c, char arr[], int ye) :Ship(arr, ye)
//	{
//		cap = c;
//	}
//	void setcap(int c)
//	{
//		cap = c;
//	}
//	int getcap()
//	{
//		return cap;
//	}
//	void Display()
//	{
//		cout << "Ship name is " << Ship::getship();
//		cout << " Cargo Capacity of Ships is : " << cap << "  Tons " << endl;
//	}
//};
//int main()
//{
//	int pass, year, cap;
//	char name[20];
//	cout << "Enter the Name of Ship : ";
//	cin.getline(name, 20);
//	cout << "Enter year of build : ";
//	cin >> year;
//	cout << "Enter the Maximum Pssengers : ";
//	cin >> pass;
//	cout << "Enter the Capacity in tons: ";
//	cin >> cap;
//	Ship **ship = new Ship*[3];	
//	ship[0] = new CruiseShip(pass, name, year);
//	ship[1] = new CargoShip(cap, name, year);
//	ship[2] = new Ship(name, year);
//	cout << "Entered Details : " << endl;
//	cout << "Cruise Ship : "<<endl;
//	ship[0]->Display();
//	cout << "Cargo Ship : " << endl;
//	ship[1]->Display();
//	cout << "Ship : "<<endl;
//	ship[2]->Display();
//	system("pause");
//	return 0;
//}