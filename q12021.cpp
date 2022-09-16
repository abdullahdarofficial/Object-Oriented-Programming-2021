//#include<iostream>
//using namespace std;
//
//class Item
//{
//private:
//	char* name;
//	float originalprice;
//public:
//	Item()
//	{
//		name = NULL;
//		originalprice = 0.0;
//	}
//	Item(const char arr[], float price)
//	{
//		int size=0;
//		for (int i = 0; arr[i] != '\0'; i++)
//		{
//			size++;
//		}
//		name = new char[size+1];
//		for (int i = 0; i < size; i++)
//		{
//			name[i] = arr[i];
//		}
//		name[size] = '\0';
//		originalprice = price;
//	}
//	virtual void print()
//	{
//		cout << "Name is ";
//		for (int i = 0; name[i] != '\0'; i++)
//		{
//			cout << name[i];
//		}
//		cout << "\nOriginal Price si : " << originalprice << endl;
//	}
//
//};
//
//class Perishable:public Item
//{
//private:
//	int day;
//	int month;
//	int year;
//	int quantity;
//public:
//	Perishable()
//	{
//		day = month = year = 0;
//		quantity = 0;
//	}
//	Perishable(int d,int m,int y, int quan)
//	{
//		day = d;
//		month = m;
//		year = y;
//		quantity = quan;
//	}
//	Perishable(const char arr[],int price,int d, int m, int y, int quan):Item(arr,price)
//	{
//		day = d;
//		month = m;
//		year = y;
//		quantity = quan;
//	}
//	void print()
//	{
//		Item::print();
//		cout << "Quantity is : " << quantity << endl;
//		cout << "Expiry date is " << day << "/" << month << "/" << year << endl;
//	}
//
//};
//
//
//class Permanent:public Item
//{
//private:
//	int day;
//	int month;
//	int year;
//public:
//	Permanent()
//	{
//		day = month = year = 0;
//	}
//	Permanent(int da,int mon,int ye)
//	{
//		day = da;
//		month = mon;
//		year = ye;
//	}
//	Permanent(const char arr[],int price,int da, int mon, int ye):Item(arr,price)
//	{
//		day = da;
//		month = mon;
//		year = ye;
//	}
//
//	void print()
//	{
//		Item::print();
//		cout << "Entry Date is " << day << "/" << month << "/" << year << endl;
//		cout << "Passed days --/--/--" << endl;
//		cout << "Current date  25/06/2022" << endl;
//	}
//};
//
//
//class Bulk_Item:public  Permanent
//{
//private:
//	char* description;
//	bool Avaliability;
//public:
//	Bulk_Item()
//	{
//		description = NULL;
//		Avaliability = false;
//	}
//	Bulk_Item(char arr[], bool ava)
//	{
//		Avaliability = ava;
//		int size = 0;
//		for (int i = 0; arr[i] != '\0'; i++)
//		{
//			size++;
//		}
//		description = new char[size + 1];
//		for (int i = 0; i < size; i++)
//		{
//			description[i] = arr[i];
//		}
//		description[size] = '\0';
//	}
//	Bulk_Item(const char arr1[],int price,int d,int m,int y,const char arr[], bool ava):Permanent(arr1,price,d,m,y)
//	{
//		Avaliability = ava;
//		int size = 0;
//		for (int i = 0; arr[i] != '\0'; i++)
//		{
//			size++;
//		}
//		description = new char[size + 1];
//		for (int i = 0; i < size; i++)
//		{
//			description[i] = arr[i];
//		}
//		description[size] = '\0';
//	}
//	void print()
//	{
//		cout << "Passed Days --/--/--" << endl;
//		cout << "Current price --.--" << endl;
//		cout << "Description is : ";
//		for (int i = 0; description[i] != '\0'; i++)
//		{
//			cout << description[i];
//		}
//		if (Avaliability == true)
//		{
//			cout << "\nYes Avalaible Part of set" << endl;
//		}
//		else
//			cout << "\nNot Avalaible Not Part of set" << endl;
//	}
//};
//
//class Pharmacy
//{
//private:
//	int itemcount;
//	Item** item;
//public:
//	Pharmacy()
//	{
//		itemcount = 0;
//	}
//	Pharmacy(int ite)
//	{
//		itemcount = ite;
//		item = new Item*[itemcount];
//		itemcount = 0;
//	}
//	void AddItem(Item *i)
//	{
//		item[itemcount] = i;
//		itemcount++;
//	}
//	void DisplayItems()
//	{
//		//cout << itemcount << endl;
//		//system("pause");
//		for (int i = 0; i < itemcount; i++)
//		{
//			item[i]->print();
//		}
//	}
//};
//
//int main()
//{
//	int itemCount = 4;
//	Pharmacy ph(itemCount); //ph has a list of 4 items here
//	Item* iptr = new Permanent("glucometer", 5000, 15, 11, 2020);
//	//// a glucometer of price 5000 and entry date 15 Nov 2020
//	iptr->print();//Print all information i.e. name, actual price, 
//	//	entry date, Passed days, current price.
//		ph.AddItem(iptr);
//	iptr = new Perishable("Panadol", 20, 16, 01, 2021, 500);
//	//// 500mg Panadol tablet of price 20, expiry date 16 Jan 2021
//	iptr->print();//Prints name, current price(depends on expiry 
//	////date), quantity and expiry date. 
//		ph.AddItem(iptr);
//	iptr = new Bulk_Item("Gloves", 500, 12, 10, 2020, "Glove box for doctors",	true);
//	// glovesbox of cost 500 Rs. With entry date 12 
//	//	//Oct 2020
//	iptr->print(); //prints name, actual price, entry date, Passed 
//	//	days, current price, descriptionand if it is part of set or not.
//		ph.AddItem(iptr);
//	iptr = new Bulk_Item("5CC Syringe", 90, 15, 5, 2020, "For Injections only", false);
//	//// Syring of cost 90 Rs. each with entry date 15 May 2020
//	ph.AddItem(iptr);
//	ph.DisplayItems();
//	//// this function should print complete information of items in 
//	//list
//		return 0;
//}
