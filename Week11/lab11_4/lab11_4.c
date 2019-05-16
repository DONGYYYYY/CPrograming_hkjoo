#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <limits.h>

void input();
void setNumber(int *);
void printHead(int *, int *);
void printHigher(int *, int *);
void printLower(int *, int *);
void printAnswer(int *);
int checkNumber(int *, int *);
static int min = 0;
static int max = 0;


static int trycount = 0;

int main()
{
	input();
	system("pause");
	return 0;
}

void input()
{
	int number, answer;
	setNumber(&answer);
	printHead(&number, &answer);
}

void setNumber(int *answer)
{
	int i;
	srand(time(NULL));

	*answer = rand() % 100 + 1;

	printf("1���� 100������ �ϳ��� ������ �����Ǿ����ϴ�.\n");

}

void printHead(int *number, int *answer)
{
	printf("�� ������ ���߾� ������? (%dȸ��) > ", ++trycount);
	scanf_s("%d", number);
	checkNumber(number, answer);
}

void printHigher(int *number, int *answer)
{
	printf("���߾�� �� ������ �Է��� ���� %d���� Ů�ϴ�.\n", *number);
	printf("%d���� %d������ ������ �ٽ� �Է��ϼ���. (%dȸ��) > ", min, max, ++trycount);
	scanf_s("%d", number);
	checkNumber(number, answer);
}

void printLower(int *number, int *answer)
{
	printf("���߾�� �� ������ �Է��� ���� %d���� �۽��ϴ�.\n", *number);
	printf("%d���� %d������ ������ �ٽ� �Է��ϼ���. (%dȸ��) > ", min, max, ++trycount);
	scanf_s("%d", number);
	checkNumber(number, answer);
}

void printAnswer(int *number)
{
	printf("�����մϴ�! ������ %d�Դϴ�.\n", *number);

}
int checkNumber(int *number, int *answer)
{
	if (trycount < 5)
	{
		if (*number == *answer)
		{
			printAnswer(number);
		}
		else if (*number > *answer)
		{
			max = *number;
			printLower(number, answer);
		}
		else
		{
			min = *number;
			printHigher(number, answer);
		}
	}
	else
	{
		printf("�־��� Ƚ���� �ʰ��߽��ϴ�.\n");
	}
}