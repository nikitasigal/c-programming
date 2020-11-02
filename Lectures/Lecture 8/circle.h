#ifndef CIRCLE_H
#define CIRCLE_H
#include "point.h"

typedef struct Circle
{
	POINT center;
	double radius;
}CIRCLE;

void PrintCircle(const CIRCLE* c);
int IsEqualCircle(const CIRCLE* c1, const CIRCLE* c2);

#endif // !CIRCLE_H

