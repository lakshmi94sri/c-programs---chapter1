#include <stdio.h>
#include <string.h>
int main()
{
	char str[]="hello world";
	int i,j;
	int len=strlen(str);
	int freq[len];

	for (i = 0; i < len; ++i)
	{
	    freq[i] = 1;
         for(j = i+1; j <len; ++j)
	 {
                 if(str[i] == str[j])
	             {
	                 freq[i]++;
                         str[j] = '0';
		     }
	 }
	}
         

for(i = 0; i < len; ++i)
{
     if(str[i] != ' ' && str[i] != '0')
     {
printf("%c - %d\n", str[i],freq[i]);
     }
}
return 0;
}
