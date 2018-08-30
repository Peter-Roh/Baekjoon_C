#include <stdio.h>

int main(void)
{
	int N, M, K, i, j, k;
	int A[101][101], B[101][101], C[101][101];

	scanf("%d %d", &N, &M);

	for(i = 0; i < N; i++)
	{
		for(j = 0; j < M; j++)
		{
			scanf("%d", &A[i][j]);
		}
	}

	scanf("%d %d", &M, &K);

	for(i = 0; i < M; i++)
	{
		for(j = 0; j < K; j++)
		{
			scanf("%d", &B[i][j]);
		}
	}

	for(i = 0; i < N; i++)
	{
		for(j = 0; j < M; j++)
		{
			for(k = 0; k < K; k++)
			{
				C[i][k] += A[i][j] * B[j][k];
			}
		}
	}

	for(i = 0; i < N; i++)
	{
		for(j = 0; j < K; j++)
		{
			printf("%d ", C[i][j]);
		}

		printf("\n");
	}

	return 0;
}