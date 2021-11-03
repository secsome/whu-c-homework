#include <stdio.h>
#include <string.h>

#define MAXN 0x200
#define MAXM 10

// MSVC doesn't have this definition... So we add it manually.
extern char* gets(char* str);

static char g_Data_Buffer[MAXM][MAXN] = { 0 };
static int g_Current_Line = 0;

void Revert_Elements(char s[], int l, int r)
{
    char* p1 = s + l;
    char* p2 = s + r;
    char tmp;
    while (p1 < p2)
        tmp = *p1, *p1++ = *p2, *p2-- = tmp;
}

void Process_Line(char s[])
{
    int len = strlen(s);
    Revert_Elements(s, 0, len - 1);
    int lastAlpha = -1, currentAlpha = -1;
    for (int i = 0; i < len; ++i)
        if (s[i] != ' ')
        {
            if (lastAlpha == -1)
                lastAlpha = i;
            currentAlpha = i;
        }
        else
        {
            if (lastAlpha != -1 && currentAlpha != -1)
                Revert_Elements(s, lastAlpha, currentAlpha);
            lastAlpha = -1;
            currentAlpha = -1;
        }
    strcpy(g_Data_Buffer[g_Current_Line++], s);
}

int main()
{
    char Line_Buffer[MAXN] = { 0 };
    while (gets(Line_Buffer) && g_Current_Line != 10)
        Process_Line(Line_Buffer);

    for (int i = 0; i < g_Current_Line; ++i)
        puts(g_Data_Buffer[i]);

    return 0;
}