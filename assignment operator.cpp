////Assignment operator
//// =,+=,-=,*=,/=
//
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
//	
//	void operator=(const Point& obj)
//	{
//		x = obj.x;
//		y = obj.y;
//	}
//	void operator+=(const Point& obj)
//	{
//		x += obj.x;
//		y += obj.y;
//	}
//	void operator-=(const Point& obj)
//	{
//		x -= obj.x;
//		y -= obj.y;
//	}
//	void operator*=(const Point& obj)
//	{
//		x *= obj.x;
//		y *= obj.y;
//	}
//	void operator/=(const Point& obj)
//	{
//		x /= obj.x;
//		y /= obj.y;
//	}
//
//	
//	void Disp()
//	{
//		cout << "X : " << x << endl;
//		cout << "Y : " << y << endl;
//	}
//};
//int main()
//{
//	Point obj1, obj2, obj3, obj4, obj5, obj6, obj7, obj8, obj9, obj10, obj11, obj12;
//	obj1.Setval(10, 20);
//	obj1.Disp();
//	obj2.Setval(30, 40);
//	obj2.Disp();
//	cout << "  =  " << endl;
//	obj3 = obj1;
//	obj3.Disp();
//	obj4 = obj2;
//	obj4.Disp();
//	cout << "  +=  " << endl;
//	obj5 += obj3;
//	obj5.Disp();
//	cout << "  -=  " << endl;
//	obj6 -= obj4;
//	obj6.Disp();
//	obj7.Setval(2, 2);
//	obj7.Disp();
//	obj8.Setval(500, 500);
//	obj8.Disp();
//	cout << "  *=  " << endl;
//	obj7 *= obj5;
//	obj7.Disp();
//	cout << "  /=  " << endl;
//	obj8 /= obj6;
//	obj8.Disp();
//	return 0;
//}
