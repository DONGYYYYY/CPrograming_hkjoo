#include <stdio.h>

float inchToCm(float);

int main()
{
	float i;
	printf("inch���� �Է��Ͻÿ� : ");
	scanf_s("%f", &i); // ǥ�� �Է�
	printf("%.2f(inch) = %.2f(cm)", i, inchToCm(i)); // �Ҽ��� 2��° ������ ����ϱ� ���ؼ� %.2f�� ���.
}

float inchToCm(float i) // ����ϴ� �Լ�
{
	return i * 2.54;
}