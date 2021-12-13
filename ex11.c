#include <stdio.h>
int main()
{
	int c,blank=0;
	while((c=getchar()) != EOF)
	{
		if(c == ' ')
		{
			if(blank == 0)
			{
				blank = 1;
				putchar(c);
			}
		}
		if(c != ' ')
		{
			blank = 0;
			putchar(c);
		}
	}
	return 0;
}
	
