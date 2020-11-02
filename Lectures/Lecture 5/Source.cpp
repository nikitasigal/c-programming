#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
#include <stdlib.h> 
#include <time.h>   

int* AllocateArray(unsigned n)
{
	return (int*)malloc(n * sizeof(int));
}
void FillArray(int* arr, unsigned n)
{
	for (unsigned i = 0; i < n; ++i)
		//scanf("%d", &arr[i]);
		arr[i] = rand() % 201 - 100;
}
void PrintArray(const int* arr, unsigned n)
{
	for (unsigned i = 0; i < n; ++i)
		printf("%d ", arr[i]);
	printf("\n");
}
void FreeArray(int* arr)
{
	free(arr);
}
void CopyArray(int* dst, const int* src, unsigned n)
{
	for (int i = 0; i < n; ++i)
		dst[i] = src[i];
}

int main()
{
	srand((unsigned)time(NULL));
	unsigned n;
	scanf("%u", &n);


	int* arr = NULL;
	//AllocateArray(&arr, n);
	arr = AllocateArray(n);

	int* arr2 = AllocateArray(n);
	FillArray(arr, n);
	PrintArray(arr, n);
	FillArray(arr2, n);
	PrintArray(arr2, n);


	//arr2 = arr; //memory leak && double refernce
	CopyArray(arr2, arr, n);


	PrintArray(arr, n);
	PrintArray(arr2, n);

	FreeArray(arr);
	FreeArray(arr2);
	return 0;
}