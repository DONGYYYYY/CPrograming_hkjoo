#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void input();
void inputString(char* str);
void reverseToken(char * str);
main()
{
	input();
	system("pause");
}

void input()
{
	char s[1000];
	inputString(s);
	reverseToken(s);
}

void inputString(char *str)
{
	printf("�� ���� ������ �Է��ϼ���. ->\n");
	gets(str);
}

void reverseToken(char *str)
{
	printf("\n�Է��� ������ �ܾ �ݴ�� ����մϴ�. ->\n");
	int i;
	char *delimiter = " ,!\t";
	char *ptoken;
<<<<<<< HEAD
	char *next_token;

	ptoken = strtok_s(str, delimiter,&next_token);
=======
	char* next_token;
	ptoken = strtok(str, delimiter);
	// ptoken = strtok_s(str,delimiter,&next_token);
>>>>>>> 943b65cb3520285d787e851ad4581e8dc2e71105
	while (ptoken != NULL)
	{
		for (i = strlen(ptoken) - 1; i >= 0; i--)
		{
			putchar(ptoken[i]);
		}
		printf(" ");
<<<<<<< HEAD
		ptoken = strtok_s(next_token, delimiter,&next_token);
=======
		ptoken = strtok(NULL, delimiter);
		//ptoken = strtok_s(next_token,delimiter,&next_token);
>>>>>>> 943b65cb3520285d787e851ad4581e8dc2e71105
	}
	puts("");
}