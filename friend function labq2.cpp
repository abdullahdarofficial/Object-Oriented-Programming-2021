////friend ship operator
//
//#include<iostream>
//using namespace std;
//
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
//		m = 0;
//		cm = 0;
//	}
//	DM(int mm, int cmm)
//	{
//		m = mm;
//		cm = cmm;
//	}
//	friend DM ADD(DM a1, DB a2);
//	int get_meter()
//	{
//		return m;
//	}
//	int get_cm()
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
//		ft = 0;
//		inch = 0;
//	}
//	DB(int ftt, int inc)
//	{
//		ft = ftt;
//		inch = inc;
//	}
//	friend DM ADD(DM a1, DB a2);
//	int get_feet()
//	{
//		return ft;
//	}
//	int get_inch()
//	{
//		return inch;
//	}
//};
////friend return_type function_name(arguments);
//DM ADD(DM a1, DB a2)
//{
//	float result = 0.0;
//	DM a;
//	result = ((a1.m * 100 + a1.cm) + (((a2.ft * 12 )+ a2.inch) * 2.54));
//	cout << result;
//	a.m = (result / 100);
//	a.cm = (int)result % 100;
//	return a;
//}
//int main()
//{
//	int m, cm, ft, inc;
//	cout << "Enter Distance no 1" << endl;
//	cout << "Enter meters : ";
//	cin >> m;
//	cout << "Enter centimeters : ";
//	cin >> cm;
//	cout << "Enter Distance no 2" << endl;
//	cout << "Enter feet : ";
//	cin >> ft;
//	cout << "Enter inches : ";
//	cin >> inc;
//	DM a(m, cm);
//	DB b(ft, inc);
//	DM c;
//	c = ADD(a, b);
//	m = c.get_meter();
//	cm = c.get_cm();
//	cout << "Total Distance is : " << m << " meters and " << cm << " centimeters .";
//	return 0;
//}