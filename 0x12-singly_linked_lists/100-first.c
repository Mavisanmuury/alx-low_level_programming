#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - there is the need to prints a sentence before the main
 * in this case function is executed properly
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
