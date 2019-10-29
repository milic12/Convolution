#include <stdlib.h>
#include<stdio.h>

void main()
{
	float Nx[15], Nh[15], y[15];
	int i, j, m, n;
	printf("enter size of array for Nx[]:");
	scanf_s("%d", &m);
	printf("enter size of array for Nh[]:");
	scanf_s("%d", &n);
	printf("enter the value of x(n):");
	for (i = 0; i < m; i++)
	{
		scanf_s("%f", &Nx[i]);
	}
	printf("enter the value of h(n):");
	for (i = 0; i < n; i++)
	{
		scanf_s("%f", &Nh[i]);
	}
	for (i = m; i <= m + n - 1; i++)
	{
		Nx[i] = 0;
	}
	for (i = n; i <= m + n - 1; i++)
	{
		Nh[i] = 0;
	}
	for (i = 0; i <= m + n - 1; i++)
	{
		y[i] = 0;
		for (j = 0; j <= i; j++)
		{
			y[i] = y[i] + (Nx[j] * Nh[i - j]);
		}
	}
	for (i = 0; i < m + n - 1; i++)
	{
		printf("y[%d]=%f\n", i, y[i]);
	}
}