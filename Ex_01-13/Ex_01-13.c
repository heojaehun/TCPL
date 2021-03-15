#include <stdio.h>

#define IN	1
#define OUT	0
#define MAX_LENGTH 256

void main()
{
	int c, state, count;
    int hist[MAX_LENGTH];

	state = OUT;
    count = 0;

    for (int i = 0; i < MAX_LENGTH; i++)
        hist[i] = 0;

	while((c = getchar()) != EOF)
	{
		if (c == ' ' || c == '\n' || c == '\t')
		{
			if (state == IN)
			{
				state = OUT;
                hist[count]++;
                count = 0;
			}
			else
				continue;
		}
		else
        {
			state = IN;
            count++;
        }
	}

    for (int i = 0; i < MAX_LENGTH; i++)
    {
        if (hist[i] != 0)
            printf("[%2d]: %d\n", i, hist[i]);
    }

}

