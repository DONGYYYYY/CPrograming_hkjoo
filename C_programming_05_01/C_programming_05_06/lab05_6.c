#include <stdio.h>

int GCD(int, int);

int main()
{
	int n1, n2;
	printf("�ΰ��� ������ �Է��Ͻÿ� : ");
	scanf_s("%d%d", &n1, &n2);
	printf("�� ���� �ִ����� = %d\n", GCD(n1, n2));
}

int GCD(int n1, int n2) // �ִ� ����� �Լ�
{
	if (n2 == 0)
	{
		return n1; // �ִ� ������� ã�ұ⿡ �ִ����� ���� ����
	}
	return GCD(n2, n1%n2); // n2==0�� �ƴ� ��� �ش� �Ű������� ���� ��� ȣ��
}