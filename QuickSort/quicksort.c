#include <stdio.h>

void qs(int list[], int left_limit, int right_limit)
{
	int left, right, temp, ref;

	left = left_limit;
	right = right_limit;
	ref = list[(left+right)/2];

	do{
		while(list[left]<ref && left<right_limit) left++;
	}while(left>=right);
}
