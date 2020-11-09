#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#include "point.h"
#include "circle.h"
#include "circle_array.h"

int main()
{
	srand(time(0));
	CIRCLE_ARRAY arr;
	arr.size = 0;
	CIRCLE c;
	for (int i = 0; i < 100; ++i)
	{
		c.center.x = rand() % 3;
		c.center.y = rand() % 3;
		c.radius = rand() % 5;
		printf("%d circle was %s added\n", i + 1, AddCircleToArray(&arr, &c) ? "was" : "was not");
	}

	c.center.x = 1;
	c.center.y = 1;
	c.radius = 1;

	PrintArray(&arr);
	printf("%d was deleted\n", RemoveCircleFromArray(&arr, &c));
	//PrintArray(&arr);
	return 0;
}