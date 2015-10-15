#include <stdio.h>

void qs(int list[], int left_limit, int right_limit)
{
	int left, right, temp, ref;

	left = left_limit;
	right = right_limit;
	ref = list[(left+right)/2];

	do{
		while(list[left]<ref && left<right_limit) left++;
		while(ref<list[right] && right>left_limit) right--;
		if (left <= right)
		{
			temp = list[left];
			list[left] = list[right];
			list[right] = temp;
			left++;
			right--;
		}
	}while(left<=right);
	
	if(left_limit < right){qs(list, left_limit, right);}
	if(right_limit > left){qs(list, left, right_limit);}
}

void quicksort(int list[], int n)
{
	qs(list, 0, n-1);
}

int main(int argc, const char * argv[])
{
	int list[] = {100,56,0,1,-45,2,46,5,9,6,67,23,5];
	int size = sizeof(list)/sizeof(int);

	printf("Unordered list:\n");
	for(int i=0; i<size; i++){
		printf("%d",lista[i]);
		if(i<size-1)
			printf(",");
	}

	printf("\n");

}
