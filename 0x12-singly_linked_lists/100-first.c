#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - prints a sentence before the main
 * function is executed
 */
void first(void)
{
	printf("You are beat! and yet, you must allow,\n");
	printf("I bore my houses upon my back!\n");
}
