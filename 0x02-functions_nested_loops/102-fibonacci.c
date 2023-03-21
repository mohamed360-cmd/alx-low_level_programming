#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i, n = 50;
    long int prev = 1, curr = 2, next;

    printf("%ld, %ld", prev, curr);

    for (i = 2; i < n; i++)
    {
        next = prev + curr;
        printf(", %ld", next);
        prev = curr;
        curr = next;
    }

    printf("\n");

    return (0);
}
