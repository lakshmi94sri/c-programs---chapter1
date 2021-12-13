#include <stdio.h>
int main()
{
	int i,c;
	while((c = getchar()) != EOF)
	{
		i++;
		if(c == '\n')
			i = 0;
		if(c == '\t')
		{
			while(i%4 != 0)
			{
				putchar(' ');
				i++;
			}
		}
		else
			putchar(c);
	}
}
