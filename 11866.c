#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int ElementType;

typedef struct tagNode
{
	ElementType Data;
} Node;

typedef struct tagCircularQueue
{
	int Capacity;
	int Front;
	int Rear;

	Node* Nodes;
} CircularQueue;

int CQ_IsEmpty(CircularQueue* Queue)
{
	if(Queue->Front == Queue->Rear)
	{
		return 1;
	}

	return 0;
}

void CQ_Enqueue(CircularQueue* Queue, ElementType Data)
{
	int Position = 0;

	if(Queue->Rear == Queue->Capacity)
	{
		Position = Queue->Rear;
		Queue->Rear = 0;
	}
	else
	{
		Position = Queue->Rear++;
	}

	Queue->Nodes[Position].Data = Data;
}

ElementType CQ_Dequeue(CircularQueue* Queue)
{
	int Position = Queue->Front;

	if(Queue->Front == Queue->Capacity)
		Queue->Front = 0;
	else
		Queue->Front++;

	return Queue->Nodes[Position].Data;
}

void CQ_CreateQueue(CircularQueue** Queue, int Capacity)
{
	(*Queue) = (CircularQueue*)malloc(sizeof(CircularQueue));

	(*Queue)->Nodes = (Node*)malloc(sizeof(Node)*(Capacity + 1));

	(*Queue)->Capacity = Capacity;
	(*Queue)->Front = 0;
	(*Queue)->Rear = 0;
}

void CQ_DestroyQueue(CircularQueue* Queue)
{
	free(Queue->Nodes);
	free(Queue);
}

int size(CircularQueue* Queue)
{
	if(Queue->Front <= Queue->Rear)
		return Queue->Rear - Queue->Front;
	else
		return Queue->Rear + (Queue->Capacity - Queue->Front) + 1;
}

int front(CircularQueue* Queue)
{
	if(CQ_IsEmpty(Queue) == 1)
	{
		return -1;
	}

	return Queue->Nodes[Queue->Front].Data;
}

int back(CircularQueue* Queue)
{
	if(CQ_IsEmpty(Queue) == 1)
	{
		return -1;
	}

	return Queue->Nodes[Queue->Rear - 1].Data;
}

int main(void)
{
	CircularQueue* Queue;
	int N, M;
	int i;

	scanf("%d %d", &N, &M);

	CQ_CreateQueue(&Queue, N);

	for(i = 0; i < N; i++)
	{
		CQ_Enqueue(Queue, i + 1);
	}

	printf("<");

	while(1)
	{
		for(i = 1; i <= M - 1; i++)
		{
			CQ_Enqueue(Queue, CQ_Dequeue(Queue));
		}

		printf("%d", CQ_Dequeue(Queue));

		if(size(Queue) == 0)
		{
			break;
		}

		printf(", ");
	}

	printf(">");

	return 0;
}