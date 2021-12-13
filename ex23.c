#include <stdio.h>
void first(int c);
void second();
void third(int c);
int main()
{
	int c,d;
	while((c=getchar())!=EOF)
		first(c);
	return 0;
}
void first(int c)
{
	int d;
	if(c == '/')
	{
		if((d=getchar())=='*')
		   second();
		else if(d == '/')
		{
			putchar(c);
			first(d);
		}
		else
		{
			putchar(c);
			putchar(d);
		}
	}
	else if(c == '\''|| c == '"')
		third(c);
	else
		putchar(c);
}

void second()
{
	int c,d;
	c=getchar();
	d=getchar();
	while(c != '*' || d != '/')
	{
		c=d;
		d=getchar();
	}
}
void third(int c)
{
	int d;
	putchar(c);
	while((d=getchar()) != c)
	{
		putchar(d);
		if(d == '\\')
		
			putchar(getchar());
		}
putchar(d);
	}

