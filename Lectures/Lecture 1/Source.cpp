#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

#define TASK1
int main()
{


#ifdef TASK1

	double a, b;
	printf("Enter two sides of the rectangle\n");
	scanf("%lf%lf", &a, &b);
	printf("Perimeter of the rectangle is %.2lf\n", 2 * (a + b));
	printf("Area of the rectangle is %.2lf\n", a * b);

#endif // TASK1


#ifdef TASK2

	int r;
	printf("Enter the radius of the circle\n");
	scanf("%d", &r);
	printf("The circumference is %.2lf\n", 2 * M_PI * r);
	printf("The area of the circle %.2lf\n", M_PI * pow(r, 2));

#endif // TASK2


#ifdef TASK3

	int a, b, c;
	double p;
	printf("Enter the 3 sides of the triangle\n");
	scanf("%d%d%d", &a, &b, &c);
	while (!(a + b > c && a + c > b && b + c > a))
	{
		printf("Cannot be a triangle. Try again\n");
		printf("Enter the 3 sides of the triangle\n");
		scanf("%d%d%d", &a, &b, &c);
	}
	p = (double)(a + b + c) / 2;
	printf("Half of perimeter equals to %.2lf\n", p);
	printf("Perimeter equals to %.2lf\n", p * 2);
	printf("Are of the triangle equals to %.2lf\n", sqrt(p * (p - a) * (p - b) * (p - c)));

#endif // TASK3


#ifdef TASK4

	unsigned long long n = 0, crt = 1;
	printf("Enter the target power\n");
	scanf("%d", &n);
	for (int i = 0; i <= n; ++i)
	{
		printf("2 ^ %2d = %25lld\n", i, crt);
		crt *= 2;
	}

#endif // TASK4


	return 0;
}