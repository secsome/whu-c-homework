#include <stdio.h>
#define MAX_SIZE 15
int main()
{
    int magic[MAX_SIZE][MAX_SIZE];
    int cur_i = 0, cur_j;
    int count, size = 0, i, j;
    while (size % 2 == 0)
    {
        printf("\n enter square size(ODD number):");
        scanf("%d", &size);
    }
    cur_j = (size - 1) / 2;
    for (count = 1; count <= size * size; ++count)
    {
        magic[cur_i][cur_j] = count;
        if (count % size == 0)
        {
            cur_i++;
            continue;
        }
        cur_i--;
        cur_j++;
        if (cur_i < 0)
            cur_i += size; // cur_i = size - 1
        if (cur_j >= size)
            cur_j -= size; // cur_j = 0;
    }
    for (i = 0; i < size; ++i)
    {
        for (j = 0; j < size; ++j)
            printf("%d ", magic[i][j]);
        printf("\n");
    }
    return 0;
}