#include <stdio.h>
int main()
{
	int c,blank=0,tab=0,line=0;
	while((c=getchar()) != EOF)
			{
				if(c == ' ')
					++blank;
				if(c ==  '\t')
					++tab;
				if(c == '\n')
					++line;
			
			printf("blank=%d,tab= %d,line= %d\n",blank,tab,line);
			}
	return 0;
}
			    
