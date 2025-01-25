#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

struct Point
{
	int x;
	int y;
};

void mitp_print_points(struct Point * in, size_t n)
{
	assert(in);
	printf("in function\n");
	for(size_t i = 0; i < n; ++i)
	{
		printf("[%lu] x: %i, y: %i\n", i, in[i].x, in[i].y);
	}
}

int main()
{
	size_t x;
	printf("enter size: ");
	scanf("%lu", &x);
	if(x <= 0)
	{
		printf("x: %lu is negative!\n", x);
		return 1;
	}

	struct Point * p = malloc(sizeof(struct Point) * x);
	if(!p)
	{
		printf("allocation failed!\n");
		return 2;
	}

	for(size_t i = 0; i < x; ++i)
	{
		printf("enter [%lu].x: ", i);
		scanf("%i", &p[i].x);
		printf("enter [%lu].y: ", i);
		scanf("%i", &p[i].y);
	}

	printf("\n");
	for(size_t i = 0; i < x; ++i)
	{
		printf("[%lu] x: %i, y: %i\n", i, p[i].x, p[i].y);
	
	}
	printf("\n");
	mitp_print_points(p, x);
	
	free(p);

	return 0;
}
