#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>

void input();
void inputNumber(int*);
void printIntToString(int);

int main()
{
	input();
	system("pause");
	return 0;
}

void input()
{
	int number;
	inputNumber(&number);
	printIntToString(number);
}

void inputNumber(int* number)
{
	printf("10000���� ���� ���� �ϳ��� �Է��ϼ���. -> ");
	scanf_s("%d", number);
}

void printIntToString(int number)
{
	char result[100] = { '\0' };
	int i = 0;
	int bool = 0;
	int num;
	char* str[10] = { "��","��","��","��","��","��","ĥ","��","��" };
	char* counter[10] = { "","��","��","õ" };
	for (i = 4; i >= 1; i--)
	{
		if ((num = (number / (int)pow(10.0, (double)i - 1))) > 0)
		{
			if (bool == 0)
			{
				strcpy(result, str[num - 1]);
				strcat(result, counter[i - 1]);
				bool++;
			}
			else {
				strcat(result, " ");
				strcat(result, str[num - 1]);
				strcat(result, counter[i - 1]);
			}
			number = number % (int)pow(10.0, (double)i - 1);
		}
	}
	printf("�Է��� ������ [%s]�Դϴ�.\n", result);
}