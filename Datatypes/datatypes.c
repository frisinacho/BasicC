#include <stdio.h>
#include <stdlib.h>

int main()
{
	short y;	// -32768 to 32767, 2 bytes
	unsigned short uy;	// 0 to 65535, 2 bytes
	int x;	// 2 bytes
	char c;	// 0 to 127, 1 byte
	long l;	// -214748368 to 214748367, 4 bytes
	float f;	// Decimals, 4 bytes
	double d;	// 8 bytes
	long double ld;	// 10 bytes

	y = 123;
	uy = 61234;
	c = 'A';
	f = 123.45;
	d = -123.45678;
}
