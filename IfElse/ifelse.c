#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x, y, z, r;
	x = 10;
	y = 5;

	printf("What would you do? sum(1) or subtraction(2): ");
	scanf("%d",&z);

	if(z==1)
	{
		r = x + y;
	}
	else
	{
		r = x - y;
	}

	printf("The final result is: %d", r);
}
