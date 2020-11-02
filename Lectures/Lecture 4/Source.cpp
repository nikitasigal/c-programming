#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int power(int a, int b)
{
	if (a == 0)
		return 0;
	if (b == 0)
		return 1;
	return a * power(a, b - 1);

}
int mult(int a, int b)
{
	if (b == 0)
		return 0;
	return a + mult(a, b - 1);
}
int add(int a, int b)
{
	if (b == 0)
		return a;
	return 1 + add(a, b - 1);
}


void print_array(const int arr[], unsigned size)
{
	if (!size)
		return;
	print_array(arr + 1, size - 1);
	printf("%d\t", arr[0]);
}


#define ROW 100
#define COL 100
void SetMatrix(int arr[][COL], unsigned n, unsigned m)
{
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
			arr[i][j] = rand() % 201 - 100;
}
void PrintMatrix(const int arr[][COL], unsigned n, unsigned m)
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
			printf("%4d", arr[i][j]);
		printf("\n");
	}
}
void RowSum(const int arr[][COL], int sum[], unsigned n, unsigned m)
{
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
			sum[i] += arr[i][j];
}
void PrintSumMatrix(const int arr[][COL], const int sum[], unsigned n, unsigned m)
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
			printf("%4d", arr[i][j]);
		printf("\t%4d\n", sum[i]);
	}
}


#define TASK1
int main()
{


#ifdef TASK1
	int a = 2, b = 3;
	printf("%2d^%2d = %5d\n", a, b, power(a, b));
	printf("%2d^%2d = %5d\n", b, a, power(b, a));
	printf("%2d*%2d = %5d\n", a, b, mult(a, b));
	printf("%2d+%2d = %5d\n", a, b, add(a, b));

#endif // TASK1


#ifdef TASK2
#define SIZE 10
	int arr[SIZE] = { 1,2,3,4,5,6,7,8,9,10 };
	print_array(arr, SIZE);

#endif // TASK2


#ifdef TASK3
	int matrix[ROW][COL] = { 0 };
	int sum[ROW] = { 0 };
	srand((unsigned)time(0));
	unsigned n, m;
	scanf("%d%d", &n, &m);
	SetMatrix(matrix, n, m);
	RowSum(matrix, sum, n, m);
	PrintSumMatrix(matrix, sum, n, m);


#endif // TASK3


#ifdef TASK4
#define SIZE 35
	int arr[SIZE][SIZE] = { 0 };
	srand((unsigned)time(0));
	for (int i = 0; i < SIZE; ++i)
	{
		for (int j = 0; j < SIZE; ++j)
		{
			arr[i][j] = rand() % 11 - 5;
			printf("%3d", arr[i][j]);
		}
		printf("\n");
	}

	int sum = 0;
	for (int i = 0; i < SIZE; ++i)
	{
		sum += arr[i][i];
	}
	printf("\n\n%4d", sum);

#endif // TASK4


	return 0;
}