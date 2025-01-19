#include <assert.h>
#include <stdio.h>

void mitp_triple_int_by_ptr(int * a)
{
	assert(a);
	*a *= 3;
}

void mitp_triple_int(int a)
{
	a *= 3;
}

int main()
{
	int number = 100;
	printf("a: %i\n", number);
	
	mitp_triple_int_by_ptr(&number);
	printf("after mitp_triple_int_by_number()\n");
	printf("a: %i\n", number);
	
	mitp_triple_int(number);
	printf("after mitp_triple_int()\n");
	printf("a: %i\n", number);
	
	return 0;
}
