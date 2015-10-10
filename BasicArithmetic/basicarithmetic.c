#include <stdio.h>
#include <stdlib.h>

int main()
{
	float x, y, z;
	printf("Give me one number: ");
	scanf("%f",&x);
	printf("Give me another number: ");
	scanf("%f",&y);
	printf("\n");
	
	z = x + y;
	printf("The sum of %f and %f is %f\n", x, y, z);

	z = x - y;
	printf("The subtraction of %f and %f is %f\n", x, y, z);
}
