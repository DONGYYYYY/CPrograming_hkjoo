#include <stdio.h>

int main()
{
	int a;
	int *p;
	p = &a;
	printf("*p�� ���� �Է��Ͻÿ� : ");
	scanf_s("%d", p);
	printf("*p = %d / a = %d\n", *p, a);

	printf("a�� ���� �Է��Ͻÿ� : ");
	scanf_s("%d", &a);
	printf("*p = %d / a = %d\n", *p, a);

}