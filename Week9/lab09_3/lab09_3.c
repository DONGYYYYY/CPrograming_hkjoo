#include <stdio.h>

void pointerExam();

int main()
{
	pointerExam();
	return 0;
}

void pointerExam()
{
	int ary[16]= { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16 };
	//int ary[][4] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16 };
	int *ptr[16];
	//int *ptr[4][4]; // �ּҸ� ��� �迭
	//int(*ptrs)[4] = ary;
	//int(*ptrs)[4]; // �迭�� ����Ű�� ������
	int i, j, num, row, col;
	for(i = 0 ; i < sizeof(ary)/sizeof(ary[0]) ; i++)
	{
		ptr[i] = &ary[i];
	}
	/*
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			ptr[i][j] = &ary[i][j];
			ptrs[i][j] = &ary[i][j]; //error
		}
	}
	*/
	printf("���� �� *ptr[16]�� ��\n");
	for (i = 0; i < sizeof(ary) / sizeof(ary[0]); i++)
	{
		printf("%d ", *(*(ptr + i)));
	}
	/*
	printf("���� �� *ptr[4][4]�� ��\n");

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++)
			printf("%d ", *(*(*(ptr + i) + j)));
		printf("\n");
	}
	*/

	/*
	printf("���� �� (*ptrs)[4]�� ��\n");

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++)
			printf("%d ", *(*(ptrs + i) + j)); // ptrs[i][j] // *(ptrs[i]+j);
		printf("\n");
	}
	*/

	puts("");

	while (1)
	{
		
		printf("������ �ε����� ���� �Է��Ͻÿ� : (0 ~ 15)(-1 = ����): ");
		scanf_s("%d", &row);
		if (row == -1)
		{
			break;
		}
		/*
		printf("col���� �Է��Ͻÿ� (0 ~ 3����)(-1 = ����): ");
		scanf_s("%d", &col);
		if (col == -1)
		{
			break;
		}
		if ((row >= 0 && row <= 3) && (col >= 0 && col <= 3))
		{
			printf("ary[%d][%d]�� ���� �Է��Ͻÿ� : ", row, col);
			scanf_s("%d", &num);
			ary[row][col] = num;
		}
		*/
		if(row >=0 && row <=15)
		{
			printf("ptr[%d]�� ���� �Է��Ͻÿ� : ", row);
			scanf_s("%d", ptr[row]);
		}
		else
		{
			printf("Ȯ���� �� �ִ� �ε������� �ʰ� Ȥ�� �̸��Դϴ�\n");
		}
	}
	puts("");
	printf("���� �� *ptr[16]�� ��\n");
	for (i = 0; i < sizeof(ary) / sizeof(ary[0]); i++)
	{
		printf("%d ", *(*(ptr + i)));
	}
	puts("");
	printf("���� �� ary[16]�� ��\n");
	for (i = 0; i < sizeof(ary) / sizeof(ary[0]); i++)
	{
		printf("%d ", ary[i]);
	}

	/*
	printf("���� �� *ptr[4][4]�� ��\n");

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++)
			//printf("%d ", *(*(*(ptr + i) + j)));
		printf("\n");
	}

	printf("���� �� (*ptrs)[4]�� ��\n");

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++)
			//printf("%d ", *(*(ptrs + i) + j)); // ptrs[i][j] // *(ptrs[i]+j);
		printf("\n");
	}
	*/
}

