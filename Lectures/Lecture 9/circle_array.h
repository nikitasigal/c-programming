#ifndef CIRCLE_ARRAY_H
#define CIRCLE_ARRAY_H
#include "circle.h"

typedef struct CircleArray
{
	CIRCLE* arr;
	int size;
	int capacity;
}CIRCLE_ARRAY;

void InitArray(CIRCLE_ARRAY* ca, int cap);
void DeleteArray(CIRCLE_ARRAY* ca);
void CopyArray(CIRCLE_ARRAY* destination, CIRCLE_ARRAY* source);
int AddCircleToArray(CIRCLE_ARRAY* ca, const CIRCLE* c);
int RemoveCircleFromArray(CIRCLE_ARRAY* ca, const CIRCLE* c);
void FindConcentric(const CIRCLE_ARRAY* ca);
void FindNested(const CIRCLE_ARRAY* ca);
void FindCrossed(const CIRCLE_ARRAY* ca);
void PrintArray(const CIRCLE_ARRAY* ca);
#endif // !CIRCLE_ARRAY_H

