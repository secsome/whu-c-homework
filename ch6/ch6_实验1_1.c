#include <stdio.h>

#define N 10

int main()
{
    float score[N], sum, min, max, ave;
    int i;
    printf("������%dλ��ί�����֣�\n", N);
    printf("�������1λ��ί�����֣�\n");
    scanf("%f", score);
    sum = min = max = score[0];
    for (int i = 1; i < N; ++i)
    {
        printf("�������%dλ��ί�����֣�\n", i + 1);
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
    printf("��ѡ�ֵĵ÷��ǣ�%.2f\n", ave);
    return 0;
}