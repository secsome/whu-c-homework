#include <stdio.h>

#define MAXN 100

int main()
{
    int isOut[MAXN] = { 0 };
    int n, m, outCount = 0;
    scanf("%d%d", &n, &m);

    int* pCurrent = isOut;
    int t = 0;
    while (outCount < n)
    {
        while (t < m)
        {
            // Find the first one haven't being kicked out
            while (*pCurrent)
                ++pCurrent;
            if (pCurrent == isOut + n) // Iterate this array over and over again
            {
                pCurrent = isOut;
                while (*pCurrent)
                    ++pCurrent;
            }

            // Now pCurrent is just the first one haven't being kicked out yet
            // We just add t, and get into next loop
            ++t;
            ++pCurrent;
        }

        // Now t is equals with m, which means pCurrent is the first guy we have to kick out
        // Set it to 1 indicating that we had looked at it already
        *(pCurrent - 1) = 1;
        ++outCount; // This one had been kicked out, add the counter
        t = 0; // Reset t to 0
        printf("%d ", pCurrent - isOut); // Where this guy sits
    }
    
    return 0;
}