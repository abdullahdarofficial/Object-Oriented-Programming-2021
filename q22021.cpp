//#include<iostream>
//using namespace std;
//
//class Program
//{
//private:
//	float *arr;
//public:
//	Program()
//	{
//		arr = NULL;
//	}
//	Program(float array[])
//	{
//		int size = 0;
//		for (int i = 0; array[i] != '\0'; i++)
//		{
//			size++;
//		}
//		arr = new float[size+1];
//		for (int i = 0; i < size; i++)
//		{
//			arr[i] = array[i];
//		}
//		arr[size] = '\0';
//	}
//	Program operator + (float a)
//	{
//		int size = calculate_size(arr);
//		Program temp;
//		temp.arr = new float[size + 2];
//		for (int i = 0; i < size; i++)
//		{
//			temp.arr[i] = arr[i];
//		}
//		temp.arr[size] = a;
//		temp.arr[size + 1] = '\0';
//		return temp;
//	}
//	Program operator+(Program& p)
//	{
//		int size1 = calculate_size(arr);
//		int size2 = calculate_size(p.arr);
//		Program temp;
//		temp.arr = new float[size1 + size2 + 1];
//		for (int i = 0; i < size1 + size2; i++)
//		{
//			if (i < size1)
//			{
//				temp.arr[i] = arr[i];
//			}
//			else
//				temp.arr[i] = p.arr[i - size1];
//		}
//		temp.arr[size1 + size2] = '\0';
//		return temp;
//	}
//	int calculate_size(float arr[])
//	{
//		int size = 0;
//		for (int i = 0; arr[i] != '\0'; i++)
//		{
//			size++;
//		}
//		return size;
//	}
//	void Display()
//	{
//		cout << "My List is : ";
//		for (int i = 0; arr[i] != '\0'; i++)
//		{
//			cout << arr[i] << ",";
//		}
//		cout << endl;
//	}
//	int length()
//	{
//		int size = 0;
//		for (int i = 0; arr[i] != '\0'; i++)
//		{
//			size++;
//		}
//		return size;
//	}
//	float operator-()
//	{
//		int size = calculate_size(arr);
//		Program temp;
//		temp.arr = new float[size];
//		cout << "ELEMENT POPPED : " << arr[0];
//		int pop = arr[0];
//		for (int i = 0; i < size; i++)
//		{
//			temp.arr[i] = arr[i + 1];
//		}
//		arr = temp.arr;
//		return pop;
//	}
//	int operator[](float val)
//	{
//		int size = calculate_size(arr);
//		for (int i = 0; i < size; i++)
//		{
//			if (val == arr[i])
//			{
//				return i;
//			}
//		}
//		return -1;
//	}
//	void reverse()
//	{
//		int size = calculate_size(arr);
//		Program temp;
//		temp.arr = new float[size];
//		for (int i = 0; i < size; i++)
//		{
//			temp.arr[i] = arr[size - i - 1];
//		}
//		for (int i = 0; i < size; i++)
//		{
//			arr[i] = temp.arr[i];
//		}
//		delete temp.arr;
//	}
//    friend ostream& const operator<<(ostream& out, Program& p)
//	{
//		out << "My List is : ";
//		for (int i = 0; p.arr[i] != '\0'; i++)
//		{
//			out << p.arr[i]<<",";
//		}
//		return out;
//	}
//};
//
//int main()
//{
//	int size = 1;
//	cout << "Enter size of Array : ";
//	cin >> size;
//	while (size <= 0)
//	{
//		cout << "Enter again : ";
//		cin >> size;
//	}
//	float* arr = new float[size+1];
//	for (int i = 0; i < size; i++)
//	{
//		cout << "Enter element no " << i + 1 << " : ";
//		cin >> arr[i];
//	}
//	arr[size] = '\0';
//	Program MyList(arr);
//	MyList.Display();
//	Program NMyList(arr);
//	NMyList = MyList + 9.7;
//	NMyList.Display();
//	Program Mylist(arr);
//	Mylist = MyList + NMyList;
//	Mylist.Display();
//	
//	cout << MyList.length() << endl;
//	cout << NMyList.length() << endl;
//	cout << Mylist.length() << endl;
//	float pop = -Mylist;
//	cout << "POPPED is : " << pop << endl;
//	Mylist.Display();
//	int check = Mylist[2.3];
//	cout << "Checked index is : " << check << endl;
//	check = Mylist[37.3];
//	cout << "Checked index is : " << check << endl;
//	Mylist.Display();
//	Mylist.reverse();
//	Mylist.Display();
//	cout << Mylist;
//	return 0;
//}
//
//
