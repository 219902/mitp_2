#include <stdio.h>
#include <stdint.h>
#include <ctype.h>

int main()
{
	const char * TEXT = "To jest dowolny, 123, dowolny, ciag znakow!!!11";
	const char * ptr = TEXT;
	
	uint32_t sum = 0;
	while(*ptr != '\0')
	{
		if(isdigit(*ptr))
		{
			sum++;
		}
		ptr++;
	}
	printf("%i\n", sum);
	return 0;
}
