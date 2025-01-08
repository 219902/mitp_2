#include <inttypes.h>
#include <stdint.h>
#include <stdio.h>

int main(void)
{
	printf("Enter a positive number: ");
	int32_t input;
	scanf("%" PRId32, &input);
	if(input > 0)
	{
		//int64_t sum = input * (input + 1) * 0.5f;
		int64_t sum = 0;
		for(int32_t i = 1; i <= input; ++i)
		{
			sum += i;
		}
		printf("%" PRId64 "\n", sum);

	}
	else
	{
		printf("Number is not positive (negative or zero)!\n");
	}
	
	return 0;
}

