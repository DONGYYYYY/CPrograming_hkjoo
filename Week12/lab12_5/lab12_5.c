#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct {
	int studentNumber; // �й�
	char *name; // �̸� 
	char *tel; // ��ȭ��ȣ
	char *address; // �ּ� 
}person;

void input();
//void inputPerson(person*);
person inputPerson();
void printPerson(person);

int main()
{
	input();
	system("pause");
	return 0;
}

void input()
{
	person person;
	//memset(&person,0,sizeof(person));
	person = inputPerson();
	// inputperson(&person);
	printPerson(person);
}

//void inputPerson(person* person)
person inputPerson()
{
	int n;
	char *ch;
	person person;
	ch = malloc(sizeof(char) * 512);
	printf("�й��� �Է��Ͻÿ� : ");
	scanf_s("%d", &n);
	person.studentNumber = n;
	getchar();
	printf("�̸��� �Է��Ͻÿ� : ");
	gets_s(ch, sizeof(char) * 512);
	person.name = (char *)malloc(sizeof(char)*strlen(ch));
	strcpy(person.name, ch);
	printf("��ȭ��ȣ�� �Է��Ͻÿ� : ");
	gets_s(ch, sizeof(char) * 512);
	person.tel = (char *)malloc(sizeof(char)*strlen(ch));
	strcpy(person.tel, ch);
	printf("�ּҸ� �Է��Ͻÿ� : ");
	gets_s(ch, sizeof(char) * 512);
	person.address = (char *)malloc(sizeof(char)*strlen(ch));
	strcpy(person.address, ch);
	return person;
}

void printPerson(person person)
{
	printf("\n===================����ü ���===================\n");
	printf("%10s = %d\n", "�й�", person.studentNumber);
	printf("%10s = %s\n", "�̸�", person.name);
	printf("%10s = %s\n", "��ȭ��ȣ", person.tel);
	printf("%10s = %s\n", "�ּ�", person.address);
}