#include <stdio.h>
#define N 30
int main()
{
    float a[N], temp, ave, sum = 0;
    int i, j, flag;
    printf("������%d������\n", N);
    for (i = 0; i < N; ++i)
        scanf("%f", a + i);
    for (i = 0; i < N; ++i)
    {
        for (j = i; j < N; ++j)
        {
            flag = 0;
            if (a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            flag = 1;
        }
        if (!flag)
            break;
    }
    for (i = 0; i < N; ++i)
        printf("%f ", a[i]);
    printf("\n");

    for (i = 0; i < N; ++i)
        sum += a[i];
    ave = sum / N;
    printf("ƽ���ɼ�Ϊ��%f\n", ave);

    sum = 0;
    for (i = 0; i < N; ++i)
        if (a[i] > ave)
            ++sum;

    printf("����ƽ���ֵ�����Ϊ��%.0f\n", sum);

    return 0;
}