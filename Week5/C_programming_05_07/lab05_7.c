#include <stdio.h>

void writeBinary(int);

int main()
{
	int n;
	printf("������ ���� �Է��Ͻÿ� : ");
	scanf_s("%d", &n);
	printf("������ -> 2���� : ");
	writeBinary(n);
	puts("");
}

void writeBinary(int n) // ������ ���� ����ϱ� ���� ��� �Լ�
{
	if (n <= 1) // simplest case
	{
		printf("%d", n); // 0 �Ǵ� 1�� �����
	}
	else // �׿��� ��쿡�� �������� ���� ���� �Ű������� ��� ȣ��
	{
		writeBinary(n / 2);
		printf("%d", n % 2); // ��ó���� ������ ���� ���� �������� ������ ������ ���ȣ�� ���� ���������� ���
	}

}