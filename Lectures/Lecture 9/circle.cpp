#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "circle.h"

void PrintCircle(const CIRCLE* c)
{
	printf("Radius: %2.lf\n", c->radius);
	printf("Center: ");
	PrintPoint(&c->center);
}

int IsEqualCircle(const CIRCLE* c1, const CIRCLE* c2)
{
	return c1->radius == c2->radius && IsEqualPoint(&c1->center, &c2->center);
}

int IsConcentric(const CIRCLE* c1, const CIRCLE* c2)
{
	return c1->radius != c2->radius && IsEqualPoint(&c1->center, &c2->center);
}

int IsNested(const CIRCLE* c1, const CIRCLE* c2)
{
	return c1->radius >= Distance(&c1->center, &c2->center) + c2->radius;
}

int IsCrossed(const CIRCLE* c1, const CIRCLE* c2)
{
	return !IsNested(c1, c2) && !IsNested(c2, c1) && Distance(&c1->center, &c2->center) <= c1->radius + c2->radius;
}
