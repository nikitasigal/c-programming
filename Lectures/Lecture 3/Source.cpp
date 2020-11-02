#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>


#define DICE_SIZE 1000
#define STAT_SIZE 11

void PrintArray(const int arr[], int size)
{
	for (int i = 0; i < size; ++i)
		printf("%d ", arr[i]);
	printf("\n");
}

void SetIntArray(int arr[], int size)
{
	for (int i = 0; i < size; ++i)
		arr[i] = (rand() % 6 + 1) + (rand() % 6 + 1);
}

int main()
{
	srand((unsigned)time(0));
	rand();
	int dicethrows[DICE_SIZE] = { 0 };
	int statistics[STAT_SIZE] = { 0 };
	SetIntArray(dicethrows, DICE_SIZE);
	for (int i = 0; i < DICE_SIZE; ++i)
		statistics[dicethrows[i] - 2]++;
	PrintArray(statistics, STAT_SIZE);
	return 0;
}