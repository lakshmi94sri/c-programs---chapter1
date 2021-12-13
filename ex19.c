#include<stdio.h>
int get_line(char line[], int max);
void reverse(char rline[]);
int main(void)
{
  int len;
  char line[1000];
  while((len = get_line(line, 1000)) > 0 )
  {
    reverse(line);
    printf("%s",line);
  }

  return 0;
}
int get_line(char s[],int lim)
{
  int i,c;
  for(i=0; i<lim-1 && (c=getchar()) != EOF && c != '\n'; ++i)
    s[i] = c;

  if( c == '\n')
  {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';

  return i;
}
void reverse(char rline[])
{
  int i,j;
  char temp;

  for(i=0;rline[i]!='\0';++i);
    {

  --i;
  }if(rline[i]=='\n') --i;
  j = 0;

  while(j < i)
  {
    temp = rline[j];
    rline[j] = rline[i];
    rline[i] = temp;
    --i;
    ++j;
  }
}

