#include <stdlib.h>
#include <stdio.h>

int main()
{
	int x;
	printf("enter x: ");
	scanf("%i", &x);
	if(x <= 0)
	{
		printf("negative number!\n");
		return 1;
	}
	printf("your x: %i\n", x);
	
	double * arr = malloc(sizeof(double) * (size_t)x);
	if(!arr)
	{
		printf("allocation failed!\n");
		return 2;
	}

	for(size_t i = 0; i < (size_t)x; ++i)
	{
		printf("enter [%lu]: ", i);
		scanf("%lf", &arr[i]);
	}

	for(size_t i = 0; i < (size_t)x; ++i)
	{
		printf("[%lu]: %f\n", i, arr[i]);
	}

	free(arr);

	return 0;
}
