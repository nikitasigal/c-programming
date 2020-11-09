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
	InitArray(&arr, 5);
	arr.size = 0;
	CIRCLE c;
	for (int i = 0; i < 6; ++i)
	{
		c.center.x = rand() % 2;
		c.center.y = rand() % 2;
		c.radius = rand() % 2;
		printf("%d circle was %s added\n", i + 1, AddCircleToArray(&arr, &c) ? "was" : "was not");
	}

	c.center.x = 1;
	c.center.y = 1;
	c.radius = 1;

	CIRCLE_ARRAY arr2;
	InitArray(&arr2, 2);
	CopyArray(&arr2, &arr);

	PrintArray(&arr);
	printf("|||||||||||||||||||||||\n");
	PrintArray(&arr2);

	printf("%d was deleted\n", RemoveCircleFromArray(&arr, &c));
	FindConcentric(&arr);
	FindNested(&arr);

	PrintArray(&arr);
	printf("|||||||||||||||||||||||\n");
	PrintArray(&arr2);

	DeleteArray(&arr);
	DeleteArray(&arr2);
	return 0;
}