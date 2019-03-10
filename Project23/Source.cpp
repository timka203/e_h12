#include<iostream> 
#include<stdio.h>
#include<locale.h>
#include<time.h>
#include<Windows.h>
#include <iomanip>
#include<cstring>
using namespace std;
char* func13(char* str, char*str2, int s, int c)
{
	int count = 0;
	char*p = NULL;
	int i;
	for (i = 0; i < s + 1; i++)
	{
		int h = i;
		for (size_t j = 0; j < c; j++)
		{
			{
				if (str[h] == str2[j])
				{
					count++;
					h++;
				}
			}
		}

		if (count >= c)
		{
			if (p == NULL)
			{
				p = &str[i - 1];
			}
		}
	}

	return p;

}
void task2()
{
	char d,m;
	char str[100];
	cin.ignore();
	cin.getline(str, 100);
	int s = strnlen_s(str, 100);
	cin >> d>>m;
	for (size_t i = 0; i < s; i++)
	{
		if (str[i] == d)
			str[i] = m;
	}
	cout << str << endl;
}
void task1()
{
	char str[100];
	cin.ignore();
	cin.getline(str, 100);
	int s = strnlen_s(str, 100);
	char str2[100];
	cin.ignore();
	cin.getline(str2, 100);
	int c = strnlen_s(str2, 100);
	cout << func13(str, str2, s, c) << endl;
}
int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));
	int a, d;
	do
	{
		printf("Which task");
		scanf_s("%d", &d);
		switch (d)
		{
		case 1: task1(); break;
		case 2: task2(); break;
		default:
			break;
		}
		printf(" do you want continue y(1)/no(2)");
		scanf_s("%d", &a);
	} while (a == 1);
	system("pause");
}