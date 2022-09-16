//#include<iostream>
//using namespace std;
//class MyString//class mystring
//{
//private:
//	char* str;
//	int length;
//public:
//	friend ostream& operator<<(ostream& out, const MyString& a);
//	friend istream& operator >> (istream& in, MyString& s);
//
//	MyString()//default constructor
//	{
//		str = NULL;
//		length = 0;
//	}
//	MyString(const char* arr)//overloaded constructor
//	{
//		length = 0;
//		for (int i = 0; arr[i] != '\0'; i++)
//		{
//			length++;
//		}
//		str = new char[length + 1];
//		for (int i = 0; i <= length; i++)
//		{
//			*(str + i) = arr[i];
//		}
//	}
//
//	MyString(const MyString& a)//overloaded constructor
//	{
//		length = a.length;
//		str = new char[length + 1];
//		for (int i = 0; i <= a.length; i++)
//		{
//			*(str + i) = a.str[i];
//		}
//	}
//	int GetLength()//get length
//	{
//		return length;
//	}
//	~MyString()
//	{
//		delete[]str;
//	}
//
//	void operator = (const MyString& a)// equal operator
//	{
//		length = a.length;
//		delete[]str;
//		str = new char[length + 1];
//		for (int i = 0; i < a.length; i++)
//		{
//			*(str + i) = *(a.str + i);
//		}
//		str[length] = '\0';
//	}
//};
//
//ostream& operator<<(ostream& out, const MyString& a)//output
//{
//	for (int i = 0; i <= a.length; i++)
//	{
//		out << *(a.str + i);
//	}
//	return out;
//}
//istream& operator >> (istream& in,MyString& s)//input
//{
//	delete[] s.str;
//	s.str = nullptr;
//	s.length = 0;
//	char* arr = new char[100];
//	for (int i = 0; i < 100; i++)
//	{
//		arr[i] = '\0';
//	}
//	cout << "Enter the string : ";
//	cin.getline(arr, 100);
//	for (int i = 0; i < 100; i++)
//	{
//		if (arr[i] == '\0')
//			arr[i] = '\0';
//		else
//			s.length++;
//	}
//	s.str = new char[s.length + 1];
//	for (int i = 0; i < s.length + 1; i++)
//	{
//		s.str[i] = '\0';
//	}
//	for (int i = 0; i < s.length + 1; i++)
//	{
//		s.str[i] = arr[i];
//	}
//	s.str[s.length] = '\0';
//	delete[] arr;
//	arr = nullptr;
//	return in;
//}
//
//class Gun//class Gun
//{
//private:
//	int ID;
//	MyString title;
//	int bulletcapacity;
//	int noofbullets;
//	float firespeed;
//	int damageperbullet;
//public:
//	Gun()//default constructor
//	{
//		ID = 0;
//		bulletcapacity = 0;
//		noofbullets = 0;
//		firespeed = 0.0;
//		damageperbullet = 0;
//	}
//	Gun(int id, MyString str, int bulletcap, int nobull, float firesp, int damage)//overloaded constructor
//	{
//		ID = id;
//		title = str;
//		bulletcapacity = bulletcap;
//		noofbullets = nobull;
//		firespeed = firesp;
//		damageperbullet = damage;
//	}
//	void Displayinfo()//display data
//	{
//		cout << "----------------------------Weapon Details----------------------------------" << endl;
//		cout << "ID of Gun is : " << ID << endl;
//		cout << "Title of Gun is : " << title << endl;
//		cout << "Bulllet Capacity of Gun is : " << bulletcapacity << endl;
//		cout << "Bullets in Gun is : " << noofbullets << endl;
//		cout << "Firing Speed of Bullet is : " << firespeed << endl;
//		cout << "Damage per Bullet is : " << damageperbullet << endl;
//	}
//	void reload()//reload
//	{
//		noofbullets = noofbullets - bulletcapacity;
//		cout << "Gun Loaded SuccessFully" << endl;
//	}
//	void fire()//fire bullet
//	{
//		noofbullets--;
//		cout << "Fired!!" << endl;
//	}
//	int getdamage()//get damage
//	{
//		return damageperbullet;
//	}
//};
//
//class Inventory//inventory class
//{
//private:
//	Gun* gun;
//	bool* gunStatus;
//	int guncount;
//public:
//	Inventory()//default constructor
//	{
//		gun = new Gun[10];
//		gunStatus = new bool[10];
//		for (int i = 0; i < 10; i++)
//		{
//			gunStatus[i] = true;
//		}
//		guncount = 0;
//	}
//	Inventory(Gun Gg[])//overloaded constructor
//	{
//		gun = new Gun[10];
//		for (int i = 0; i < 10; i++)
//		{
//			gun[i] = Gg[i];
//		}
//		gunStatus = new bool[10];
//		for (int i = 0; i < 10; i++)
//		{
//			gunStatus[i] = true;
//		}
//		guncount = 0;
//	}
//	void Display_all_data()//display data
//	{
//		for (int i = 0; i < 10; i++)
//		{
//			gun[i].Displayinfo();
//		}
//	}
//};
//class Player//class player
//{
//private:
//	MyString Username;
//	Gun* G;
//	int health;
//	int activegun;
//	Gun* index;
//public:
//	Player()//default constructor
//	{
//		index = NULL;
//		G = NULL;
//		health = 100;
//		activegun = 0;
//	}
//	Player(MyString arr)//overloaded constructor
//	{
//		index = new Gun[3];
//		G = NULL;
//		Username = arr;
//		health = 100;
//		activegun = 0;
//	}
//	Player(Gun g[])//overloaded constructor
//	{
//		index = new Gun[3];
//		G = new Gun[10];
//		for (int i = 0; i < 10; i++)
//		{
//			G[i] = g[i];
//		}
//	}
//	void Display_all_data()//display data
//	{
//		for (int i = 0; i < 10; i++)
//		{
//			G[i].Displayinfo();
//		}
//	}
//	void Allocategun(Gun a, Gun b, Gun c)//allocate weapons
//	{
//		cout << "Weapons Allocated " << endl;
//		index[0] = a;
//		index[1] = b;
//		index[2] = c;
//	}
//	void fire_Target()//random shots
//	{
//		cout << "-------------------------------------------" << endl;
//		cout << "Target locked" << endl;
//		index[activegun].fire();
//		cout << "Fire Missed!!" << endl;
//		cout << "ENEMY Health not Affected !!" << endl;
//		cout << "-------------------------------------------" << endl;
//	}
//	void fire_Target(Player& p)//hitt shot
//	{
//		cout << "-------------------------------------------" << endl;
//		cout << "Target Locked" << endl;
//		index[activegun].fire();
//		cout << "Hitted SuccessFully !!" << endl;
//		receivedamage(p);
//		cout << "-------------------------------------------" << endl;
//	}
//	void receivedamage(Player& p)//damage done
//	{
//		p.health = (p.health - index[activegun].getdamage());
//		if (p.health < 0)
//		{
//			p.health = 0;
//		}
//		cout << "Remaining Health of Enemy : " << p.health << endl;
//	}
//	void displayagun()//display allocated weapons
//	{
//		index[0].Displayinfo();
//		index[1].Displayinfo();
//		index[2].Displayinfo();
//	}
//	void Display()//display name
//	{
//		cout << "Player : " << Username << " and Health is " << health << endl;
//	}
//	void changeactivegun()//changing active guns
//	{
//		cout << "-------------------------------------------" << endl;
//		int n = 0;
//		cout << "Enter gun no 1 ,2 ,3 : " << endl;
//		cin >> n;
//		while (n < 1 || n>3)
//		{
//			cout << "Invalid inputs\nenter again : ";
//			cin >> n;
//		}
//		activegun = n - 1;
//		cout << "-------------------------------------------" << endl;
//	}
//	void exchangegun(Gun g)//exchange guns
//	{
//		index[0] = g;
//		cout << "Weapon Changed SuccessFully !!" << endl;
//	}
//};
//int main()
//{
//	////////////////////TASK NO 1.1////////////////////////////
//	int n;
//	char c;
//	cout << "Press Any Key to Open Inventory : ";
//	cin >> c;
//	cout << endl<< "\t\t\t       INVENTORY" << endl << endl;
//	Gun g1(1, "AK-47", 20, 100, 120, 25), g2(2, "MR-ATK", 30, 150, 234, 30), g3(3, "MMG-829", 20, 156, 150, 25);
//	Gun g4(4, "RGN_90", 14, 103, 127, 12), g5(5, "AM-BJE", 45, 204, 187, 25), g6(6, "MGS-99", 65, 305, 209, 34);
//	Gun g7(7, "NXW-83", 8, 100, 280, 39), g8(8, "IIP_203", 25, 135, 231, 30), g9(9, "CGQ-LO89", 23, 180, 65, 33);
//	Gun g10(10, "MERS02", 17, 90, 243, 55);
//	Gun G[10] = { g1,g2,g3,g4,g5,g6,g7,g8,g9,g10 };
//	Inventory i1(G);
//	i1.Display_all_data();
//	cout << "----------------------------INVENTORY COMPLETED-----------------------------" << endl;
//	cout << "Do you want to Start the Game\nClose Inventory\nPress Any key to continue : ";
//	cin >> c;
//	system("cls");
//	////////////////////TASK NO 1.2////////////////////////////
//	Player p(G);
//	cout << "Player 1 Information" << endl;
//	Player p1("1 : Mike"), p2("2 : John");
//	p1.Display();
//	cout << "Press Any Key to Allocate Weapons : ";
//	cin >> c;
//	p1.Allocategun(g1, g3, g5);
//	p1.displayagun();
//	cout << "=============================================================================" << endl;
//	cout << "Player 2 Information" << endl;
//	p2.Display();
//	cout << "Press Any Key to Allocate Weapons : ";
//	cin >> c;
//	p2.Allocategun(g2, g4, g6);
//	p2.displayagun();
//	cout << endl << "Weapons Allocated"<<endl;
//	cout << "=============================================================================" << endl;
//	cout << "Ready for Combat\nEnter to Combat Mode(close window) " << endl << endl;
//	cout << "Press Any Key to continue : ";
//	cin >> c;
//	system("cls");
//	////////////////////TASK NO 1.3////////////////////////////
//	cout << "COMBAT STARTED" << endl;
//	cout << "Player no 1 (Press any key to fire !!) : ";
//	cin >> c;
//	p1.fire_Target(p2);
//	cout << "Player no 2 (Press any key to fire !!) : ";
//	cin >> c;
//	p2.fire_Target();
//	cout << "Player 1 Weapon Change Required (immediately) !! : "<<endl;
//	p1.changeactivegun();
//	cout << "Player 2 Weapon Change Required (immediately)!! : " << endl;
//	p2.changeactivegun();
//	cout << "Player no 1 (Press any key to fire !!) : ";
//	cin >> c;
//	p1.fire_Target(p2);
//	cout << "Player no 2 (Press any key to fire !!) : ";
//	cin >> c;
//	p2.fire_Target(p1);
//	cout << "Player 2 Weapon Change Required (immediately)!! : " << endl;
//	p2.changeactivegun();
//	cout << "Player 1 do you want to exchange gun\nPress 1 for yes else any other key to continue : ";
//	cin >> n;
//	if (n == 1)
//	{
//		p1.exchangegun(g9);
//	}
//	else
//		cout << "Weapon is same" << endl;
//	cout << "Player no 2 (Press any key to fire !!) : ";
//	cin >> c;
//	p2.fire_Target(p1);
//	cout << "Player 2 Weapon Change Required (immediately)!! : " << endl;
//	p2.changeactivegun();
//	cout << "Player no 1 (Press any key to fire !!) : ";
//	cin >> c;
//	p1.fire_Target(p2);
//	cout << "Player 1 Weapon Change Required (immediately)!! : " << endl;
//	p1.changeactivegun();
//	cout << "Player no 1 (Press any key to fire !!) : ";
//	cin >> c;
//	p1.fire_Target(p2);
//	////////////////////TASK NO 1.4////////////////////////////
//	cout << "------------------G-A-M-E  O-V-E-R-------------------\n\nPlayer 2 Shot Dead\n\n";
//	cout << "Program Completed SuccessFully" << endl;
//	return 0;
//}