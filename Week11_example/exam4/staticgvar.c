#include <stdio.h>

static int svar ;
void increment();

int main()
{
	int count = 1;
	for (; count <= 5; count++)
		increment();

	printf("�Լ� increment()�� �� %d�� ȣ��Ǿ����ϴ�.\n", svar);
	system("pause");
	return 0;
}

void increment()
{
	svar++;
}