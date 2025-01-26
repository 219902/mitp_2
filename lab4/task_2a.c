#include <stdio.h>

struct Point
{
	int x;
	int y;
};

void mitp_print_point(struct Point * in)
	{
	printf("(from function) x: %i, y: %i\n", in->x, in->y);

}

int main()
{
	struct Point p = {.x=79, .y=420};
	printf("(from main) x: %i, y: %i\n", p.x, p.y);
	mitp_print_point(&p);

	return 0;
}
