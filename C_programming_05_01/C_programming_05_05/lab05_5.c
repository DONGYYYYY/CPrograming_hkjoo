#include <stdio.h>

int fibo(int);

int main()
{
	int n, i;
	printf("���� n�� �Է��Ͻÿ� : ");
	scanf_s("%d", &n);
	for (i = 0; i <= n; i++)
	{
		printf("fiboncci(%d) = %d\n", i, fibo(i));
	}
	return 0;
}

int fibo(int n) // �Ǻ���ġ ����Լ�
{
	if (n == 0) // n == 0�� ��� 0�� ����
		return 0;
	else if (n == 1 || n == 2) // n ==1 || n == 2 �ϰ�� 1 �� ��ȯ
		return 1; 
	/* ���� ���� simplest case */
	else // �׿��� ��쿡�� n - 1 �� n - 2�� �ش��ϴ� �Ű������� ������ �Ǻ���ġ �Լ��� ��� ȣ��.
	{ 
		return fibo(n - 1) + fibo(n - 2); 
	}
}