#include <stdio.h>

int findMax(int, int, int);

int main()
{
	int num1, num2, num3;
	printf("������ ������ �Է��Ͻÿ� : ");
	scanf_s("%d%d%d", &num1, &num2, &num3);
	printf("�ִ밪 : %d", findMax(num1, num2, num3));
}

int findMax(int num1, int num2, int num3) // �ִ밪 ��
{
	int max;
	if (num1 > num2)
	{
		max = num1;
	}
	else
	{
		max = num2;
	}
	if (max < num3)
	{
		max = num3;
	}
	return max;
}