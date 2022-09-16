///*
//Problem 2
//At the start of this task, your class should have the following member functions:
//class MyString
//{
//private:
//char *str; // Pointer to the char array that holds the string
//int length; // Variable to store the length of the string (excluding NULL)
//public:
//// Default constructor to initialize the string to empty string
//MyString();
//// Overloaded constructor
//MyString(const char *);
//
//// Copy constructor
//MyString(const MyString&amp;);
//// Returns the length (# of characters excluding the null terminator) of the string
//int getLength (); // Destructor
//~MyString();
//};
//Now, complete the following tasks in the given order:
//Task 1
//Overload the pre-increment operator ++ to convert the MyString to uppercase i.e. all
//lowercase letters in the given MyString will be converted into uppercase.
//Task 2
//Overload the stream insertion operator &lt;&lt; to display a MyString on screen.
//Task 3
//Overload the stream extraction operator &gt;&gt; to take input of a MyString from the user.
//Task 4
//Overload the assignment operator(=) to copy the values of a MyString object to
//another existing MyString object.
//Task 5
//Overload the subscript operator [] to access or modify the character stored at a particular
//location in the given MyString. Also perform bound checking i.e. if the specified index is
//invalid, display an error message and terminate the program.
//Task 1.6
//Overload the operator == that returns true if the two MyString objects are equal else return
//false.
//
//*/
//
//
//#include<iostream>
//using namespace std;
//
//class MyString
//{
//private:
//	char* str;
//	int length;
//public:
//	MyString()
//	{
//		str = NULL;
//		length = 0;
//	}
//	MyString(const char* arr)
//	{
//		length = 0;
//		for (int i = 0; arr[i] != '\0'; i++)
//		{
//			length++;
//		}
//		str = new char[length + 1];
//		for (int i = 0; i <= length; i++)
//		{
//			*(str + i) = arr[i];
//		}
//	}
//	MyString(const MyString& a)
//	{
//		length = a.length;
//		str = new char[length + 1];
//		for (int i = 0; i <= a.length; i++)
//		{
//			*(str + i) = a.str[i];
//		}
//	}
//	int GetLength()
//	{
//		return length;
//	}
//	~MyString()
//	{
//		delete[]str;
//	}
//	void operator++()//Task 1
//	{
//		for (int i = 0; i <= length; i++)
//		{
//			if (*(str + i) >= 'a' && *(str + i) <= 'z')
//			{
//				*(str + i) -= 32;
//			}
//		}
//	}
//	friend ostream& operator<<(ostream& out, const MyString& a)//task 2
//	{
//		cout << "Array is : ";
//		for (int i = 0; i <= a.length; i++)
//		{
//			out << *(a.str + i);
//		}
//		cout << endl;
//		return out;
//	}
//	friend istream& operator >> (istream& in, MyString& s)//task 3
//	{
//		delete[] s.str;
//		s.str = nullptr;
//		s.length = 0;
//		char* arr = new char[100];
//		for (int i = 0; i < 100; i++)
//		{
//			arr[i] = '\0';
//		}
//		cout << "Enter the string : ";
//		cin.getline(arr, 100);
//		for (int i = 0; i < 100; i++)
//		{
//			if (arr[i] =='\0')
//				arr[i] = '\0';
//			else
//				s.length++;
//		}
//		s.str = new char[s.length + 1];
//		for (int i = 0; i < s.length + 1; i++)
//		{
//			s.str[i] = '\0';
//		}
//		for (int i = 0; i < s.length + 1; i++)
//		{
//			s.str[i] = arr[i];
//		}
//		s.str[s.length] = '\0';
//		delete[] arr;
//		arr = nullptr;
//		return in;
//	}
//	void operator = (const MyString& a)//task 4
//	{
//		length = a.length;
//		delete[]str;
//		str = new char[length + 1];
//		for (int i = 0; i < a.length; i++)
//		{
//			*(str + i) = *(a.str + i);
//		}
//		str[length] = '\0';
//	}
//	char* & operator[](const int a) //task 5
//	{
//		if (a>length) {
//			cout << "Index out of bounds" << endl;
//			// return first element.
//		//	return str[0];
//		}
//		return str;
//	}
//
//	bool operator==(const MyString& a)//task 6
//	{
//		int check = 0;
//		if (length = a.length)//if length of both arrays is given
//		{
//			for (int i = 0; i <= length; i++)
//			{
//				if (*(str + i) == *(a.str + i))
//				{
//					check++;
//				}
//			}
//			if (check == length)
//				return true;
//		}
//		check = 0;
//		for (int i = 0; i <= length; i++)//if length is not given
//		{
//			if (*(str + i) != '\0' && *(a.str + i) != '\0')
//			{
//				if (*(str + i) == *(a.str + i))
//				{
//					check++;
//				}
//			}
//		}
//		if (check == length)
//			return true;
//		return false;
//	}
//};
//int main()
//{
//	MyString a, b;
//	cin >> a;
//	cout << a;
//	b = a;
//	if (a == b)
//	{
//		cout << "Both Strings  are same!!" << endl;
//	}
//	++a;
//	cout << "After Making letters Capital : ";
//	cout << a;
//	cout << "PROGRAM COMPLETED SUCCESSFULLY" << endl;
//	return 0;
//}
