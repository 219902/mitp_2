#include <string.h>
#include <stdio.h>

int main()
{
	const char * HELLO_WORLD = "Hello, World!";
	char tab1[5];
	char tab2[30];
	
	memset(tab1, 0, sizeof(tab1));
	memset(tab2, 0, sizeof(tab2));

	strncpy(tab1, HELLO_WORLD, sizeof(tab1) - 1);
	strncpy(tab2, HELLO_WORLD, sizeof(tab2) - 1);

	printf("%s\n", tab1);
	printf("%s\n", tab2);

	return 0;
}
