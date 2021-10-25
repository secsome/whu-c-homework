#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int list[SIZE], even[SIZE], count;

void FindEvenNumbers();

int main()
{
    printf("Please input %d digits:\n", SIZE);
    for (int i = 0; i < SIZE; ++i)
        scanf("%d", list + i);

    FindEvenNumbers();
    printf("There are %d evens.\n", count);
    for (int i = 0; i < count; ++i)
        printf("%d ", even[i]);
    putchar('\n');
    system("pause");
    return 0;
}

void FindEvenNumbers()
{
    int idx = 0;
    for (int i = 0; i < SIZE; ++i)
        if (list[i] % 2 != 0)
            even[idx++] = list[i];
    count = idx;
}