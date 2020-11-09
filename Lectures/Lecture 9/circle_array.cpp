#include "circle_array.h"

int AddCircleToArray(CIRCLE_ARRAY* ca, const CIRCLE* c)
{
    if (ca->size == MAX_SIZE)
        return 0;
    ca->arr[ca->size++] = *c;
    return 1;
}

int RemoveCircleFromArray(CIRCLE_ARRAY* ca, const CIRCLE* c)
{
    int cnt = 0;
    for (int i = 0; i < ca->size; ++i)
        if (IsEqualCircle(&ca->arr[i], c))
        {
            ca->arr[i--] = ca->arr[--ca->size];
            cnt++;
        }
    return cnt;
}

void FindConcentric(const CIRCLE_ARRAY* ca)
{
}

void FindNested(const CIRCLE_ARRAY* ca)
{
}

void FindCrossed(const CIRCLE_ARRAY* ca)
{
}

void PrintArray(const CIRCLE_ARRAY* ca)
{
    for (int i = 0; i < ca->size; ++i)
        PrintCircle(&ca->arr[i]);
}
