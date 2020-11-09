//#pragma once
#ifndef POINT_H
#define POINT_H

typedef struct Point
{
	double x, y;
}POINT;

void PrintPoint(const POINT* p);
int IsEqualPoint(const POINT* p1, const POINT* p2);
double Distance(const POINT* p1, const POINT* p2);

#endif // !POINT_H