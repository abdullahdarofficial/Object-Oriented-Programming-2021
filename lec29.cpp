////Template functions
//
//#include<iostream>
//using namespace std;
//
//template <class A>
//A GetMax(A x, A y)
//{
//	if (x > y)
//	{
//		return x;
//	}
//	else
//	
//		return y;
//}
//template <class B>
//B GetMin(B x, B y)
//{
//	if (x < y)
//	{
//		return x;
//	}
//	else
//		return y;
//}
//int main()
//{
//	int i = 3, j = 6, k;
//	char l = 'A', m = 'W', f;
//	k = GetMax(i, j);
//	f = GetMin(l, m);
//	cout << "max " << k << endl;
//	cout << "min " << f << endl;
//		return 0;
//}
//
//
//#include<iostream>
//using namespace std;
//
//template<class X>
//class Pair
//{
//	X a[2];
//public:
//	Pair(X aa, X b)
//	{
//		a[0] = aa;
//		a[1] = b;
//	}
//	X getMax()
//	{
//		if (a[0] > a[1])
//		{
//			return a[0];
//		}
//		else
//			return a[1];
//	}
//	X getMin()
//	{
//		if (a[0] < a[1])
//		{
//			return a[0];
//		}
//		else
//			return a[1];
//	}
//
//};
//
//
//int main()
//{
//	Pair<double> myobject(1.02, 1.2);
//	cout << myobject.getMax() << endl;
//	cout << myobject.getMin() << endl;
//
//
//	return 0;
//
//}
