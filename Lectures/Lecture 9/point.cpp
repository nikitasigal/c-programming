#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "point.h"

void PrintPoint(const POINT* p)
{
	printf("[%.2lf, %.2lf]\n", p->x, p->y);
	return;
}

int IsEqualPoint(const POINT* p1, const POINT* p2)
{
	return p1->x == p2->x && p1->y == p2->y;
}

double Distance(const POINT* p1, const POINT* p2)
{
	return sqrt(pow((p1->x - p2->x), 2) + pow((p1->y - p2->y), 2));
}