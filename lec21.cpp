////Inheritance basics, Type of Inheritance,
////public, protected, private.
//
////
//// class Base {
////  public:
////	  int x;
////  protected:
////	  int y;
////  private:
////	  int z;
////};
////
////class PublicDerived : public Base {
////	// x is public
////	// y is protected
////	// z is not accessible from PublicDerived
////};
////
////class ProtectedDerived : protected Base {
////	// x is protected
////	// y is protected
////	// z is not accessible from ProtectedDerived
////};
////
////class PrivateDerived : private Base {
////	// x is private
////	// y is private
////	// z is not accessible from PrivateDerived
////};
////
//
//#include<iostream>
//using namespace std;
//
//class Base
//{
//private:
//	int x;
//public:
//	Base()
//	{
//		x = 0;
//		cout << "Base def con" << endl;
//	}
//	Base(int val)
//	{
//		x = val;
//		cout << "Base over con" << endl;
//	}
//	void disp()
//	{
//		cout << "base display" << endl;
//	}
//	void BFUN()
//	{
//		cout << "base fun" << endl;
//	}
//	~Base()
//	{
//		cout << "Base destructor" << endl;
//	}
//};
//class Derived : public Base
//{
//private:
//	int y;
//public:
//	Derived()
//	{
//		y = 0;
//		cout << "Derived def con" << endl;
//	}
//	Derived(int val)
//	{
//		 y= val;
//		cout << "Derived over con" << endl;
//	}
//	void disp()
//	{
//		cout << "Derived display" << endl;
//	}
//	void DFUN()
//	{
//		cout << "Derived Fun" << endl;
//	}
//	~Derived()
//	{
//		cout << "Derived destructor" << endl;
//	}
//
//};
//int main()
//{
//	Derived D(8);
//	//Base B;
//	D.BFUN();
//	D.DFUN();
//	D.disp();
//
//
//
//	return 0;
//}
//
///////////////
////public access
//// C++ program to demonstrate the working of public inheritance
//
//#include <iostream>
//using namespace std;
//
//class Base {
//private:
//    int pvt = 1;
//
//protected:
//    int prot = 2;
//
//public:
//    int pub = 3;
//
//    // function to access private member
//    int getPVT() {
//        return pvt;
//    }
//};
//
//class PublicDerived : public Base {
//public:
//    // function to access protected member from Base
//    int getProt() {
//        return prot;
//    }
//};
//
//int main() {
//    PublicDerived object1;
//    cout << "Private = " << object1.getPVT() << endl;
//    cout << "Protected = " << object1.getProt() << endl;
//    cout << "Public = " << object1.pub << endl;
//    return 0;
//}
////////////////
// 
// 
// 
//// 
//// protected mode
//
//// C++ program to demonstrate the working of protected inheritance
//
//#include <iostream>
//using namespace std;
//
//class Base {
//private:
//    int pvt = 1;
//
//protected:
//    int prot = 2;
//
//public:
//    int pub = 3;
//
//    // function to access private member
//    int getPVT() {
//        return pvt;
//    }
//};
//
//class ProtectedDerived : protected Base {
//public:
//    // function to access protected member from Base
//    int getProt() {
//        return prot;
//    }
//
//    // function to access public member from Base
//    int getPub() {
//        return pub;
//    }
//};
//
//int main() {
//    ProtectedDerived object1;
//    cout << "Private cannot be accessed." << endl;
//    cout << "Protected = " << object1.getProt() << endl;
//    cout << "Public = " << object1.getPub() << endl;
//    return 0;
//}
///////////////////////////////
//
//
//// C++ program to demonstrate the working of protected inheritance
//
//#include <iostream>
//using namespace std;
//
//class Base {
//private:
//    int pvt = 1;
//
//protected:
//    int prot = 2;
//
//public:
//    int pub = 3;
//
//    // function to access private member
//    int getPVT() {
//        return pvt;
//    }
//};
//
//class ProtectedDerived : protected Base {
//public:
//    // function to access protected member from Base
//    int getProt() {
//        return prot;
//    }
//
//    // function to access public member from Base
//    int getPub() {
//        return pub;
//    }
//};
//
//int main() {
//    ProtectedDerived object1;
//    cout << "Private cannot be accessed." << endl;
//    cout << "Protected = " << object1.getProt() << endl;
//    cout << "Public = " << object1.getPub() << endl;
//    return 0;
//}

