#include <stdlib.h>
#include <stdio.h>

int main()
{
	size_t x;
	printf("enter x: ");
	scanf("%lu", &x);
	printf("x: %lu\n", x);

	double * arr = malloc(sizeof(double) * x * 100000000);
	if(!arr)
	{
		printf("allocation failed!\n");
		return 2;
	}
	free(arr);

	return 0;
}
