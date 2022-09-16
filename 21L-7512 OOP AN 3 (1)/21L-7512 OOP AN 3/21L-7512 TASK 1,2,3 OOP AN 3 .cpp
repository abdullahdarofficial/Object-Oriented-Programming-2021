//
//#include<iostream>
//using namespace std;
//class Time
//{
//private://data members
//	int hours;
//	int minutes;
//	int seconds;
//	float num;
//public:
//	Time()//default constructor
//	{
//		hours = 0;
//		minutes = 0;
//		seconds = 0;
//		num = 0;
//	}
//	Time(int hr, int min,int sec)//overloaded constructor
//	{//if input is negative
//		while (hr < 0)
//		{
//			cout << "Enter hours in non negative numbers : ";
//			cin >> hr;
//		}
//		while (min < 0)
//		{
//			cout << "Enter minutes in non negative numbers : ";
//			cin >> min;
//		}
//		while (sec < 0)
//		{
//			cout << "Enter seconds in non negative numbers : ";
//			cin >> sec;
//		}//setting inputs
//		hours = hr;
//		minutes = min;
//		seconds = sec;
//		num = 0;
//		if (hours < 0 || minutes < 0 || seconds < 0)
//		{
//			cout << "Error invalid inputs" << endl;
//
//		}//formatting input
//		while (seconds >= 60)
//		{
//			seconds = seconds - 60;
//			minutes++;
//		}
//		while (minutes >= 60)
//		{
//			minutes = minutes - 60;
//			hours++;
//		}
//		while (hours >= 12)
//		{
//			hours = hours - 12;
//		}
//	}
//	Time(float n)//overloaded construtor
//	{
//		seconds = 0;
//		minutes = 0;
//		hours = 0;
//		num = n;
//	}
//	void Display()//display fun
//	{
//		if (hours >= 10 && hours <= 12)
//		{
//			cout << hours;
//		}
//		else
//			cout << "0" << hours;
//		if (minutes >= 10 && minutes <= 59)
//		{
//			cout << ":" << minutes;
//		}
//		else
//			cout << ":0" << minutes;
//		if (seconds >= 10 && seconds <= 59)
//		{
//			cout << ":" << seconds;
//		}
//		else
//			cout << ":0" << seconds;
//		cout << endl;
//	}
//	Time operator ++()//pre increment fun
//	{
//		Time temp;
//		++seconds;
//		if (seconds == 60)
//		{
//			++minutes;
//			seconds = 0;
//			if (minutes == 60)
//			{
//				++hours;
//				minutes = 0;
//				if (hours == 12)
//				{
//					hours = 0;
//				}
//			}
//		}
//		temp.hours = hours;
//		temp.minutes = minutes;
//		temp.seconds = seconds;
//		return temp;
//	}
//	Time operator ++(int)//post increment fun
//	{
//		Time temp;
//		seconds++;
//		if (seconds == 60)
//		{
//			minutes++;
//			seconds = 0;
//			if (minutes == 60)
//			{
//				hours++;
//				minutes = 0;
//				if (hours == 12)
//				{
//					hours = 0;
//				}
//			}
//		}
//		temp.hours = hours;
//		temp.minutes = minutes;
//		temp.seconds = seconds;
//		return temp;
//	}
//	Time operator--()//pre decrement fun
//	{
//		Time temp;
//		--seconds;
//		if (seconds < 0)
//		{
//			--minutes;
//			seconds = 59;
//			if (minutes < 0)
//			{
//				--hours;
//				minutes = 59;
//				if (hours < 0)
//				{
//					hours = 11;
//				}
//			}
//		}
//		temp.hours = hours;
//		temp.minutes = minutes;
//		temp.seconds = seconds;
//		return temp;
//	}
//	Time operator--(int)//post decrement fun
//	{
//		Time temp;
//		seconds--;
//		if (seconds < 0)
//		{
//			minutes--;
//			seconds = 59;
//			if (minutes < 0)
//			{
//				hours--;
//				minutes = 59;
//				if (hours < 0)
//				{
//					hours = 11;
//				}
//			}
//		}
//		temp.hours = hours;
//		temp.minutes = minutes;
//		temp.seconds = seconds;
//		return temp;
//	}
//	Time operator -(Time& obj)//subtraction function
//	{
//		Time temp;
//		int check = 0;
//		if (obj.hours > hours)//if time is greater
//		{
//			cout << "Entered Second Time is Greater than First time\nPress 1 if you want to continue as [AM/PM] format \nPress Any other DIGIT Key to Exit just as 00:00:00 (Error)\nEnter Here : ";
//			cin >> check;
//			if (check != 1)
//			{
//				temp.seconds = 0;
//				temp.minutes = 0;
//				temp.hours = 0;
//				return temp;
//			}
//		}
//		else if (obj.hours == hours && obj.minutes > minutes)//if time is greater
//		{
//			cout << "Entered Second Time is Greater than First time\nPress 1 if you want to continue as [AM/PM] format \nPress Any other DIGIT Key to Exit just as 00:00:00 (Error)\nEnter Here : ";
//			cin >> check;
//			if (check != 1)
//			{
//				temp.seconds = 0;
//				temp.minutes = 0;
//				temp.hours = 0;
//				return temp;
//			}
//		}
//		else if (obj.hours == hours && obj.minutes == minutes && obj.seconds > seconds)//if time is greater
//		{
//			cout << "Entered Second Time is Greater than First time\nPress 1 if you want to continue as [AM/PM] format \nPress Any other DIGIT Key to Exit just as 00:00:00 (Error)\nEnter Here : ";
//			cin >> check;
//			if (check != 1)
//			{
//				temp.seconds = 0;
//				temp.minutes = 0;
//				temp.hours = 0;
//				return temp;
//			}
//		}
//		if (seconds < obj.seconds)//formating time
//		{
//			seconds = seconds + 60;
//			minutes--;
//		}
//		if (minutes < obj.minutes)//formating time
//		{
//			minutes = minutes + 60;
//			hours--;
//		}
//		if (hours < obj.hours)//formatting time
//		{
//			hours = hours + 12;
//		}
//		if (hours < 0)
//		{
//			hours = 11;
//		}
//		if (hours == 0)
//		{
//			hours = 12;
//		}//subtraction
//		temp.seconds = seconds - obj.seconds;
//		temp.minutes = minutes - obj.minutes;
//		temp.hours = hours - obj.hours;
//		if (temp.seconds < 0)//formatting time
//		{
//			temp.minutes--;
//			temp.seconds = 59;
//		}
//		if (temp.minutes < 0)//formatting time
//		{
//			temp.hours--;
//			temp.minutes = 59;
//		}
//		if (temp.hours < 0)//formatting time
//		{
//			temp.hours = 11;
//		}
//		while (seconds >= 60)//formatting time
//		{
//			seconds = seconds - 60;
//			minutes++;
//		}
//		while (minutes >= 60)//formatting time
//		{
//			minutes = minutes - 60;
//			hours++;
//		}
//		while (hours >= 12)//formatting time
//		{
//			hours = hours - 12;
//		}
//		return temp;
//	}
//	Time operator*(Time obj)//multiply function
//	{
//		Time temp;
//		int set;
//		float sec = 0, min = 0, hr = 0;
//		set = obj.num;//Multipling
//		sec = (seconds * obj.num);
//		min = (minutes * obj.num);
//		hr = (hours * obj.num);
//		min = ((hr - (int)hr) * 60) + min;
//		sec = ((min - (int)min) * 60) + sec;
//		while (sec >= 60)//formatting time
//		{
//			sec = sec - 60;
//			min++;
//		}
//		while (min >= 60)//formatting time
//		{
//			min = min - 60;
//			hr++;
//		}
//		while (hr >= 12)//formatting time
//		{
//			hr = hr - 12;
//		}
//		temp.seconds = sec;
//		temp.minutes = min;
//		temp.hours = hr;
//		return temp;
//	}
//};
//int main()
//{
//	Time d1, d2;
//	float num;
//	int h, m, s;
//	cout << "Enter Time 1 " << endl;//time 1 for increment
//	cout << "Enter Hours : ";
//	cin >> h;
//	cout << "Enter Minutes : ";
//	cin >> m;
//	cout << "Enter Seconds : ";
//	cin >> s;
//	Time t1(h, m, s);
//	cout << "Time 1 Before Pre-Increment is :  ";
//	t1.Display();
//	cout << "Time 1 After Pre-increment :  ";
//	++t1;
//	d1 = t1;
//	d1.Display();
//	cout << "Time 1 Before Post-increment :  ";
//	t1.Display();
//	cout << "Time 1 After Post-increment :  ";
//	t1++;
//	d1 = t1;
//	d1.Display();
//	cout << "-----------------------------------------------" << endl;
//	cout << "Enter Time 2 " << endl;//time 2 for decrement
//	cout << "Enter Hours : ";
//	cin >> h;
//	cout << "Enter Minutes : ";
//	cin >> m;
//	cout << "Enter Seconds : ";
//	cin >> s;
//	Time t2(h, m, s);
//	cout << "Time 2 Before Pre-Decrement is :  ";
//	t2.Display();
//	cout << "Time 2 After Pre-Decrement :  ";
//	--t2;
//	d2 = t2;
//	d2.Display();
//	cout << "Time 2 Before Post-Decrement :  ";
//	t2.Display();
//	cout << "Time 2 After Post-Decrement :  ";
//	t2--;
//	d2 = t2;
//	d2.Display();
//	cout << "-----------------------------------------------" << endl;
//	cout << "Enter Two Times for Subtraction [T3-T4] : " << endl;//time 3 and 4 for subtraction
//	cout << "Enter Time 3 " << endl;
//	cout << "Enter Hours : ";
//	cin >> h;
//	cout << "Enter Minutes : ";
//	cin >> m;
//	cout << "Enter Seconds : ";
//	cin >> s;
//	Time t3(h, m, s);
//	cout << "Time 3 is :  ";
//	t3.Display();
//	cout << "Enter Time 4 " << endl;
//	cout << "Enter Hours : ";
//	cin >> h;
//	cout << "Enter Minutes : ";
//	cin >> m;
//	cout << "Enter Seconds : ";
//	cin >> s;
//	Time t4(h, m, s);
//	cout << "Time 4 is :  ";
//	t4.Display();
//	Time t5(0, 0, 0);
//	t5 = t3 - t4;
//	cout << "Time 3 - Time 4 :  ";
//	t5.Display();
//	cout << "-----------------------------------------------" << endl;
//	cout << "Enter the Time that you want to Multiply (*) ";//time 5 for multiplication
//	cout << "Enter Time 5 " << endl;
//	cout << "Enter Hours : ";
//	cin >> h;
//	cout << "Enter Minutes : ";
//	cin >> m;
//	cout << "Enter Seconds : ";
//	cin >> s;
//	Time t6(h, m, s);
//	cout << "Time 5 is :  ";
//	t6.Display();
//	cout << "Enter the Number for multiplication : ";
//	cin >> num;
//	while (num < 0)
//	{
//		cout << "InValid Inputs\nEnter Non-Negative Value : ";
//		cin >> num;
//	}
//	Time t7(num), t8;
//	t8 = t6 * t7;
//	cout << "The Time after Multiplication is :  ";
//	t8.Display();
//	cout << "Program Completed Successfully" << endl;
//	return 0;
//}