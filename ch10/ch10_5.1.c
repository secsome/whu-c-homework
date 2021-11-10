#include <stdio.h>

typedef struct StudentData
{
    int MathScore;
    int EnglishScore;
} StudentData;

int main()
{
    StudentData data;
    scanf("%d%d", &data.MathScore, &data.EnglishScore);
    printf("%f", (data.MathScore + data.EnglishScore) / 2.0);
    return 0;
}