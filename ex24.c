#include <stdio.h>
int main()
{
	int c=0,ch=0;
	int paren=0;
	int brac=0;
	int braces=0;
	int comments=0;
	while((c=getchar()) != EOF)
	{
		if(c == '(')
		{
			paren++;
		}
		else if(c == ')')
		{
			paren--;
		}
               else if(c == '[')
                {       
                        brac++;
                }     
	        else if(c == ']')
                {
                        brac--;
                }
		 else if(c == '{')
                {
                        braces++;
                }
		  else if(c == '}')
                {
                        braces--;
                }
		else if(c == '*' && ch == '/')
		{
			comments++;
		}
                   else if(c == '/' && ch == '*')
                {
                        comments--;
                }
                      ch=c;
	}
	if(paren != 0)
	{
		printf("unbalanced parenthesis");
	}
	if(brac != 0)
        {
                printf("unbalanced brackets");
        }
	if(braces != 0)
        {
                printf("unbalanced curly braces");
        }
	if(comments != 0)
        {
                printf("unbalanced comments");
        }

return 0;
}






