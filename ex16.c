#include <stdio.h>
int get_line(char line[],int maxline);
int main()
{
	int len;
	int max = 0;
	char line[1000];
	while((len=get_line(line,1000)) > 0)
	{
		
		printf("%d",len);
	}
	return 0;
}
int get_line(char s[],int lim)
{
	int c = 0;
	int i = 0;
	for(i = 0; i < lim - 1 && ((c = getchar()) != EOF) && c != '\n';++i)
		s[i] = c;
	if(c == '\n')
		s[i] = c;
	++i;

	s[i] = '\0' ;

	return i;
}

