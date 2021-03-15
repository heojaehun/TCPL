#include <stdio.h>

#define ETC 26

int hist[27];
int c, idx;

void main()
{
    for (int i = 0; i < 27; i++)
        hist[0] = 0;

    while((c = getchar()) != EOF)
    {
        if ((c >= 'a') && (c <= 'z'))
            idx = c - 'a';
        else if ((c >= 'A') && (c <= 'Z'))
            idx = c - 'A';
        else
            idx = ETC;

        hist[idx]++;
    }

    for (int i = 0; i < 27; i++)
    {
        if (hist[i] != 0)
        {
            c = i + 'A';

            if (i == ETC)
                c = '?';

            printf("[%c]: %d\n", c, hist[i]);
        }
    }
}
