#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "circle.h"

void PrintCircle(const CIRCLE* c)
{
	//Radius: 5.0
	//Center: [3.0, 2.3]
	printf("Radius: %2.lf\n", c->radius);
	printf("Center: ");
	PrintPoint(&c->center);
}

int IsEqualCircle(const CIRCLE* c1, const CIRCLE* c2)
{
	return c1->radius == c2->radius && IsEqualPoint(&c1->center, &c2->center);
}
