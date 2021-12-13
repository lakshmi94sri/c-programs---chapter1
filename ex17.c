#include<stdio.h>
int get_line(char line[], int max);
void copy(char from[], char to[]);
int main()
{
  int len = 0; 
  char line[1000]; 
  while((len = get_line(line, 1000)) > 0)
    {
      if(len > 81)
	printf("%s\n", line);
    }
  return 0;
}
int get_line(char s[], int lim)
{
  int i = 0; 
  int c = 0; 
  for(i = 0; ((c = getchar()) != EOF) && c != '\n' && i 
< lim - 1; ++i)
    s[i] = c;
  if(c == '\n')
    s[i++] = c;
  s[i] = '\0';
  return i;
}
