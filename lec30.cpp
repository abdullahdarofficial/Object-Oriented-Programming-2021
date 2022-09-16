////Template classes
////Template Specializations
//
//
//
//#include<iostream>
//using namespace std;
//
//template<class C>
//class Container
//{
//	C v;
//public:
//	Container(C a)
//	{
//		v = a;
//	}
//	int increase();
//	char uppercase();
//};
//
//
//template <class C>
//int Container<C,>::increase()
//{
//	v++;
//	return v;
//}
//template <class B>
//char  Container<B> ::uppercase()
//{
//	v -= 32;
//	return v;
//}
//
//
//
//
//int main()
//{
//	Container<int> myint(7);
//	Container<char> mychar('g');
//	cout << myint.increase() << endl;
//	cout << mychar.uppercase() << endl;
//
//	return 0;
//}
//
////
////#include<iostream>
////using namespace std;
////
////template<class T, int N>
////class Sequence
////{
////private:
////	T arr[N];
////public:
////	void setmember(int, T);
////	T getmember(int);
////};
////
////template<class C, int a>
////void Sequence<C, a>::setmember(int x, C sa)
////{
////	arr[x] = sa;
////}
////
////template<class V, int s>
////V Sequence <V, s>::getmember(int x)
////{
////
////	return arr[x];
////}
////
////int main()
////{
////
////	Sequence <int, 5> myints;
////	Sequence <double, 5> mydoubles;
////	myints.setmember(0, 100);
////	mydoubles.setmember(3, 3.1416);
////	cout << myints.getmember(0) << endl;
////	cout << mydoubles.getmember(3) << endl;
////
////	return 0;
////}