#include <stdio.h>

void add(int *, int, int);

int main()
{
	int m = 0, n = 0;
	int a;
	int *sum = &a;

	printf("�� ���� �Է� : ");
	scanf_s("%d %d", &m, &n);
	add(sum, m, n);

	printf("�� ������ �� : %d\n", *sum);

	system("pause");
	return 0;
}

void add(int *psum, int a, int b)
{
	*psum = a + b;
}