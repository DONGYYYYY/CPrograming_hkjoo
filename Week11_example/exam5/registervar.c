#include <stdio.h>

int main()
{
	register int count;
	for (count = 1; count <= 100; count++);
		//scanf_s("%d",&count); // error register������ �ּҸ� ����� �� ����.
		//printf("%u",&count); // error register������ �ּҸ� ����� �� ����.
	printf("%d\n", count);
	system("pause");
	return 0;
}