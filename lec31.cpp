//////Exception Handling.
////
////#include<iostream>
////using namespace std;
////int main()
////{
////	int a = 10, b = 100, c = 10, d=0;
////	try
////	{
////		if ((a - c) == 0)
////		{
////			throw d;
////		}
////		else
////		{
////			d = (b / (a - c));
////			cout << d << endl;
////		}
////	}
////	catch (int x)
////	{
////		cout << "INFINITY" << endl;
////	}
////	
////
////	return 0;
//// }
//
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a = 10, b = 100, c = 10, d = 0;
//	try
//	{
//		if ((a - c) == 0)
//		{
//			throw d;
//		}
//		else
//		{
//			d = (b / (a - c));
//			cout << d << endl;
//		}
//	}
//	catch (int e)
//	{
//		cout << e << endl;
//	}
//	catch (...)
//	{
//		cout << "HI" << endl;
//	}
//	return 0;
//}