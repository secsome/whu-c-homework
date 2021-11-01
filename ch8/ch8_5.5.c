#include <stdio.h>

int Parse_To_CharArray(long long n, char arr[])
{
    if (n == 0)
    {
        arr[0] = 0;
        return 1;
    }
    int i = 0;
    while (n != 0)
    {
        arr[i++] = n % 10;
        n /= 10;
    }
    return i;
}

int main()
{
    long long n, sub;
    scanf("%lld%lld", &n, &sub);

    char arrN[0x20], arrSub[0x20];
    int lenN = Parse_To_CharArray(n, arrN);
    int lenSub = Parse_To_CharArray(sub, arrSub);

    if (lenN < lenSub)
        printf("0\n");
    else
    {
        int counter = 0;
        int flag = 0;
        for (int i = 0; i < lenN; ++i)
        {
            for (int j = i; j < i + lenSub; ++j)
            {
                if (arrN[j] != arrSub[j - i])
                {
                    flag = 1;
                    break;
                }
            }
            if (!flag)
                ++counter;
            flag = 0;
        }
        printf("%d\n", counter);
    }

    return 0;
}