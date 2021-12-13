#include <stdio.h>
int main()

{
	char line[1000];
	int i;
	for(i=0;i<1000;i++)
	{
		line[i]='\0';
	}
	int c,len=0,pos=0;
	while((c=getchar()) != EOF)
	{
		if(c == ' ' || c == '\t' || c == '\n')
		{
			line[pos]='\0';
			if(len+pos >= 80)
			{
				printf("\n");
				len=pos;
			}
			else
			{
				if(c == '\t')
					len=len+4;
				if(c == '\n')
					len=0;
				else
					++len;
			}
			printf("%s",line);
				putchar(c);
				pos=0;
			}
			else
			{
				line[pos]=c;
				++pos;
			}
			++len;
		}
	}

