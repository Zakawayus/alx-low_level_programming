#include "holberton.h"

/**
 * swap_int -swap the values of two integers
 * @a: int pointer type
 *
 * @b: int pointer type
 *
 *Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int swap;


	swap = *a;
	*a = *b;
	*b = swap;
}
