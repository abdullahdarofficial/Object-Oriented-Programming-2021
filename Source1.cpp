//#include<iostream>
//using namespace std;
//class MyString
//{
//	//You can add your code here
//private:
//	char* str;
//	int lenght; //including the null char here
//	//Add GetStringFromBuffer as private member (helper)
//	//Add Concatenate as private member (helper)
//	//You can add your class members here
//public:
//	//-------------DO_NOT_CHANGE REGION starts below---------------------
//	//Do not change the prototypes given below
//	MyString operator+(const MyString); //concatenate str
//
//	MyString& operator=(const MyString&); //Deep copy
//
//	MyString& operator++(); //Append a character ‘a’ at the end of str and increment length by 1.
//
//	MyString& operator--(); //remove last character of str and decrement length by 1.
//
//	MyString operator-(const MyString&); //if (a – b) and length of a is greater than b then remove the string in a that is substring of b and also subtract length of a	from b. let a.str = “hello” and b.str = “el” than (a-b).str = hlo, (b-a) would result	in no change as b is smaller in length than a.
//
//	bool operator<(MyString); //Comparison on the basis of ascii values
//	//-------------End of DO_NOT_CHANGE REGION---------------------
//	//Add your class members here
//	bool operator!();
//
//	MyString operator()(int index, int total);
//
//	char& operator[](int subscript);
//
//	MyString();
//
//	friend istream& operator>>(istream& input, MyString& a);
//	friend ostream& operator<<(ostream& output, const MyString& a);
//	friend void grow(char*& arr, int& total_size);
//};
////--------------------------Add your code here----------------------
//
//void grow(char*& arr, int& total_size)
//{
//	total_size++;
//	char* temp = new char[total_size];
//	for (int i = 0; i < total_size; i++)
//	{
//		temp[i] = arr[i];
//	}
//	delete[]arr;
//	arr = temp;
//}
//
//
//MyString::MyString()
//{
//	lenght = 1;
//	str = new char[lenght];
//	str[0] = '\0';
//}
//
//
//MyString& MyString::operator=(const MyString& right)
//{
//	if (&right != this)
//	{
//
//		if (lenght != right.lenght)
//		{
//			delete[] str;
//			lenght = right.lenght;
//			str = new char[lenght];
//		}
//
//		for (int i = 0; i < lenght; ++i)
//			str[i] = right.str[i];
//	}
//
//	return *this;
//}
//
//
//MyString MyString::operator+(const MyString right)
//{
//	MyString temp;
//	for (int i = 0; i < lenght; i++)
//	{
//		temp.str[i] = str[i];
//		temp.lenght++;
//	}
//	int l = lenght + right.lenght, j = 0;
//
//	for (int i = lenght; i < l; i++)
//	{
//		temp.str[i] = right.str[j];
//		j++;
//		temp.lenght++;
//	}
//	temp.lenght--;
//
//	return temp;
//}
//
//MyString MyString::operator-(const MyString& right)
//{
//	MyString obj;
//	if (lenght >= right.lenght)
//	{
//		int i = 0;
//		for (int j = 0; j < lenght; j++)
//		{
//			if (str[j] == right.str[i] && right.str[i] != '\0')
//			{
//				i++;
//			}
//			else
//			{
//				obj.str[obj.lenght - 1] = str[j];
//				grow(obj.str, obj.lenght);
//			}
//		}
//	}
//	obj.lenght--;
//
//	return obj;
//}
//
//MyString& MyString::operator++()
//{
//	lenght++;
//	char* temp = new char[lenght];
//	for (int i = 0; i < lenght; i++)
//	{
//		if (i == lenght - 1)
//			temp[i] = 'a';
//		else
//			temp[i] = str[i];
//	}
//	delete[]str;
//	str = temp;
//	//str[lenght]='a';
//	//lenght++;
//	return *this;
//}
//
//MyString& MyString::operator--()
//{
//	lenght--;
//	char* temp = new char[lenght];
//	for (int i = 0; i < lenght; i++)
//	{
//		temp[i] = str[i];
//	}
//	delete[]str;
//	str = temp;
//	//str[lenght]='\0';
//	//lenght--;
//	return *this;
//}
//
//bool MyString::operator<(MyString right)
//{
//	int sum1 = 0, sum2 = 0;
//	for (int i = 0; i < lenght; i++)
//	{
//		sum1 = str[i] + sum1;
//	}
//	for (int i = 0; i < right.lenght; i++)
//	{
//		sum2 = right.str[i] + sum2;
//	}
//	if (sum1 < sum2)
//		return true;
//	else
//		return false;
//
//}
//bool MyString::operator!()
//{
//	if (lenght == 1)
//	{
//		if (str[0] == '\0')
//			return true;
//	}
//	return false;
//}
//
//MyString MyString::operator()(int index, int total)
//{
//	MyString temp;
//	for (int i = 0; i < total && str[index] != '\0'; i++)
//	{
//		temp.str[i] = str[index];
//		grow(temp.str, temp.lenght);
//		index++;
//	}
//	return temp;
//}
//
//char& MyString::operator[](int subscript)
//{
//
//	if (subscript < 0 || subscript >= lenght)
//		cout << "Subscript out of range";
//
//	return str[subscript];
//}
//
//istream& operator>>(istream& input, MyString& a)
//{
//	int i = 0;
//	delete[]a.str;
//	a.str = NULL;
//	a.lenght = 1;
//	a.str = new char[a.lenght];
//	input >> a.str;
//	while (a.str[i] != '\0') {
//		a.lenght++;
//		i++;
//	}
//	a.lenght--;
//	char* temp = new char[a.lenght];
//	for (int i = 0; i < a.lenght; i++)
//	{
//		temp[i] = a.str[i];
//	}
//	delete[]a.str;
//	a.str = temp;
//
//	return input;
//}
//
//ostream& operator<<(ostream& output, const MyString& a)
//{
//	int i;
//
//
//	for (i = 0; i < a.lenght && a.str[i] != '\0'; ++i)
//	{
//		output << a.str[i];
//	}
//	//	output << a.str;
//	output << endl;
//
//	return output;
//}
//
//
////-------------DO_NOT_CHANGE REGION starts below---------------------
//int main()
//{
//	MyString str1, str2, str3, str4; //Default constructor will make a string of lenght 1 having null character only i.e. empty string
//	if (!str1)
//	{
//		cout << "String 1 is Empty.\n";
//		cout << "Str 1 = " << str1 << endl << endl << endl;
//	}
//
//	cout << "Enter String 1:\t";
//	cin >> str1;
//
//
//	cout << "Enter String 2:\t";
//	cin >> str2;
//
//
//	cout << "\n\n\nUser Entered:\n";
//	cout << "String 1 = " << str1 << endl;
//	cout << "String 2 = " << str2 << endl << endl << endl;
//
//	//What is following code testing?
//	cout << "Before str1 = str1; str1 = " << str1 << endl;
//	str1 = str1;
//	cout << "After str1 = str1, str1 = " << str1 << endl << endl << endl;
//
//
//	cout << "Before str4 = str3 = str1+str2\n";
//	cout << "str1 = " << str1 << endl;
//	cout << "str2 = " << str2 << endl;
//	cout << "str3 = " << str3 << endl;
//	cout << "str4 = " << str4 << endl;
//
//	str4 = str3 = str1 + str2;
//
//
//	cout << "\n\n\nAfter str4 = str3 = str1+str2\n";
//	cout << "str1 = " << str1 << endl;
//	cout << "str2 = " << str2 << endl;
//	cout << "str3 = " << str3 << endl;
//	cout << "str4 = " << str4 << endl;
//
//	cout << "\n\n\nEnter String 3:\t";
//	cin >> str3;
//
//	cout << "\n\n\nEnter String 4:\t";
//	cin >> str4;
//
//
//	cout << "\n\n\nstr3 = " << str3 << endl;
//	cout << "str4 = " << str4 << endl;
//
//	if (str3 < str4)
//		cout << "String 3 is Less than String 4.\n";
//	else
//		cout << "String 3 is NOT Less than String 4.\n";
//
//	MyString str5 = str1 + str2;
//	cout << "\n\n\nStr5:\t" << str5 << endl;
//	cout << "Str5[7]:\t" << str5[7] << endl; //Function Call: str5.operator[](7).
//	str5[7] = '$';
//
//	cout << "\n\nStr5:\t" << str5 << endl;
//	cout << "\n\n\nstr5(5, 10):\t" << str5(5, 10) << endl;// Substring of lenght 10 starting from index 5 . Function Call str5.operator()(5,10) Let the returned MyString or char* leak
//
//
//	// Output for below statements is going to be shown below the sample output given above
//	// Values right now -> str3 = abcd, str4 = abcD
//
//	cout << "\n\n ++Str3 :\t" << ++str3 << endl;
//
//	// ++Str3: abcda
//
//	str5 = str4 - str3;
//
//	cout << "\n\n Str4 - Str3 :\t" << str5 << endl;
//
//	// Str4 – Str3:      // Nothing printed because str4 is less than str3
//
//	cout << "\n\n --Str3 :\t" << --str3 << endl;
//
//	// Str3 : abcd
//
//	cout << "\n\n --Str3 :\t" << --str3 << endl;
//
//	// Str3 : abc
//
//
//	str5 = str4 - str3;
//
//	cout << "\n\n Str4 - str3 :\t" << str5 << endl;
//
//	// Str4 – Str3: D    ( abcD – abc = D )
//
//
//	return 0;
//}
////-------------End of DO_NOT_CHANGE REGION--------------------