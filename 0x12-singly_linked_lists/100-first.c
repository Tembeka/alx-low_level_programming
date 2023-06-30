#include <stdio.h>
#include "lists.h"

/**
 * before_main - Constructor function executed before main
 *
 * This function prints the message "You're beat! and yet, you must allow,
 * I bore my house upon my back!" before the main function is executed.
 */

void __attribute__((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow, \nI bore my house upon my back!\n");
}
