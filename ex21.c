#include <stdio.h>
int main()
{
	int i,j,c;
while((c = getchar()) != EOF)
{
	if(c == ' ')
	{
		++i;
		if(i % 5 == 0)
			putchar('\t');
	}
	else
	{
		for(j=0;j<(i%5);j++)
			putchar(' ');
		putchar(c);
	
	if(i != 0)
		i=0;
}
}
}
