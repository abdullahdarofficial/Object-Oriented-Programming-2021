////Relational operators
////==, >= , <=
//
//#include<iostream>
//using namespace std;
//
//class Point
//{
//private:
//	int x;
//	int y;
//public:
//	Point()
//	{
//		x = 0;
//		y = 0;
//	}
//	void Setval(int a, int b)
//	{
//		x = a;
//		y = b;
//	}
//    bool operator==(const Point& obj)
//	{
//		if (x == obj.x && y == obj.y)
//		{
//			return true;
//		}
//		return false;
//
//	}
//	bool operator >=(const Point& obj)
//	{
//		if (x >= obj.x && y >= obj.y)
//		{
//			return true;
//		}
//		return false;
//	}
//	bool operator <=(const Point& obj)
//	{
//		if (x <= obj.x && y <= obj.y)
//		{
//			return true;
//		}
//		return false;
//	}
//	void Disp()
//	{
//		cout << "X : " << x << endl;
//		cout << "Y : " << y << endl;
//	}
//};
//int main()
//{
//	Point obj1, obj2;
//	obj1.Setval(10, 20);
//	obj1.Disp();
//	obj2.Setval(10, 20);
//	obj2.Disp();
//
//	if (obj1 == obj2)
//		cout << "Both have same values." << endl;
//	else
//		cout << "Both are different" << endl;
//
//	Point obj3, obj4;
//	obj3.Setval(15, 25);
//	obj3.Disp();
//	obj4.Setval(10, 20);
//	obj4.Disp();
//
//	if (obj3 >= obj4)
//		cout << "First is greater or equal ." << endl;
//	else
//		cout << "First is smaller" << endl;
//
//	Point obj5, obj6;
//	obj5.Setval(44, 84);
//	obj5.Disp();
//	obj6.Setval(54, 94);
//	obj6.Disp();
//
//	if (obj5 <= obj6)
//		cout << "first is smaller or equal." << endl;
//	else
//		cout << "first is greater" << endl;
//
//
//	return 0;
//}