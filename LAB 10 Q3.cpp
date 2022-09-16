//#include<iostream>
//using namespace std;
//
//template<class C>
//class container
//{private:
//	C v;
//public:
//	container(C a)
//	{
//		v = a;
//	}
//	int increases();
//	char uppercase();
//
//};
//
//template<class C>
//int container<C>::increases()
//{
//	v++;
//	return v;
//}
//
//template<class C>
//char container<C>::uppercase()
//{
//	v -= 32;
//	return v;
//}
//
//int main()
//{
//	container<int>myint(7);
//	container<char>mychar('j');
//	cout << myint.increases() << endl;
//	cout << mychar.uppercase() << endl;
//	return 0;
//
//}