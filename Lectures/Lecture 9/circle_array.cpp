#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "circle_array.h"

void InitArray(CIRCLE_ARRAY* ca, int capacity)
{
	ca->capacity = capacity;
	ca->size = 0;
	ca->arr = (CIRCLE*)malloc(sizeof(CIRCLE) * ca->capacity);
}

void DeleteArray(CIRCLE_ARRAY* ca)
{
	if(ca->capacity)
		free(ca->arr);
}

void CopyArray(CIRCLE_ARRAY* destination, CIRCLE_ARRAY* source)
{
	if (destination->arr!=source->arr && destination->capacity)
		free(destination->arr);
	destination->capacity = source->capacity;
	destination->size = source->size;
	destination->arr = (CIRCLE*)malloc(sizeof(CIRCLE) * destination->capacity);
	for (int i = 0; i < destination->size; ++i)
		destination->arr[i] = source->arr[i];
}

int AddCircleToArray(CIRCLE_ARRAY* ca, const CIRCLE* c)
{
	if (ca->size == ca->capacity)
	{
		ca->capacity = ca->capacity * 2 + 1;
		CIRCLE* temp = (CIRCLE*)malloc(sizeof(CIRCLE) * ca->capacity);
		for (int i = 0; i < ca->size; ++i)
			temp[i] = ca->arr[i];
		free(ca->arr);
		ca->arr = temp;
	}
	ca->arr[ca->size++] = *c;
	return 1;
}

int RemoveCircleFromArray(CIRCLE_ARRAY* ca, const CIRCLE* c)
{
	int cnt = 0;
	for (int i = 0; i < ca->size; ++i)
		if (IsEqualCircle(&ca->arr[i], c))
		{
			ca->arr[i--] = ca->arr[--ca->size];
			cnt++;
		}
	return cnt;
}

void FindConcentric(const CIRCLE_ARRAY* ca)
{
	for (int i = 0; i < ca->size; ++i)
		for (int j = i + 1; j < ca->size; ++j)
			if (IsConcentric(&ca->arr[i], &ca->arr[j]))
				printf("%d and %d are concentirc\n", i + 1, j + 1);
}

void FindNested(const CIRCLE_ARRAY* ca)
{
	for (int i = 0; i < ca->size; ++i)
		for (int j = 0; j < ca->size; ++j)
			if (i!=j && IsNested(&ca->arr[i], &ca->arr[j]))
				printf("%d is nested in %d\n", i + 1, j + 1);
}

void FindCrossed(const CIRCLE_ARRAY* ca)
{
}

void PrintArray(const CIRCLE_ARRAY* ca)
{
	for (int i = 0; i < ca->size; ++i)
		PrintCircle(&ca->arr[i]);
}
