#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main(void)
{
	printf("Enter a positive number: ");
	int32_t input;
	scanf("%" PRId32, &input);
	for(int32_t i = 0; i <= input; ++i)
	{
		if(i % 4 == 0)
		{
			continue;
		}
		printf("%" PRId32 "\n", i);
	}

	return 0;
}
