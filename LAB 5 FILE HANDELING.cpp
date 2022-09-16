//
//#include <iostream>
//#include <fstream>
//using namespace std;
//class Helper
//{
//public:
//	static int StringLength(char* str)
//	{
//		int count = 0;
//		while (*(str + count) != '\0')
//		{
//			count++;
//		}
//		return count;
//	}
//	static void StringCopy(char*& dest, char* src)
//	{
//		static int size = StringLength(src);
//		for (int i = 0; i < size; i++)
//		{
//			dest[i] = src[i];
//		}
//		dest[size] = '\0';
//	}
//	static char* GetStringFromBuffer(char* str)
//	{
//		static int size = StringLength(str);
//		char* dest = new char[size + 1];
//		StringCopy(dest, str);
//		return dest;
//	}
//};
//class Car
//{
//private:
//	static int totalCars;
//	int model;
//	char* make;
//	char* name;
//	char* color;
//public:
//	Car()
//	{
//		model = 0;
//		color = make = name = 0;
//		totalCars++;
//	}
//	static int GetTotalCars()
//	{
//		return totalCars;
//	}
//	void ReadDataFromFile(ifstream &fin)
//	{
//		char temp[20];
//		fin >> model ;
//		fin >> temp;
//		make = Helper::GetStringFromBuffer(temp);
//		fin >> temp;
//		name = Helper::GetStringFromBuffer(temp);
//		fin >> temp;
//		color = Helper::GetStringFromBuffer(temp);
//	}
//	void PrintListView()
//	{
//		cout << model << "  " << make << "  " << name << "  " << color << endl;
//	}
//	void PrintDetailView()
//	{
//		cout << "Car Information is : " << endl;
//		cout << "MODEL : " << model << "." << endl;
//		cout << "MAKE : " << make << "." << endl;
//		cout << "NAME : " << name << "." << endl;
//		cout << "COLOR : " << color << "." << endl;
//	}
//	void Input()
//	{
//		char* array = new char[25];
//		cout << "Enter New Car Information:\n";
//		cout << "Enter Model:\t";
//		cin >> model;
//		cout << "Enter Make :\t";
//		cin.ignore();
//		cin.get(array, 25);
//		make = Helper::GetStringFromBuffer(array);
//		cout << "Enter Name :\t";
//		cin.ignore();
//		cin.get(array, 25);
//		name = Helper::GetStringFromBuffer(array);
//		cout << "Enter Color:\t";
//		cin.ignore();
//		cin.get(array, 25);
//		color = Helper::GetStringFromBuffer(array);
//		delete[] array;
//	}
//	~Car()
//	{
//		cout << "Destroying : ";
//		PrintListView();
//		delete[] make;
//		delete[] name;
//		delete[] color;
//		totalCars = 0;
//	}
//};
//int Car::totalCars = 0;
//Car* ReadDataFromFile()
//{
//	ifstream fin;
//	int totalCars = 0;
//	char buffer[80];
//	int temp;
//	fin.open("CarsData.txt");
//	if (fin.is_open())
//	{
//		fin >> totalCars;
//		fin.getline(buffer, 80, '\n');
//		Car* carsList = new Car[totalCars];
//		int i = 0;
//		while (!fin.eof())
//		{
//			carsList[i].ReadDataFromFile(fin);
//			i++;
//		}
//		return carsList;
//	}
//	else
//	{
//		return 0;
//	}
//}
//void main()
//{
//	Car* carsList = ReadDataFromFile();
//	int count = 0;
//	if (carsList != 0)
//	{
//		count = Car::GetTotalCars();
//		cout << "Total Number of Cars in System : " << count << endl;
//		cout << "\nCars List : " << endl;;
//		for (int i = 0; i < count; i++)
//		{
//			carsList[i].PrintListView();
//		}
//		delete[] carsList;
//	}
//	cout << "Total Number of Cars Registered in System : " << Car::GetTotalCars() << endl << endl << endl;
//	Car testCar;
//	testCar.Input();
//	testCar.PrintDetailView();
//	cout << "Total Number of Cars Registered in System : " << testCar.GetTotalCars() << endl << endl << endl;
//	system("pause");
//}
