#include <stdio.h>

#define N 10

int main()
{
    float score[N], sum, min, max, ave;
    int i;
    printf("请输入%d位评委的评分：\n", N);
    printf("请输入第1位评委的评分：\n");
    scanf("%f", score);
    sum = min = max = score[0];
    for (int i = 1; i < N; ++i)
    {
        printf("请输入第%d位评委的评分：\n", i + 1);
        scanf("%f", score + i);
        sum += score[i];
        if (min > score[i])
            min = score[i];
        if (max < score[i])
            max = score[i];
    }
    ave = 0.0;
    for (int i = 0; i < N; ++i)
        ave += score[i];
    ave -= min + max;
    ave /= (N - 2);
    printf("该选手的得分是：%.2f\n", ave);
    return 0;
}