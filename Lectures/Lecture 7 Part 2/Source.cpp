/*
	Lecture 7 Part 2 - Includes files
	3 command line args - 1.txt 2.txt 3.txt
*/

#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define SIZE 1000

void crypt(FILE* fr, FILE* fw)
{
	long length = 0;
	fseek(fr, 0L, SEEK_END);
	length = ftell(fr);
	fseek(fr, 0L, SEEK_SET);
	unsigned char key = 255;
	for (int i = 0; i < length; ++i)
	{
		unsigned char symbol = fgetc(fr);
		symbol ^= key--;
		fputc(symbol, fw);
	}
}

int main(int argc, char* argv[])
{
	if (argc < 4)
	{
		printf("Wrong command format\n");
		return -1;
	}
	FILE* fr = fopen(argv[1], "rb");
	if (!fr)
	{
		printf("Cannot open the file for reading\n");
		return -2;
	}
	FILE* fw = fopen(argv[2], "wb");
	if (!fw)
	{
		printf("Cannot open the file for writing\n");
		return -3;
	}
	crypt(fr, fw);
	fclose(fr);
	fclose(fw);



	fr = fopen(argv[2], "rb");
	if (!fr)
	{
		printf("Cannot open the file for reading\n");
		return -2;
	}
	fw = fopen(argv[3], "wb");
	if (!fw)
	{
		printf("Cannot open the file for writing\n");
		return -3;
	}
	crypt(fr, fw);
	fclose(fr);
	fclose(fw);
	return 0;
}