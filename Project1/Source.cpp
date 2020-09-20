#include<stdio.h>
int main() {
	int n, i, j;
	scanf_s("%d", &n);
	for (i = 1;i <= 2 * n - 1;i++)
	{
		for (j = 1;j <= 2 * n - 1;j++)
		{
			if ((i + j <= 2 * n) && j >= i || (i + j >= 2 * n) && i >= j)
			{
				printf("* ");
			}
			else printf("  ");
		}
		printf("\n");
	}
	return 0;
}