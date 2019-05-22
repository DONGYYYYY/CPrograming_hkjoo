#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void input();
int toint(const char *);
void inputNumber(char*);
void inputTwoNumber(char *);
void tokenString(char *);
void sumNumber(int *,int);
int main()
{
	input();
	system("pause");
	return 0;
}

void input()
{
	char number[100];
	inputNumber(number);
	printf("\n\n���� �Լ� atoi()�� �̿��� ���� -> %d\n", atoi(number));
	printf("\n���� ������ �Լ��� �̿��� ���� -> %d\n", toint(number));
	
	inputTwoNumber(number);
	tokenString(number);
}

void inputNumber(char *number)
{
	printf("����(���ڿ�) �ϳ� �Է��ϼ���. -> ");
	gets(number);
}

int toint(const char *number)
{
	int num=0;
	int count = 0;
	int i = 0;
	for (i = strlen(number)-1; i >= 0 ; i--)
	{
		if (isdigit(number[i]))
		{
			num += (number[i] - 48)*(int)pow(10.0,(double)count++); // 'c' = 48
		}
	}
	return num;
}

void inputTwoNumber(char *number)
{
	printf("����(���ڿ�) �ΰ��� �Է��ϼ���. -> ");
	gets(number);
}

void tokenString(char *number)
{
	char *delimiter = " ";
	char *token;
	int num[2];
	int i = 0;
	token = strtok(number, delimiter);
	while (token != NULL)
	{
		num[i++] = toint(token);
		token = strtok(NULL, delimiter);
	}
	sumNumber(num, i);
}

void sumNumber(int *num, int size)
{
	int i , sum = 0;
	for (i = 0; i < size; i++)
	{
		sum += num[i];
	}

	printf("�Է��� �� ��( %d, %d )�� �� = %d\n\n", num[0], num[1], sum);
}