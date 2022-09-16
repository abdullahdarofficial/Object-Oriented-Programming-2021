///*
//Problem 1
//Create two classes DM and DB that store the value of distances. DM stores distance in
//Meters and centimeters and DB in feet and inches.
//Â 
// 1 foot= 12 inches
// 1 inch=2.54 cm
// For example
// Distance1= 4 m 15 cm
// Distance2= 5 ft 10 inch
// Result_cm= (4*100+15)+ ((5*12)+10)*2.54
// M= Result_cm /100
// Cm= Result_cm %100
// Write a program that can read values for the class objects and add one object of DM with
// another object of DB. Use a friendÂ function to carry out the addition operation.
// The object that stores the results would be a DM object
// ï‚· Create parameterized constructors of DM and DB such that DM(int m, int cm) and
// DB(int ft, int inches)
// ï‚· Create a friend function friend DB add(DB, DM) which returns an object of DB after
// performing the addition on DB and DM objects.
//*/
//#include<iostream>
//using namespace std;
//class DB;
//class DM;
//
//class DM
//{
//private:
//	int m;
//	int cm;
//public:
//	DM()
//	{
//		m = cm = 0;
//	}
//	DM(int mm, int cmm)
//	{
//		m = mm;
//		cm = cmm;
//	}
//	friend DM ADD(DM a1, DB a2);
//	int GET_METER()
//	{
//		return m;
//	}
//	int GET_CM()
//	{
//		return cm;
//	}
//};
//class DB
//{
//private:
//	int ft;
//	int inch;
//public:
//	DB()
//	{
//		ft = inch = 0;
//	}
//	DB(int ftt, int inchh)
//	{
//		ft = ftt;
//		inch = inchh;
//	}
//	friend DM ADD(DM a1, DB a2);
//	int GET_feet()
//	{
//		return ft;
//	}
//	int GET_inch()
//	{
//		return inch;
//	}
//};
//DM ADD(DM a1, DB a2)
//{
//	float Result_cm = 0.0;
//	DM a;
//	Result_cm = ((a1.m * 100 + a1.cm) + ((a2.ft * 12 + a2.inch) * 2.54));
//	cout << Result_cm;
//	a.m = (Result_cm / 100);
//	a.cm = (int)Result_cm % 100;
//	return a;
//}
//int main()
//{
//	int m, cm, ft, inc;
//	cout << "Enter DISTANCE 1 : " << endl;
//	cout << "Enter meters : ";
//	cin >> m;
//	cout << "Enter centimeters : ";
//	cin >> cm;
//	cout << "Enter DISTANCE 2 : " << endl;
//	cout << "Enter Feet : ";
//	cin >> ft;
//	cout << "Enter inches : ";
//	cin >> inc;
//	DM a(m, cm);
//	DB b(ft, inc);
//	DM c;
//	c = ADD(a, b);
//	m = c.GET_METER();
//	cm = c.GET_CM();
//	cout << "TOTAL DISTANCE " << endl;
//	cout << "METERS : " << m << "  CENTIMETERS : " << cm << endl;
//	system("pause");
//	return 0;
//}
