/*Problem 2: [10]
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

int count_consonents(char* arr, int count)
{
	int conn = 0;
	for (int i = 0; i < count; i++)
	{
		if ((*(arr + i) != 'A' && *(arr + i) != 'a') && (*(arr + i) != 'E' && *(arr + i) != 'e') && (*(arr + i) != 'I' && *(arr + i) != 'i') && (*(arr + i) != 'O' && *(arr + i) != 'o') && (*(arr + i) != 'U' && *(arr + i) != 'u'))
		{
			if ((*(arr + i) > 'A' && *(arr + i) < 'Z') || ((*(arr + i) > 'a' && *(arr + i) < 'z')))
			{
				conn++;
			}
		}
	}
	return conn;
}

int* count_vowels(char* arr, int count)
{
	int* voww = new int[6];
	for (int i = 0; i < 6; i++)
	{
		*(voww + i) = 0;
	}
	for (int i = 0; i < count; i++)
	{
		if ((*(arr + i) == 'A' || *(arr + i) == 'a') || (*(arr + i) == 'E' || *(arr + i) == 'e') || (*(arr + i) == 'I' || *(arr + i) == 'i') || (*(arr + i) == 'O' || *(arr + i) == 'o') || (*(arr + i) == 'U' || *(arr + i) == 'u'))
		{
			*(voww + 0) += 1;

			if (*(arr + i) == 'A' || *(arr + i) == 'a')
			{
				*(voww + 1) += 1;
			}
			else if (*(arr + i) == 'E' || *(arr + i) == 'e')
			{
				*(voww + 2) += 1;
			}
			else if (*(arr + i) == 'I' || *(arr + i) == 'i')
			{
				*(voww + 3) += 1;
			}
			else if (*(arr + i) == 'O' || *(arr + i) == 'o')
			{
				*(voww + 4) += 1;
			}
			else if (*(arr + i) == 'U' || *(arr + i) == 'u')
			{
				*(voww + 5) += 1;
			}
		}
	}
	return voww;
}

int** Sort_vowels(int* resvow)
{
	int **tempp=new int *[2];
	int temp;
	for (int i = 0; i < 2; i++)
	{
		tempp[i] = new int[5];
	}
	for (int i = 0; i < 5; i++)
	{
		tempp[0][i] = *(resvow + 1 + i);
		tempp[1][i] = i + 1;
		cout << tempp[0][i] << endl;
	}
	for (int j = 0; j < 5; j++)
	{
		for (int i = 0; i < 4; i++)
		{
			if(tempp[0][i+1]>tempp[0][i])
			{
				temp = tempp[0][i];
				tempp[0][i] = tempp[0][i + 1];
				tempp[0][i + 1] = temp;
				temp = tempp[1][i];
				tempp[1][i] = tempp[1][i + 1];
				tempp[1][i + 1] = temp;
			}
		}
	}
	return tempp;
}

int main()
{
	int size, resconn, * resvow, ** ressorted;
	char* arr1 = new char[5];
	*(arr1 + 0) = { 'a' };
	*(arr1 + 1) = { 'e' };
	*(arr1 + 2) = { 'i' };
	*(arr1 + 3) = { 'o' };
	*(arr1 + 4) = { 'u' };
	cout << "Apporxx how much long string you want to enter \n[SIZE] : ";
	cin >> size;
	char* arr = new char[size];
	cin.ignore();
	cout << "Enter a string containing vowels and consonents : ";
	cin.getline(arr, size);
	int count = 0;
	while (*(arr + count) != '\0')
	{
		count++;
	}
	resconn = count_consonents(arr, count);
	resvow = count_vowels (arr, count);
	cout << "Total Consonents : " << resconn << endl;
	cout << "Total Vowels : " << *resvow << endl;
	ressorted = Sort_vowels(resvow);

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (ressorted[1][i]==j+1)
			{
				cout << "Total : '" << *(arr1 + j) << "' : " << ressorted[0][i] << endl;
			}
		}
	}
	delete[]arr;
	delete[]arr1;
	delete[]resvow;
	for (int i = 0; i < 2; i++)
	{
		delete[]ressorted[i];
	}
	delete[]ressorted;
	return 0;
}

*/