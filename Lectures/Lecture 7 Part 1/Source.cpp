#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define TASK1
int main()
{


#ifdef TASK1
#define SIZE 100
	char str[SIZE] = { 0 };
	fgets(str, SIZE, stdin);
	int len = strlen(str) - 1;
	str[len] = '\0';
	for (int i = 0; i < len; ++i)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 'f' - 'F';
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 'f' - 'F';
	}
	printf("%s", str);

#endif // TASK2

#ifdef TASK2
#define SIZE 100
	char str[SIZE] = { 0 };
	fgets(str, SIZE, stdin);
	int len = strlen(str) - 1;
	str[len] = '\0';
	double d = 0;
	int i = 0;
	sscanf(str, "%lf%d", &d, &i);
	printf("%ld - %d\n", d, i);
	sprintf(str, "%.2lf %s %d %d", "text", i, 40);
	printf("%s", str);

#endif // TASK3


	return 0;
}