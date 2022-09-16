//
//#include<iostream>
//using namespace std;
//
//class Book;//prototypes
//class Tape;
//class Sales;
//class Publications;
//
//class Publications
//{
//private://data members
//	char* title;
//	float price;
//public:
//	Publications()//default constructor
//	{
//		title = NULL;
//		price = 0.0;
//	}
//	Publications(char titlee[])//overloaded constructor
//	{
//		int count = 0;
//		while (titlee[count] != '\0')
//		{
//			count++;
//		}
//		title = new char[count+1];
//		for (int i = 0; i < count; i++)
//		{
//			*(title + i) = titlee[i];
//		}
//		title[count] = '\0';
//		price = 0.0;
//	}
//	Publications(char titlee[], float pricee)//overloaded constructor
//	{
//		int count = 0;
//		while (titlee[count] != '\0')
//		{
//			count++;
//		}
//		title = new char[count+1];
//		for (int i = 0; i < count; i++)
//		{
//			*(title + i) = titlee[i];
//		}
//		price = pricee;
//		title[count] = '\0';
//	}
//	void get_data()//taking data from user
//	{
//		char* temp;
//		int count = 0;
//		temp = new char[100];
//		cout << "Enter title : ";
//		cin.getline(temp, 100);
//		while (temp[count] != '\0')
//		{
//			count++;
//		}
//		title = new char[count + 1];
//		for (int i = 0; i < count; i++)
//		{
//			*(title + i) = temp[i];
//		}
//		*(title + count) = '\0';
//		delete[]temp;
//		cout << "Enter the price : $";
//		cin >> price;
//		while (price <= 0.0)
//		{
//			cout << "Invalid input (Price should be Greater than 0.00) \nEnter Again : ";
//			cin >> price;
//		}
//	}
//	void put_data()//printing data
//	{
//		cout << "The title is : ";
//		for (int i = 0; *(title + i) != '\0'; i++)
//		{
//			cout << *(title + i);
//		}
//		cout << endl;
//		cout << "The price is : $" << price << endl;
//	}
//	~Publications()//destructor
//	{
//		delete[]title;
//	}
//};
//class Sales
//{
//private://data members
//	float* sale;
//public:
//	Sales()//default constructor
//	{
//		sale = new float[3];
//	}
//	Sales(float sal[])//overloaded constructor
//	{
//		sale = new float[3];
//		for (int i = 0; i < 3; i++)
//		{
//			sale[i] = sal[i];
//		}
//	}
//	void get_data()//taking data from user
//	{
//		cout << "Enter the Sales of last three months in DOLLARS $ " << endl;
//		cout << "Enter Last month sale : ";
//		cin >> sale[0];
//		while (sale[0] < 0.0)
//		{
//			cout << "Invalid input (Sales should be non negative) \nEnter Again : ";
//			cin >> sale[0];
//		}
//		cout << "Enter Second Last month sale : ";
//		cin >> sale[1];
//		while (sale[1] < 0.0)
//		{
//			cout << "Invalid input (Sales should be non negative) \nEnter Again : ";
//			cin >> sale[1];
//		}
//		cout << "Enter Third Last month sale : ";
//		cin >> sale[2];
//		while (sale[2] < 0.0)
//		{
//			cout << "Invalid input (Sales should be non negative) \nEnter Again : ";
//			cin >> sale[2];
//		}
//		cout << endl;
//	}
//	void Put_data()//printing data
//	{
//		cout << "Sales of last three months are as follows : " << endl;
//		cout << "Last month sale : $" << sale[0] << endl;
//		cout << "Second Last month sale : $" << sale[1] << endl;
//		cout << "Third Last month sale : $" << sale[2] << endl;
//	}
//	~Sales()//destructor
//	{
//		delete[]sale;
//	}
//};
//class Book :public Publications, public Sales
//{
//private://data memebrs
//	int page_count;
//public:
//	Book()//default constructor
//	{
//		page_count = 0;
//	}
//	Book(int page)//overloaded constructor
//	{
//		page_count = page;
//	}
//	void get_data()//taking data from user
//	{
//		cout << "Enter the data of Book" << endl;
//		Publications::get_data();
//		cout << "Enter page count : ";
//		cin >> page_count;
//		while (page_count <= 0)
//		{
//			cout << "invalid inputs (Page Count should be greater than 0 ) \nEnter Again : ";
//			cin >> page_count;
//		}
//		Sales::get_data();
//	}
//	void put_data()//printing data
//	{
//		cout << "The data of book is as follows" << endl;
//		Publications::put_data();
//		cout << "Total pages in Book are : " << page_count << endl;
//		Sales::Put_data();
//	}
//};
//class Tape : public Publications, public  Sales
//{
//private://data members
//	float playing_time;
//public:
//	Tape()//default constructor
//	{
//		playing_time = 0;
//	}
//	Tape(float play)//overloaded constructor
//	{
//		playing_time = play;
//	}
//	void get_data()//taking data from user
//	{
//		cout << "Enter the data of Tape " << endl;
//		Publications::get_data();
//		cout << "Enter the playing time in minutes : ";
//		cin >> playing_time;
//		while (playing_time <= 0.0 || playing_time >= 60.0)
//		{
//			cout << "Invalid inputs (Playing Time should be greater than 0.00 and less than 60.00)\Enter Again : ";
//			cin >> playing_time;
//		}
//		Sales::get_data();
//	}
//	void put_data()//printing data
//	{
//		cout << "The data of Tape is as follows" << endl;
//		Publications::put_data();
//		cout << "The Playing time of Tape is : " << playing_time << " minutes "<<endl;
//		Sales::Put_data();
//	}
//};
//class Disk:public Publications
//{
//private://data members
//	char disk_type;
//public:
//	Disk()//default constructor
//	{
//		disk_type = NULL;
//	}
//	Disk(char type)//overloaded constructor
//	{
//		disk_type=type;
//	}
//	void get_data()//getting data from user
//	{
//		cout << "Enter the Data of Disk ";
//		Publications::get_data();
//		cout << "Enter the type in which Disk is avaliable\nEnter c for CD and d for DVD : ";
//		cin >> disk_type;
//		while ((disk_type != 'c' && disk_type != 'C') && (disk_type != 'd' && disk_type != 'D'))
//		{
//			cout << "Invalid Input\nEnter c for CD or D for DVD : ";
//			cin >> disk_type;
//		}
//		cout << endl;
//	}
//	void put_data()//printing data
//	{
//		cout << "The data of Disk is as follows : " << endl;
//		Publications::put_data();
//		cout << "Disk is Avalaible in : ";
//		if (disk_type == 'c' || disk_type == 'C')
//		{
//			cout << "CD " << endl;
//		}
//		else if (disk_type == 'd' || disk_type == 'D')
//		{
//			cout << "DVD " << endl;
//		}
//	}
//};
//int main()
//{
//	char a;
//	cout << "------------------BOOK SECTION-------------------" << endl;
//	Book b1;//book obj
//	b1.get_data();//get data 
//	cin.ignore();
//	cout << "\n------------------TAPE SECTION-------------------" << endl;
//	Tape t1;//tape obj
//	t1.get_data();//get data
//	cin.ignore();
//	cout << "\n------------------DISK SECTION-------------------" << endl;
//	Disk d1;//disk obj
//	d1.get_data();//get data
//	cout << "All Information Stored SuccessFully \nPress Any Key to Display Saved Data of BOOK SECTION : ";
//	cin >> a;
//	cout << "\n------------------BOOK SECTION-------------------\n" << endl;
//	b1.put_data();//print book data
//	cout << "-------------------------------------------------" << endl;
//	cout << "\nPress Any Key to Display Saved Data of TAPE SECTION : ";
//	cin >> a;
//	cout << "\n------------------TAPE SECTION-------------------\n" << endl;
//	t1.put_data();//print tape data
//	cout << "-------------------------------------------------" << endl;
//	cout << "\nPress Any Key to Display Saved Data of DISK SECTION : ";
//	cin >> a;
//	cout << "\n------------------DISK SECTION-------------------\n" << endl;
//	d1.put_data();//print disk data
//	cout << "-------------------------------------------------" << endl;
//	cout << "Program Completed SuccessFully" << endl;
//	return 0;
//}