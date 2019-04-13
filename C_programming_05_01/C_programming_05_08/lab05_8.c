#include <stdio.h>

// �ϳ����� ž

// 1. ��� 1���� N-1���� ������ ��� 2�� �ű��.
// 2. ��� 1���� 1���� ������ ��� 3���� �ű��.
// 3. ��� 2���� N-1���� ������ ��� 3���� �ű��.

// ������ from���� to�� �ű��.
void move(int from, int to) { // ����� ���� �Լ� ( ���� �Լ��� ���ؼ� ����� �ʿ� ����
	printf("Move from %d to %d\n", from, to);
}

// n���� ������ from ���� by�� ���� to�� �ű��.
void hanoi(int n, int from, int by, int to) {
	if (n == 1)
		move(from, to);
	else {
		hanoi(n - 1, from, to, by);    // 1��  N-1���� ������ ���3�� ���� 2�� �ű��.
		move(from, to);                // 2�� ��� 1���� 1���� ������ ��� 3���� �ұ��.
		hanoi(n - 1, by, from, to);    // 3�� ��� 2���� N-1���� ������ ��� 3���� �ű��.
	}
}


void main(void) {

	int i;
	printf("������ ������ �Է��Ͻÿ� : ");
	scanf_s("%d", &i);
	hanoi(i, 1, 2, 3);

	return 0;
}

/*
	ex) �Է� ������ 3�� ���� ���
	����
	hanoi(3,1,2,3); - > 
	n = 3 �̱� ������ else������ hanoi(2, 1, 3 , 2 ) - > 
	n = 2 �̱� ������ else������ hanoi(1, 1 , 2 , 3) - >
	n = 1�̱� ������ 1.move( 1 -> 3)  - > // �ش� ��� ��
    2.move( 1 -> 2 ) ->  hanoi(1, 3 , 1 , 2 )
	n = 1 �̱� ������ 3.move( 3 -> 2) -> //�ش� ��� ��
	4.move( 1 -> 3 ) -> hanoi(2,2,1,3)
	n = 2 �̱� ������ else������ hanoi(1,2,3,1) ->
	n = 1�̱� ������ 5.move( 2 -> 1 ) ->
	6.move ( 2 -> 1 ) -> hanoi(1,1,2,3) ->
	n = 1�̱� ������ 7.move( 1 -> 3 ) // ��ü ��� ��
	�׷��⿡ �ش� �˰������� �������� �� �� �ִ�.

	����� ������
	N������ ��յ��� 2�� ������� �ű�� ���̴�
	���⼭ N�� Ȧ���� ¦���Ŀ� ����
	���� ���� ����� 3��������� ���� ���̳� 2�� ������� ���� ���̳İ� �����ȴ�.
	�̸� �ذ��ϴ� ����Լ��� ���� �ϳ��� �Լ��̴�.
	���� ��� N = 4�϶��� N = 6�϶��� ���� ���� 
	N= 4�� ������� N = 6�� ������� �ʹ� �κа� ������ �����ϴ� ( 4���� ����� 3���� �ű涧 ����)
	�� �� 5���� 2������ �̵� 3�� ��յ��� 2������ �̵� ��
	������ 6���� 3������ �̵���Ű�� 2����տ� �ִ� ��ü�� 3������ �ű�� ������ ������ ���̴�.
*/
