#include <stdio.h>

void main()
{
	int c;
	int ns = 0;

	while((c = getchar()) != EOF)
	{
		if (c == ' ')
		{
			ns++;

			if (ns >= 2)
				continue;
		}
		else
			ns = 0;

		putchar(c);
	}
}
