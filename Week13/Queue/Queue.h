#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
typedef struct node
{
	int data;
	struct node* next;
}node;

typedef struct queue {
	node* front;
	node* back;
}queue;


void initQ(queue* q); // ť �ʱ�ȭ
void enqueue(queue* q, int n); // ť �߰�
int dequeue(queue* q); // ť ����
void printqueue(queue* q);  // ť ���
