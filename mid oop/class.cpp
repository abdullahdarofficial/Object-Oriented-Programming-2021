

/*

Problem 2: [10]
Take a long string from user using char * str dynamically. Then find the total number of vowels
and consonants in that string, also sort vowels in descending order and print the stats. You also
have to write sorting code for sorting of vowel array. Also check for upper case letters as well.

Sample Input:
Enter String: This is a string which contains vowels and consonants. Our task is to sort them in
descending order, and print their count.

Sample Output:
Total Consonants: 66
Total Vowels: 33
Total ‘i’: 10
Total ‘o’: 9
Total ‘a’: 6
Total ‘e’: 6
Total ‘u’: 2


*/
/*

#include<iostream>
using namespace std;

class Character
{
private://Data members
	char* arr;
	char* check;
	int* result;
public:
	//constructors
	Character()//default
	{
		arr = new char[100];
		check = new char[10];
		result = new int[5];
		arr = NULL;
		check = NULL;
		result = NULL;
	}
	Character(char array[], char checkk[])//overloaded
	{
		for (int i = 0; i < 100; i++)
		{
			*(arr + i) = array[i];
		}
		for (int i = 0; i < 10; i++)
		{
			*(check + i) = checkk[i];
		}
	}
	Character(char array[])//overloaded
	{
		for (int i = 0; i < 100; i++)
		{
			*(arr + i) = array[i];
		}
	}
	//setters
	void setarray(char array[])
	{
		for (int i = 0; i < 100 && array[i] != '\0'; i++)
		{
			*(arr + i) = array[i];
		}
	}
	void setcheck(char checkk[])
	{
		for (int i = 0; i < 10&& checkk[i]!='\0'; i++)
		{
			*(check + i) = checkk[i];
		}
	}
	//getters
	void* getarray()
	{
		return arr;
	}
	void* getresult()
	{
		return result;
	}
	void working()
	{
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 100 && *(arr + j) != '\0'; j++)
			{
				if (*(check + i) == *(arr + j)|| *(check + i + 5) == *(arr + j) )
				{
					*(result + i) +=1;
				}
			}
		}
	}
	void Display()
	{
		cout << "a occured " << *result << "  times " << endl;
		result++;
		cout << "e occured " << *result << "  times " << endl;
		result++;
		cout << "i occured " << *result << "  times " << endl;
		result++;
		cout << "o occured " << *result << "  times " << endl;
		result++;
		cout << "u occured " << *result << "  times " << endl;
	}
	~Character()
	{
		delete[] arr;
		delete[] check;
		delete[] result;
	}

};



int main()
{
	char array[100],checkk[10];
	Character a;
    
	cout << "Enter the text : ";
	cin.getline(array, 100);
	cout << "Enter vowels lower case" << endl;
	for (int i = 0; i < 5; i++)
	{
		cin >> checkk[i];
	}
	cout << "Enter vowels UPPER CASE" << endl;

	for (int i = 5; i < 10; i++)
	{
		cin >> checkk[i];
	}
	a.setarray(array);
	a.setcheck(checkk);
	a.working();
	a.Display();




	system("pause");
	return 0;
}
*/