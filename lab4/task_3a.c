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
	
	int arr[x];
	printf("arr address: %p\n", (void *)arr);

	return 0;
}
