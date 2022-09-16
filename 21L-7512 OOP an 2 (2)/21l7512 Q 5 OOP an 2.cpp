/*
#include<iostream>
using namespace std;

class NLP
{
private://Declaring arr Data Members in private
	char* arr;
	int size;
	int wordcount;
	char** array;
	char** unique;
	int totalwordcount;
	int uniqueword;
	int* wordarr;
	int* uniquearr;
	int** unigram;
	int** bigram;
	char** bigramc;
	int** trigram;
	char** trigramc;
public:
	NLP()//Default Constructor
	{
		arr = NULL;
		size = 0;
		totalwordcount = 0;
		wordcount = 0;
		uniqueword = 0;
		array = NULL;
		unique = NULL;
		bigramc = NULL;
		uniquearr = NULL;
		trigramc = NULL;
		wordarr = NULL;
		unigram = NULL;
		bigram = NULL;
		trigram = NULL;
	}
	NLP(char array[], int sizee)//Constructor Over loaded
	{
		size = sizee;
		for (int i = 0; i < size; i++)
		{
			*(arr + i) = array[i];
		}
		totalwordcount = 0;
		wordcount = 0;
		uniqueword = 0;
		trigramc = NULL;
		array = NULL;
		uniquearr = NULL;
		unique = NULL;
		bigramc = NULL;
		wordarr = NULL;
		unigram = NULL;
		bigram = NULL;
		trigram = NULL;
	}
	NLP(char array[])//Constructor Over loaded
	{
		size = 0;
		for (int i = 0; array[i] != '\0'; i++)
		{
			*(arr + i) = array[i];
		}
		totalwordcount = 0;
		uniqueword = 0;
		wordcount = 0;
		trigramc = NULL;
		wordarr = NULL;
		array = NULL;
		uniquearr = NULL;
		unique = NULL;
		bigramc = NULL;
		unigram = NULL;
		bigram = NULL;
		trigram = NULL;
	}
	//Setter Functions
	void Set_size(int sizee)//Setting size
	{
		size = sizee;
	}
	void Set_array(char array[])//Setting array
	{
		arr = new char[size];
		for (int i = 0; i < size; i++)
		{
			*(arr + i) = array[i];
		}
	}
    //Getter Functions
	int GetStrLength()//get array length
	{
		return size;
	}
	int Get_wordcount()//get total words is the array
	{
		return totalwordcount;
	}
	char** Get_Uniquearr()//get unique 2D array
	{
		return unique;
	}
	int Get_UniqueWord()//get total unique words
	{
		return uniqueword;
	}
	int** Get_Unigramarr()//get unigram freq 2d for sorting
	{
		return unigram;
	}
	int** Get_Bigram()//get bigram freq 2d for sortimg
	{
		return bigram;
	}
	int** Get_Trigram()//get trigram freq 2d for sortimg
	{
		return trigram;
	}
	char** Get_Array()//get char 2d array
	{
		return array;
	}
	char** Get_Bigram_Arr()//get bigram 2d array char
	{
		return bigramc;
	}
	char** Get_Trigram_Arr()//get trigram 2d array char
	{
		return trigramc;
	}
	//Utility Functions
	void Str_Length(char array[])//Fun for getting length
	{
		int sizee = 0;
		while (array[sizee] != '\0')
		{
			sizee++;
		}
		size = sizee;
	}
	void Word_Count()//function for counting number of words
	{
		if (*arr == ' ')
			wordcount = 0;
		else
			wordcount = 1;
		for (int i = 0; i < size; i++)
		{
			if (*(arr + i) == ' ' && *(arr + i + 1) != '.')
			{
				wordcount++;
			}
		}
		totalwordcount = wordcount;
	}
	void Unique_Words()//Function for extracting unique words
	{
		char** temp = new char* [wordcount];//temp array for all workings
		totalwordcount = wordcount;
		array = new char* [wordcount];//array for storing all words
		wordarr = new int[wordcount];//array for storing size of words
		uniqueword = wordcount;
		for (int i = 0; i < wordcount; i++)//2d array initillizing 
		{
			temp[i] = new char[30];
			array[i] = new char[30];
			*(wordarr + i) = '\0';
		}
		for (int i = 0; i < wordcount; i++)//initillizing all array to null
		{
			for (int j = 0; j < 30; j++)
			{
				temp[i][j] = '\0';
				array[i][j] = '\0';
			}
		}
		int i = 0, j = 0, k = 0;
		for (i = 0; i < size && j < wordcount; i++)//storing 1 d array into 2 d array
		{
			if (*(arr + i) != ' ' && *(arr + i) != '.')
			{
				temp[j][k] = *(arr + i);
				array[j][k] = *(arr + i);
				k++;
				*(wordarr + j) = k;
			}
			else
			{
				temp[j][k] = '\0';
				array[j][k] = '\0';
				j++;
				k = 0;
			}
		}
		int check = 0;
		for (int i = 0; i < wordcount; i++)//removing words from diffrent index if they match 
		{
			check = 0;
			for (int j = 0; j < i; j++)
			{
				for (int k = 0; k < 30; k++)
				{
					if (*(wordarr + i) == *(wordarr + j))
					{
						if (temp[i][k] != '\0' && temp[j][k] != '\0')
						{
							if (temp[i][k] == temp[j][k])
							{
								check++;
							}
							if (check == *(wordarr + i) && check == *(wordarr + j))
							{
								uniqueword--;
								temp[i][0] = '\0';//placing null if match 
							}
						}
					}
				}
			}
		}
		uniquearr = new int[uniqueword];//initillizing unique size array according to reduced size
		unique = new char* [uniqueword];//initillizing unique word char array according to reduced size
		for (int i = 0; i < uniqueword; i++)
		{
			unique[i] = new char[30];
		}
		for (int i = 0; i < uniqueword; i++)//initillizing unique array to null
		{
			*(uniquearr + i) = '\0';
			for (int j = 0; j < 30; j++)
			{
				unique[i][j] = '\0';
			}
		}
		for (int i = 0, k = 0; i < wordcount && k < totalwordcount; k++, i++)//storing temp array to unique
		{
			for (int j = 0; j < 30; j++)
			{
				if (temp[k][j] != '\0')
				{
					unique[i][j] = temp[k][j];
					*(uniquearr + i) = j + 1;
				}
				else if (temp[k][0] == '\0')//word not get stored if null is placed on 0 index as placed above on repeated words
				{
					i--;
					j = 40;
				}
			}
		}
		for (int i = 0; i < totalwordcount; i++)//deleting temp array
		{
			delete[]temp[i];
		}
		delete[]temp;
	}
	void fun_unigram()//Function for unigram
	{
		int* unigramm = new int[uniqueword];//int array for storing size and sorting
		unigram = new int* [2];
		for (int i = 0; i < 2; i++)//2d array
		{
			unigram[i] = new int[uniqueword];
		}
		for (int i = 0; i < uniqueword; i++)//making freq array of unigram to null
		{
			*(unigramm + i) = '\0';
		}
		int check = 0;
		for (int i = 0; i < uniqueword; i++)//checking same words acc to unigram
		{
			check = 0;
			for (int j = 0; j < totalwordcount; j++)
			{
				for (int k = 0; k < 30; k++)
				{
					if (*(uniquearr + i) == *(wordarr + j))//if both words size matches
					{
						if (unique[i][k] != '\0' && array[j][k] != '\0')//if both letters are not null
						{
							if (unique[i][k] == array[j][k])
							{
								check++;//count increases of letters matches
								if (check == *(uniquearr + i) && check == *(wordarr + j))//if our check matches with the size of word
								{
									*(unigramm + i) += 1;//freq of that word inc by 1
									check = 0;
								}
							}
						}
					}
				}
			}
		}
		for (int i = 0; i < uniqueword; i++)//2d array for sorting
		{
			unigram[0][i] = i + 1;
			unigram[1][i] = *(unigramm + i);
		}
		int temp;
		for (int i = 0; i < uniqueword; i++)//bubble sort 
		{
			for (int j = 0; j < uniqueword; j++)
			{
				if (unigram[1][j + 1] > unigram[1][j])
				{
					temp = unigram[0][j];
					unigram[0][j] = unigram[0][j + 1];
					unigram[0][j + 1] = temp;
					temp = unigram[1][i];
					unigram[1][j] = unigram[1][j + 1];
					unigram[1][j + 1] = temp;
				}
			}
		}
	}
	void Bigram_fun()//function for bigram
	{
		int* biwordarr = new int[uniqueword - 1];//for storing bigram word size
		bigramc = new char* [uniqueword - 1];//bigram word char array
		for (int i = 0; i < uniqueword - 1; i++)//2d array
		{
			bigramc[i] = new char[60];
		}
		for (int i = 0; i < uniqueword - 1; i++)//making bigram char array to null
		{
			for (int j = 0; j < 60; j++)
			{
				bigramc[i][j] = '\0';
			}
		}
		int k = 0;
		for (int i = 0; i < uniqueword - 1; i++)//now placing words from unique array in the form of bigram
		{
			k = 0;
			for (int j = 0; j < 30; j++)
			{
				if (unique[i][j] != '\0')
				{
					bigramc[i][k] = unique[i][j];
					k++;
				}
			}
			for (int j = 0; j < 30; j++)//condition for next word in 2d total words array created
			{
				if (unique[i + 1][j] != '\0')
				{
					bigramc[i][k] = unique[i + 1][j];
					k++;
				}
			}
			*(biwordarr + i) = k;//total size of bigram word stored
		}
		bigram = new int* [uniqueword - 1];//bigram 2d array for sorting
		for (int i = 0; i < uniqueword - 1; i++)
		{
			bigram[i] = new int[2];
		}
		for (int i = 0; i < uniqueword - 1; i++)//initillizing array
		{
			bigram[i][0] = i + 1;
			bigram[i][1] = 0;
		}
		int check = 0, l = 0, n = 0, m = 0;
		for (int i = 0; i < uniqueword - 1; i++)//bigram function technique
		{
			check = 0;
			for (int j = 0; j < totalwordcount - 1; j++)
			{
				m = 0;
				if (*(biwordarr + i) == (*(wordarr + j) + *(wordarr + j + 1)))//if two words from array and one bigram word size matches
				{
					for (int k = 0; k < *(biwordarr + i); m++, k++)
					{
						if (bigramc[i][k] != '\0')
						{
							if (array[j][k] != '\0')
							{
								if (bigramc[i][k] == array[j][k])//char from word 1 matches check + 1
								{
									check++;
									l = k;
									l++;
								}
							}
							else if (array[j][l] == '\0')
							{
								if (array[j + 1][m - l] != '\0')//word 1 finishes and char from word 2 matches check + 1
								{
									if (bigramc[i][k] == array[j + 1][m - l])
									{
										check++;
									}
								}
							}
						}
					}
					if (*(biwordarr + i) == check)//if check matches with the bigram word size then freq inc by 1
					{
						bigram[i][1] += 1;
						check = 0;
						m = l = 0;
					}
				}
			}
		}
		l = 0;
		for (int i = 0; i < uniqueword - 1; i++)//sorting freq in decending order
		{
			for (int j = 0; j < uniqueword - 2; j++)
			{
				if ((bigram[j + 1][1]) > (bigram[j][1]))
				{
					l = bigram[j][1];
					bigram[j][1] = bigram[j + 1][1];
					bigram[j + 1][1] = l;
					l = bigram[j][0];
					bigram[j][0] = bigram[j + 1][0];
					bigram[j + 1][0] = l;
				}
			}
		}
		delete[]biwordarr;//deleting bigram word size array
	}
	void Trigram_fun()// function for trigram
	{
		int* triwordarr = new int[uniqueword - 2];//trigram freq array 
		trigramc = new char* [uniqueword - 2];//trigram char 2 d array
		for (int i = 0; i < uniqueword - 2; i++)//initillizing array
		{
			trigramc[i] = new char[90];
		}
		for (int i = 0; i < uniqueword - 2; i++)//trigram 2d char array to null
		{
			for (int j = 0; j < 90; j++)
			{
				trigramc[i][j] = '\0';
			}
			*(triwordarr + i) = '\0';
		}
		int k = 0;
		for (int i = 0; i < uniqueword - 2; i++)//conditions for storing three unique words as a trigram in trigram array
		{
			k = 0;
			for (int j = 0; j < 30; j++)//unique word 1
			{
				if (unique[i][j] != '\0')
				{
					trigramc[i][k] = unique[i][j];
					k++;
				}
			}
			for (int j = 0; j < 30; j++)//unique word 2
			{
				if (unique[i + 1][j] != '\0')
				{
					trigramc[i][k] = unique[i + 1][j];
					k++;
				}
			}
			for (int j = 0; j < 30; j++)//unique word 3
			{
				if (unique[i + 2][j] != '\0')
				{
					trigramc[i][k] = unique[i + 2][j];
					k++;
				}
			}
			*(triwordarr + i) = k;//trigram word size
		}
		trigram = new int* [uniqueword - 2];//2d array for freq sorting
		for (int i = 0; i < uniqueword - 2; i++)
		{
			trigram[i] = new int[2];
		}
		for (int i = 0; i < uniqueword - 2; i++)//initilling 2d array to null
		{
			trigram[i][0] = i + 1;
			trigram[i][1] = 0;
		}
		int check = 0, l = 0, n = 0, m = 0;
		for (int i = 0; i < uniqueword - 2; i++)//conditions for checking trigram word freq
		{
			check = 0;
			for (int j = 0; j < totalwordcount - 2; j++)
			{
				m = 0;
				check = 0;
				if (*(triwordarr + i) == ((*(wordarr + j) + *(wordarr + j + 1) + *(wordarr + j + 2))))//if size of trigram word and three array word matches
				{
					for (int k = 0; k < *(triwordarr + i); m++, k++)
					{
						if (trigramc[i][k] != '\0')
						{
							if (array[j][k] != '\0')
							{
								if (trigramc[i][k] == array[j][k])//if letters of word 1 matches check inc by 1
								{
									check++;
									l = k;
									l++;
								}
							}
							else if (array[j][l] == '\0')
							{
								if (array[j + 1][m - l] != '\0')
								{
									if (trigramc[i][k] == array[j + 1][m - l])//if word 1 finishes and letters of word 2 matches check inc by 1
									{
										n = m;
										n++;
										check++;
									}
								}
								else if (array[j + 1][m - l] == '\0')
								{
									if (trigramc[i][k] == array[j + 2][m - n])//if word 1 and 2 both finishes and letter of word 3 matches check inc by 1
									{
										check++;
									}
								}
							}
						}
					}
					if (*(triwordarr + i) == check)//if check becomes equal to size of trigram word freq inc by 1
					{
						trigram[i][1] += 1;
						check = 0;
						m = l = 0;
					}
				}
			}
		}
		l = 0;
		for (int i = 0; i < uniqueword - 2; i++)//sorting trigram word freq in decending order
		{
			for (int j = 0; j < uniqueword - 3; j++)
			{
				if ((trigram[j + 1][1]) > (trigram[j][1]))
				{
					l = trigram[j][1];
					trigram[j][1] = trigram[j + 1][1];
					trigram[j + 1][1] = l;
					l = trigram[j][0];
					trigram[j][0] = trigram[j + 1][0];
					trigram[j + 1][0] = l;
				}
			}
		}
		delete[]triwordarr;//deleting trigram word size array
	}
	~NLP()//Destructor
	{
		delete[]arr;
		for (int i = 0; i < totalwordcount; i++)
		{
			delete[]array[i];
		}
		delete[]array;
		for (int i = 0; i < wordcount; i++)
		{
			delete[]unique[i];
		}
		delete[]unique;
		delete[]wordarr;
		delete[]uniquearr;
		for (int i = 0; i < uniqueword; i++)
		{
			delete[]unigram[i];
		}
		delete[]unigram;
		for (int i = 0; i < uniqueword - 1; i++)
		{
			delete[]bigram[i];
		}
		delete[]bigram;
		for (int i = 0; i < uniqueword - 1; i++)
		{
			delete[]bigramc[i];
		}
		delete[]bigramc;
		for (int i = 0; i < uniqueword - 2; i++)
		{
			delete[]trigram[i];
		}
		delete[]trigram;
		for (int i = 0; i < uniqueword - 2; i++)
		{
			delete[]trigramc[i];
		}
		delete[]trigramc;
	}

};

int main()
{//Data members inc variables and arrays
	char array[100], ** unique, ** arr, ** bigramc, ** trigramc;
	int uniquewords, ** unigram, ** bigram, ** trigram;
	int size, wordcount;
	NLP a;// an object as a
	cout << "Enter an array : ";//taking input array
	cin.getline(array, 100);
	a.Str_Length(array);//calculating array length
	a.Set_array(array);//setting 1d array
	size = a.GetStrLength();//getting size of array
	cout << "The Size of Array Entered is : " << size << endl;//printing size of array
	a.Word_Count();//calculating number of words in array
	a.Unique_Words();//calculating unique words in array
	uniquewords = a.Get_UniqueWord();//getting unique words in 2d array
	wordcount = a.Get_wordcount();//getting total words in array
	cout << "Total words in Array are : " << wordcount << endl;//printing total words in an array
	arr = a.Get_Array();//getting 2d array having all words
	for (int i = 0; i < wordcount; i++)//printing all words from 2d array
	{
		cout << "Word : " << i + 1 << " = ";
		for (int j = 0; j < 30; j++)
		{
			if (arr[i][j] != '\0')
			{
				cout << arr[i][j];
			}
		}
		cout << endl;
	}
	cout << endl;
	cout << "Total Unique word in the Array are : " << uniquewords << endl;//printing total unique words in an array
	unique = a.Get_Uniquearr();//getting unique words in 2d array
	for (int i = 0; i < uniquewords; i++)//printing all unique words
	{
		cout << "Word : " << i + 1 << " = ";
		for (int j = 0; j < 30; j++)
		{
			if (unique[i][j] != '\0')
			{
				cout << unique[i][j];
			}
		}
		cout << endl;
	}
	cout << endl;
	a.fun_unigram();//calculating unigram
	unigram = a.Get_Unigramarr();//getting unigram words freq
	cout << "UniGram" << endl;
	for (int i = 0; i < uniquewords; i++)// printing unigram words with freq in decending order
	{
		for (int j = 0; j < uniquewords; j++)
		{
			if (unigram[0][i] == j + 1)
			{
				cout << "UniGram Word : [ ";
				for (int k = 0; k < 30; k++)
				{
					if (unique[j][k] != '\0')
					{
						cout << unique[j][k];
					}
				}
				cout << " ] has freaquency of = " << unigram[1][i] << endl;
			}
		}
	}
	cout << endl;
	a.Bigram_fun();//calculting bigram words
	bigram = a.Get_Bigram();//getting bigram freq
	bigramc = a.Get_Bigram_Arr();//getting bigram words 2d array
	cout << "BiGram" << endl;
	for (int i = 0; i < uniquewords - 1; i++)// printing bigram words with freq in decending order
	{
		for (int j = 0; j < uniquewords - 1; j++)
		{
			if (bigram[i][0] == j + 1)
			{
				cout << "Bigram Word : [ ";
				for (int k = 0; k < 60; k++)
				{
					if (bigramc[j][k] != '\0')
					{
						cout << bigramc[j][k];
					}
				}
				cout << " ] has freaquency of = " << bigram[i][1] << endl;
			}
		}
	}
	cout << endl;
	a.Trigram_fun();//calculting trigram 
	trigram = a.Get_Trigram();//getting trigram word freq
	trigramc = a.Get_Trigram_Arr();//getting trigram words 2d array
	cout << "TriGram" << endl;
	for (int i = 0; i < uniquewords - 2; i++)// printing trigram words with freq in decending order
	{
		for (int j = 0; j < uniquewords - 2; j++)
		{
			if (trigram[i][0] == j + 1)
			{
				cout << "Trigram Word : [ ";
				for (int k = 0; k < 90; k++)
				{
					if (trigramc[j][k] != '\0')
					{
						cout << trigramc[j][k];
					}
				}
				cout << " ] has freaquency of = " << trigram[i][1] << endl;
			}
		}
	}
	cout << endl;
	cout << "Program Completed SuccessFully" << endl;//Program completed :)
	cout << endl;
	system("pause");
	return 0;
}

*/