#include <stdio.h>
#include <math.h>
float pita(int, int);

int main()
{
	int a, b;
	printf("�غ� , ���� ���� �Է��Ͻÿ� : ");
	scanf_s("%d %d", &a, &b);
	printf("c�� �� : %.2f", pita(a, b));
	return 0;
}

float pita(int a, int b) // �밢���� ���� ��Ÿ����� ������ ���Ͽ� C^2 = A^2 + B^2���� ����
{
	return sqrt(pow(a, 2) + pow(b, 2)); // �밢�� (C)���� A^2 + B^2���� �������� ���Ͽ� ���� �� �ִ�.
}