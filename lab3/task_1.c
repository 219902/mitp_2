#include <stdio.h>

#define MITP_ARR_LEN 5

int main()
{
	int array[MITP_ARR_LEN];
	for(int i = 0; i < MITP_ARR_LEN; ++i)
	{
		printf("Enter number to save in array[%i]: ", i);
		scanf("%i", &array[i]);
	}
	for(int i = 0; i < MITP_ARR_LEN; ++i)
	{
		printf("Array[%i]:\t%i\n", i, array[i]);
	}
	return 0;
}


