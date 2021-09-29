#include <stdio.h>

int main()
{
    int classroom;
    scanf("%d", &classroom);

    int result = -1;
    switch (classroom)
    {
    case 21:
        result = 45;
        break;
    case 22:
        result = 51;
        break;
    case 23:
        result = 48;
        break;
    case 24:
        result = 46;
        break;
    case 25:
        result = 48;
        break;
    case 26:
        result = 52;
        break;
    }

    printf("%d", result);

    return 0;
}