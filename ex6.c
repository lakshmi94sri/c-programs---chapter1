#include <stdio.h>
int main()
{
	float fahr,celsius;
	printf("C\t   F");
	printf("\n");
	for(celsius=0;celsius <= 300; celsius+=40)
	{
		fahr= (9.0/5.0) * celsius+32;
	 printf("%3.0f %6.1f\n",fahr,celsius);
	}
return 0;
}
