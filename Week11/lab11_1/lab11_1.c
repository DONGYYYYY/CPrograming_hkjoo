#include <stdio.h>

void input();
double add(double num1, double num2);
double subtract(double num1, double num2);
double multi(double num1, double num2);
double divide(double num1, double num2);

int main()
{
	input();
	system("pause");
	return 0;
}

void input()
{
	int input;
	double num1, num2, result;
	double(*fpary[4])(double, double) = { add , subtract, multi, divide };
	printf("��Ģ������ ���Ͽ� �� ���꿡 ���� ��ȣ�� �Է��Ͻÿ�. >> \n");
	while (1)
	{
		printf("[���ϱ�] : 0, [����] : 1, [���ϱ�] : 2, [������] : 3 , [����] : -1 >> ");
		scanf_s("%d", &input);
		if (input == -1)
		{
			printf("���α׷� ����\n");
			break;
		}
		if (input >= 0 && input <= 3) {
			printf("��Ģ������ ������ �Ǽ� 2���� �Է��Ͻÿ�. >> ");
			scanf_s("%lf %lf", &num1, &num2);
			result = fpary[input](num1, num2);

			printf("%s ���� : %.2lf %s %.2lf == %.2lf\n", input == 0 ? "���ϱ�" : input == 1 ? "����" : input == 2 ? "���ϱ�" : "������", num1, input == 0 ? "+" : input == 1 ? "-" : input == 2 ? "*" : "/", num2, result);
		}
		else
		{
			printf("������������ ���� �ԷµǾ����ϴ�.\n");
		}
	}


}

double add(double num1, double num2)
{
	return num1 + num2;
}

double subtract(double num1, double num2)
{
	return num1 - num2;
}

double multi(double num1, double num2)
{
	return num1 * num2;
}

double divide(double num1, double num2)
{
	return num1 / num2;
}