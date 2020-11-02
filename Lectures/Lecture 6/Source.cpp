#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define SIZE 1000
int StrLen(const char* s)
{
	int l = 0;
	while (s[l++]);
	return l - 1;
}
void StrCpy(char* dest, const char* source)
{
	while (*dest++ = *source++);
}
void StrCat(char* dest, const char* source)
{
	StrCpy(dest + StrLen(source), source);
}
int StrCmp(const char* s1, const char* s2)
{
	for (; *s1 && *s2; s1++, s2++)
		if (*s1 > * s2)
			return 1;
		else if (*s1 < *s2)
			return -1;
	if (*s1 && !*s2)
		return 1;
	else if (!*s1 && *s2)
		return -1;
	return 0;
}

int main()
{
	char s[SIZE] = { 0 };
	fgets(s, SIZE, stdin);
	//s[StrLen(s) - 1] = 0;
	s[strlen(s) - 1] = 0;
	printf("%s\n", s);

	char* d = (char*)malloc((strlen(s) + 1) * sizeof(char));
	//StrCpy(d, s);
	strcpy(d, s);
	d[0] = 'A';
	printf("\n%s\n", s);
	printf("%s\n", d);


	//StrCat(s, ", world");
	strcat(s, ", world");
	printf("\n%s\n", s);

	char* temp = (char*)malloc((strlen(s) * 5 + 1) * sizeof(char));
	strcpy(temp, s);
	free(d);
	d = temp;
	printf("%s\n", d);

	//printf("%s\n", !StrCmp(s, d) ? "Yes" : "No");
	printf("%s\n", !strcmp(s, d) ? "Yes" : "No");

	free(d);
	return 0;
}