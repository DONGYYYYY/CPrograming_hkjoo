#include <stdio.h>

int * add(int *, int, int);
int * subtract(int *, int, int);
int * multiply(int, int);

int main()
{
	int m = 0, n = 0, sum = 0, diff = 0;

	printf("�� ���� �Է� : ");
	scanf_s("%d %d", &m, &n);

	printf("�� ���� ��(return) : %d", *add(&sum, m, n));
	printf("\t�� ���� ��(sum) : %d\n", sum);
	printf("�� ���� ��(return) : %d", *subtract(&diff, m, n));
	printf("\t�� ���� ��(diff) : %d\n", diff);
	printf("�� ���� �� : %d\n", *multiply( m, n));

	system("pause");
	return 0;
}

int * add(int *result, int a, int b)
{
	*result = a + b;
	return result;
}
int * subtract(int *result, int a, int b)
{
	*result = a - b;
	return result;
}
int * multiply(int a, int b)
{
	int mult = a * b;
	return &mult;
}