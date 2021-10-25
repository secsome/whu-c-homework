#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int FindEvenNumbers(int input[], int ret[]);

int main()
{
    int list[SIZE], even[SIZE], count, i;
    printf("Please input %d digits:\n", SIZE);
    for (int i = 0; i < SIZE; ++i)
        scanf("%d", list + i);

    count = FindEvenNumbers(list, even);
    printf("There are %d evens.\n", count);
    for (int i = 0; i < count; ++i)
        printf("%d ", even[i]);
    putchar('\n');
    system("pause");
    return 0;
}

int FindEvenNumbers(int input[], int ret[])
{
    int idx = 0;
    for (int i = 0; i < SIZE; ++i)
        if (input[i] % 2 != 0)
            ret[idx++] = input[i];
    return idx;
}