#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "point.h"
#include "circle.h"

int main()
{
	POINT p1 = { 0,0 };
	POINT p2 = { 3,4 };
	POINT p3;
	PrintPoint(&p1);
	PrintPoint(&p2);
	p3 = p1;
	PrintPoint(&p3);
	printf("p1 is equal p2? - %s\n", IsEqualPoint(&p1, &p2) ? "Yes" : "No");
	printf("p1 is equal p3? - %s\n", IsEqualPoint(&p1, &p3) ? "Yes" : "No");
	printf("p2 is equal p3? - %s\n", IsEqualPoint(&p2, &p3) ? "Yes" : "No");
	printf("Distance between p1 is p2 is %.2lf\n", Distance(&p1, &p2));

	CIRCLE c1, c2;
	c1.radius = 5;
	c1.center = p2;
	c2.radius = 10;
	c2.center = p3;
	PrintCircle(&c1);
	PrintCircle(&c2);
	printf("c1 is equal c2? - %s\n", IsEqualCircle(&c1, &c2) ? "Yes" : "No");
	c1.center.y = -6;
	c2.center.x = -4;
	PrintCircle(&c1);
	PrintCircle(&c2);
	return 0;
}
