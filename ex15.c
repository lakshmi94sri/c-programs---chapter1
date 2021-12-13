#include <stdio.h>
float ftoc(float f)
{
	float c;
	c=(5.0/9.0) * (f-32.0);
	return c;
}
int main()
{
	float fahr,celsius;

	for(fahr=0;fahr<=300;fahr=fahr+20)
	{
		celsius=ftoc(fahr);
		printf("%3.0f %6.1f\n",fahr,celsius);
	}
	return 0;
}

