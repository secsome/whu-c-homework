#include <stdio.h>

typedef struct _DayTimeType
{
    int Year;
    int Month;
    int Day;
} DayTimeType;

int Is_Leap_Year(int year)
{
    if (year % 100 == 0)
        return year % 400 == 0;
    else
        return year % 4 == 0;
}

int Get_Days_In_Month(int year, int month)
{
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        return 31;
    case 4:
    case 6:
    case 9:
    case 11:
        return 30;
    default:
        return Is_Leap_Year(year) ? 29 : 28;
    }
}

int main()
{
    DayTimeType dt;
    scanf("%d%d%d", &dt.Year, &dt.Month, &dt.Day);

    int count = 0;
    for (int i = 1; i < dt.Month; ++i)
        count += Get_Days_In_Month(dt.Year, i);
    count += dt.Day;

    printf("%d", count);
    return 0;
}