#include <stdio.h>

int main()
{
	int ary[] = { 1,2,3,4,5,6,7,8,9,10 };
	int *ptr[10];
	int i;
	for (i = 0; i < 10; i++)
		ptr[i] = &ary[i];

	for (i = 0; i < 10; i++)
		printf("%d ", *(*(ptr + i)));
	printf("\n");
	puts("������ �迭�� ����Ͽ� ��� ������ ���� 5 ���� �� ���");
	for (i = 0; i < 10; i++) {
		*ptr[i] += 5;
		printf("%d ", *ptr[i]);
	}
	puts("\n�迭�� ���� ����Ͽ� ��� ���Ұ��� 5 ���� �� ���");
	for (i = 0; i < 10; i++) {
		ary[i] += 5;
		printf("%d ", ary[i]);
	}
}