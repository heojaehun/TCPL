#include <stdio.h>

#define IN	1
#define OUT	0

void main()
{
	int c, state;

	state = OUT;

	while((c = getchar()) != EOF)
	{
		if (c == ' ' || c == '\n' || c == '\t')
		{
			if (state == IN)
			{
				c = '\n';
				state = OUT;
			}
			else
				continue;
		}
		else
			state = IN;
		putchar(c);
	}
}

