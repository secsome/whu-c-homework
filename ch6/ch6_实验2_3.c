#include <stdio.h>

int main()
{
    int score[5][7], sum[5], aver[5];
    int i, j, high = 1, low = 1, sh, sl;
    printf("input score:\n");
    for (i = 1; i < 5; ++i)
        for (j = 1; j < 7; ++j)
        {
            scanf("%d", &score[i][j]);
            if (score[i][j] < 0 || score[i][j]>100)
            {
                printf("Invalid score!\n");
                return 0;
            }
        }

    for (i = 0; i < 5; ++i)
    {
        sum[i] = 0;
        for (j = 1; j < 7; ++j)
            sum[i] += score[i][j];
        aver[i] = sum[i] / 6;
    }
    sh = sl = sum[1]; 
    for (i = 2; i < 5; ++i)
    {
        if (sum[i] < sl)
        {
            sl = sum[i];
            low = i;
        }
        if (sum[i] > sh)
        {
            sh = sum[i];
            high = i;
        }
    }
    printf("%d�ܷ����\n%d�ܷ����\n", high, low);

    printf("������ѧ��ѧ�ţ�");
    scanf("%d", &i);
    while (i < 1 || i>4)
    {
        printf("���������룺\n");
        scanf("%d", &i);
    }
    for (j = 1; j < 7; ++j)
        printf("%d ", score[i][j]);
    printf("ƽ���ɼ���%d\n", aver[i]);

    printf("�����뿼�Դ�����");
    scanf("%d", &j);
    while (j < 1 || i>6)
    {
        printf("���������룺\n");
        scanf("%d", &j);
    }
    aver[0] = 0;
    for (i = 1; i < 5; ++i)
    {
        printf("%d ", score[i][j]);
        aver[0] += score[i][j];
    }
    aver[0] /= 4;
    printf("ƽ���ɼ���%d\n", aver[0]);
    
    return 0;
}