//
//#include<iostream>
//using namespace std;
//struct ComplexNum
//{
//	int real;
//	int img;
//};
//class Calculator
//{
//public:
//	virtual void add() = 0;
//	virtual void subtract() = 0;
//	virtual void multiply() = 0;
//	virtual void divide() = 0;
//};
//class SimpleNumbers :public Calculator
//{
//	int a;
//	int b;
//public:
//	SimpleNumbers()
//	{
//		a = b = 0;
//	}
//	SimpleNumbers(int n1, int n2)
//	{
//		a = n1;
//		b = n2;
//	}
//	void add()
//	{
//		cout << "The Sum of Numbers is : " << a + b << endl;
//	}
//	void subtract()
//	{
//		cout << "The Subtraction of Numbers is : " << a - b << endl;
//	}
//	void multiply()
//	{
//		cout << "The Multiplication of Number is : " << a*b << endl;
//	}
//	void divide()
//	{
//		cout << "The Division of Numbers is : " << a / b << endl;
//	}
//};
//class ComplexNumber:public Calculator
//{
//	ComplexNum a;
//	ComplexNum b;
//public:
//	ComplexNumber(int w, int x, int y, int z)
//	{
//		a.real = w;
//		b.real = x;
//		a.img = y;
//		b.img = z;
//	}
//	void add()
//	{
//		cout << "The Addition of Number is :  " << a.real + b.real << " + " << a.img + b.img << "i" << endl;;
//	}
//	void subtract()
//	{
//		cout << "The Subtraqction of Number is : " << a.real - b.real << " + " << a.img - b.img << "i" << endl;
//	}
//	void multiply()
//	{
//		cout << "The MUltiplication of NUmber is : " << (a.real * b.real) - (a.img * b.img) << "+" << (a.img * b.real) + (b.img * a.real) << "i" << endl;;
//	}
//	void divide()
//	{
//		cout << "The Division of NUmber is : " << ((a.real * b.real) + (a.img * b.img)) / ((b.real * b.real) + (b.img * b.img)) << "+" << (((a.img * b.real) - (b.img * a.real)) / ((b.real * b.real) + (b.img * b.img))) << "i" << endl;;
//	}
//};
//int main()
//{
//	int a = 1, b = 1, c = 1, d = 1;
//	cout << "Simple Number Calculator : " << endl;
//	cout << "Enter first number : ";
//	cin >> a;
//	cout << "Enter Second number : ";
//	cin >> b;
//	Calculator** cal = new Calculator*[2];
//	cal[0] = new SimpleNumbers(a, b);
//	cout << "Complex Number Calculator : " << endl;
//	cout << "Enter first number real part: ";
//	cin >> a;
//	cout << "Enter first number imaginary part: ";
//	cin >> b;
//	cout << "Enter Second number real part : ";
//	cin >> c;
//	cout << "Enter Second Nnuber imaginary part : ";
//	cin >> d;
//	cal[1] = new ComplexNumber(a, c, b, d);
//	cout << "SIMPLE NUMBER CALCULATOR " << endl;
//	cal[0]->add();
//	cal[0]->subtract();
//	cal[0]->multiply();
//	cal[0]->divide();
//	cout << "COMPLEX NUMBER CALCULATOR " << endl;
//	cal[1]->add();
//	cal[1]->subtract();
//	cal[1]->multiply();
//	cal[1]->divide();
//	system("pause");
//	return 0;
//}