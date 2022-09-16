////Structured Programming vs Object-oriented Programming,
////Principles of modularization, abstraction and encapsulation
//
//#include<iostream>
//using namespace std;
//
//class Time
//{
//private:
//	int hrs;
//	int mins;
//	int secs;
//public:
//	Time()
//	{
//		hrs = 0;
//		mins = 0;
//		secs = 0;
//		cout << "Constructor Called" << endl;
//	}
//	void set_time(int h, int m, int s)
//	{
//		cout << "Set Time Called" << endl;
//		hrs = h;
//		mins = m;
//		secs = s;
//	}
//	void Display()
//	{
//		cout << "Display Called" << endl;
//		cout << "Time = " << hrs << ":" << mins << ":" << secs << endl;
//	}
//	~Time()
//	{
//		cout << "Destructor Called" << endl;
//	}
//};
//int main()
//{
//	Time time;
//	time.set_time(6, 35, 25);
//	time.Display();
//	Time t;
//	t.set_time(01, 05, 02);
//	t.Display();
//	Time abc;
//abc.set_time(99, 202, 2002);
//abc.Display();
//
//	cout << "Hello World " << endl;
//	return 0;
//}