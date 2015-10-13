#include <stdio.h>
#include <stdlib.h>

int main()
{
	enum cars{
		chevy,		// 0
		toyota,		// 1
		ferrari,	// 2
		bmw,		// 3
		mercedes	// 4
	}c1,c2,c3,c4,c5;

	c1 = ferrari;
	c2 = bmw;

	printf("%d", c2);	// It shows the order value: c2=3
}
