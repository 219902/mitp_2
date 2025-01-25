#include <assert.h>
#include <stdio.h>

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
		printf("[%li] x: %i, y: %i\n", i, in[i].x, in[i].y);
	}
}

int main()
{
	struct Point p[3] = { {.x=42, .y=420}, {.x=79, .y=97}, {.x=0, .y=123}};
	printf("in main\n");
	for(size_t i = 0; i < 3; ++i)
	{
		printf("[%li] x: %i, y: %i\n", i, p[i].x, p[i].y);
	}

	mitp_print_points(p, 3);

	return 0;
}
