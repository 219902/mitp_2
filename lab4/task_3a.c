#include <stdlib.h>
#include <stdio.h>

#ifndef __STDC_NO_VLA__
	#define __STDC_NO_VLA__ 1
#endif

int main()
{
	size_t x;
	printf("enter x: ");
	scanf("%lu", &x);
	printf("your x: %lu\n", x);
	
	int arr[x*100000000];
	printf("array created! ptr to first element %p\n",(void *)arr);

	return 0;
}
