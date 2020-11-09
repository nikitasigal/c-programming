#ifndef CIRCLE_ARRAY_H
#define CIRCLE_ARRAY_H
#include "circle.h"

#define MAX_SIZE 100

typedef struct CircleArray
{
	CIRCLE arr[MAX_SIZE];
	int size;
}CIRCLE_ARRAY;

int AddCircleToArray(CIRCLE_ARRAY* ca, const CIRCLE* c);
int RemoveCircleFromArray(CIRCLE_ARRAY* ca, const CIRCLE* c);
void FindConcentric(const CIRCLE_ARRAY* ca);
void FindNested(const CIRCLE_ARRAY* ca);
void FindCrossed(const CIRCLE_ARRAY* ca);
void PrintArray(const CIRCLE_ARRAY* ca);
#endif // !CIRCLE_ARRAY

