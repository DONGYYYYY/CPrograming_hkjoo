#include <stdio.h>

int main()
{
	int arr[][5] = { 1,2,3,4,5,6,7,8,9,10 };
	int(*ptr)[5] = arr;
	int row = sizeof(arr) / sizeof(arr[0]);
	int col = sizeof(arr[0]) / sizeof(arr[0][0]);
	int i,j;
	printf("arr�迭 ���\n");
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("%d ", arr[i][j]);
		}
		puts("");
	}
	puts("�迭 �����͸��� ����Ͽ� ��� ������ ���� 5 ���� �� ���");
	puts("�����͸� ����Ͽ� ���");
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++)
		{
			*(*(ptr + i) + j) += 5;
			printf("%d ", *(*(ptr + i) + j));
		}
		puts("");
	}
	puts("�ε������� ����Ͽ� ���");
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++)
		{
			printf("%d ", ptr[i][j]);
		}
		puts("");
	}
	puts("�����Ϳ� �ε����� ���� ����Ͽ� ���");
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++)
		{
			printf("%d ", *(ptr[i]+j));
		}
		puts("");
	}

	system("pause");
	return 0;
}