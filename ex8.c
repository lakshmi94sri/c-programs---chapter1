#include <stdio.h>
int main()
{
	int  c;
	c=getchar();
	while(c == EOF)
	{
		putchar(c);
		printf("%d", c==EOF);
		c=getchar();
	}
	printf("\n%d\n", c==EOF);
	return 0;
}
