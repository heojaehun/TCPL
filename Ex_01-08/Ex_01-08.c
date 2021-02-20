#include <stdio.h>

void main()
{
	int c;
	int nc, nl, ns, nt;

	nc = 0;
	nl = 0;
	ns = 0;
	nt = 0;

	while((c = getchar()) != EOF)
	{
		if (c == '\n')
			nl++;
		else if (c == ' ')
			ns++;
		else if (c == '\t')
			nt++;
		else
			nc++;
	}

	printf("[characters]: %d\n", nc);
	printf("[lines     ]: %d\n", nl);
	printf("[spaces    ]: %d\n", ns);
	printf("[tabs      ]: %d\n", nt);
}
