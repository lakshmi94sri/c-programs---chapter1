#include <stdio.h>
int main(){
	int c,state=0;
	while((c = getchar()) != EOF)
	{
		if(c == ' ' || c == '\n' || c == '\t')
		{
			state = 0;
		}
		else if(state == 0)
		{
			state = 1;
			putchar(c);
		}
		else
		{
			putchar(c);
		}
	}
	return 0;
}

