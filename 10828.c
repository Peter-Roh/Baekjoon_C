#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef int ElementType;
typedef struct tagNode
{
	ElementType Data;
} Node;

typedef struct tagArrayStack
{
	int Capacity;
	int Top;
	Node* Nodes;
} ArrayStack;

void CreateStack(ArrayStack** Stack, int Capacity)
{
	(*Stack) = (ArrayStack*)malloc(sizeof(ArrayStack));
	(*Stack)->Nodes = (Node*)malloc(sizeof(Node) * Capacity);
	(*Stack)->Capacity = Capacity;
	(*Stack)->Top = 0;
}

void DestroyStack(ArrayStack* Stack)
{
	free(Stack->Nodes);
	free(Stack);
}

int IsFull(ArrayStack* Stack)
{
	return(Stack->Capacity == Stack->Top);
}

int IsEmpty(ArrayStack* Stack)
{
	if(Stack->Top == 0)
		return 1;

	return 0;
}

int Size(ArrayStack* Stack)
{
	return Stack->Top;
}

void Push(ArrayStack* Stack, ElementType Data)
{
	int Position = Stack->Top;
	Stack->Nodes[Position].Data = Data;
	Stack->Top++;
}

ElementType Pop(ArrayStack* Stack)
{
	if(IsEmpty(Stack) == 1)
		return -1;

	int Position = --(Stack->Top);
	int temp;

	temp = Stack->Nodes[Position].Data;

	return temp;
}

ElementType Top(ArrayStack* Stack)
{
	if(IsEmpty(Stack) == 1)
		return -1;

	int Position = Stack->Top - 1;

	return Stack->Nodes[Position].Data;
}

int main(void)
{
	int N, X;
	ArrayStack* Stack = NULL;
	char order[7];

	scanf("%d", &N);

	CreateStack(&Stack, N);

	while(N--)
	{
		scanf("%s", order);

		if(!strcmp(order, "push"))
		{
			scanf("%d", &X);

			Push(Stack, X);
		}
		else if(!strcmp(order, "pop"))
		{
			printf("%d\n", Pop(Stack));
		}
		else if(!strcmp(order, "size"))
		{
			printf("%d\n", Size(Stack));
		}
		else if(!strcmp(order, "empty"))
		{
			printf("%d\n", IsEmpty(Stack));
		}
		else if(!strcmp(order, "top"))
		{
			printf("%d\n", Top(Stack));
		}
	}

	return 0;
}