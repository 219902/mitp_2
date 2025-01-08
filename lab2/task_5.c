#include <stdio.h>
#include <stdint.h>

int main(void)
{
	printf("Enter a positive number: ");
	uint32_t input;
	scanf("%u", &input);
	if((input % 3 == 0)  && (input % 5 == 0))
	{
		printf("3 and 5\n");
	}
	else if(input % 3 == 0)
	{
		printf("only 3\n");
	}
	else if(input % 5 == 0)
	{
		printf("only 5\n");
	}
	else
	{
		printf("none\n");
	}

	return 0;
}
