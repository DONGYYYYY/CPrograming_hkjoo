#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void Start();
void inputString(char (*str)[100],int *);
void printString(char (*str)[100]);
void checkToken(char (*str)[100],int);
int main()
{

	Start();
	system("pause");
	return 0;
}

void Start()
{
	int size = 0;
	char str[10][100] = { "\0" };
	inputString(str,&size);
	printString(str);
	checkToken(str, size);
}

void inputString(char (*str)[100], int *size)
{
	int i = 0;
	printf("���� �ٿ� ���ϴ� �Է��ϼ���.\n�Է��� �� �Ǿ����� ���ο� �� ó���� ctrl+Z,�׸��� Enter�� �Է��ϼ���.\n\n");
	while (gets(str[i++])) 
		(*size)++;
}

void printString(char (*str)[100])
{
	int i = 0;
	printf("<<�Է��� ���ڿ�>>\n");
	while (1)
	{
		if (str[i][0] != '\0')
			puts(str[i++]);
		else
			break;
	}
}

void checkToken(char (*str)[100],int size)
{
	char *delimiter = " ,.!\t";
	char *ptoken;
	char* next_token;

	int i;

	for(i = 0 ; i < size ; i++){
		printf("<< %d�ٿ� �Է��� �ܾ�(��ū) ���>>\n", i + 1);
		ptoken = strtok(str[i], delimiter);
		// ptoken = strtok_s(next_token,delimiter,&next_token);
		while (ptoken != NULL)
		{
			printf("strlen(%s) = %d\n", ptoken,strlen(ptoken));
			ptoken = strtok(NULL, delimiter);
			//ptoken = strtok_s(NULL,delimiter,&next_token);
			// ptoken = strtok_s(next_token,delimiter,&next_token);
		}
	}
}