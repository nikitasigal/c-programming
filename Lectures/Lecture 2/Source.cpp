#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
#include <stdlib.h> // random
#include <time.h>   // time as random seed

#define TASK1
int main()
{

#ifdef TASK1 //
#define SIZE 10

	double temperature[SIZE] = { 0 };
	double sum = 0;
	for (int i = 0; i < SIZE; ++i)
	{
		scanf("%lf", &temperature[i]);
		sum += temperature[i];
	}
	printf("Average is %5.2lf\n", sum / SIZE);

#endif // TASK1


#ifdef TASK2
#define DICE_SIZE 1000000
#define STAT_SIZE 11

	srand(time(0));
	rand();
	int statistics[STAT_SIZE] = { 0 };
	for (int i = 0; i < DICE_SIZE; ++i)
	{
		int dice = (rand() % 6 + 1) + (rand() % 6 + 1);
		statistics[dice - 2]++;
	}
	printf("\nstatistics\n");
	for (int i = 0; i < STAT_SIZE; ++i)
		printf("%2d - %5d\n", i + 2, statistics[i]);

#endif // TASK2


#ifdef TASK3
#define MAX_SIZE 1000

	int stack[MAX_SIZE] = { 0 };
	int curSize = 0;
	int n;
	printf("Array size (must be under %d) - ", MAX_SIZE);
	scanf("%d", &n);
	for (; curSize < n;)
	{
		printf("Number %d - ", curSize + 1);
		scanf("%d", &stack[curSize++]);
	}
	printf("Stack top is %d\n", stack[curSize - 1]);

	printf("Print and \"pop\"\n");
	for (; curSize > 0;)
		printf("%d ", stack[--curSize]);

#endif // TASK3

	return 0;
}