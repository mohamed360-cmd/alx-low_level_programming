#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, n = 50, prev = 1, curr = 2, next;

	printf("%d, %d", prev, curr);
	for (i = 2; i < n; i++) 
	{
        	next = prev + curr;
        	printf(", %d", next);
        	prev = curr;
        	curr = next;
        }
	printf("\n");
	return 0;
}

