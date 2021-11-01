#include <stdio.h>

#define MAXN 100

int Read_An_Array(int array[])
{
    int nLength;
    scanf("%d", &nLength);
    for (int i = 0; i < nLength; ++i)
        scanf("%d", array + i);
    return nLength;
}

void Merge_Two_Array(int a[], int lenA, int b[], int lenB)
{
    int temp[MAXN];
    for (int i = 0; i < lenA; ++i)
        temp[i] = a[i];

    int* ptr = a;
    int* p = temp;
    int* q = b;

    while (p < temp + lenA || q < b + lenB)
    {
        *ptr++ = *p > *q ? *q++ : *p++;

        if (p == temp + lenA)
        {
            for (; q < b + lenB; ++q)
                *ptr++ = *q;
            return;
        }
        if (q == b + lenB)
        {
            for (; p < temp + lenA; ++p)
                *ptr++ = *p;
            return;
        }
    }
}

int main()
{
    int arrayA[MAXN], arrayB[MAXN];
    int nLengthA = Read_An_Array(arrayA);
    int nLengthB = Read_An_Array(arrayB);
    
    Merge_Two_Array(arrayA, nLengthA, arrayB, nLengthB);
    for (int i = 0; i < nLengthA + nLengthB; ++i)
        printf("%d ", arrayA[i]);
    
    return 0;
}