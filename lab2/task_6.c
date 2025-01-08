#include <stdio.h>
#include <stdint.h>

int main(void)
{
	printf("Enter a positive number: ");
	uint32_t input;
	scanf("%u", &input);

	uint32_t positions = (input * 2) - 1;
	for(uint32_t i = 0; i < input; ++i)
	{
		uint32_t empty = (positions - 1 - (i * 2));
		for(uint32_t a = 0; a < (empty / 2); ++a)
		{
			printf(" ");
		}
		for(uint32_t b = 0; b < (positions - empty); ++b)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
