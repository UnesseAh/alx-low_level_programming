#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print last digit of a number and check whether it's greater than 5, less than 6 or 0.
 * 
 * Return: Always 0 (Success)
 */
 
int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        int LAST_DIGIT = n % 10;
        
        if (LAST_DIGIT > 5)
               printf("Last digit of %d is %d and is greater than 5\n", n, LAST_DIGIT);
        else if ((LAST_DIGIT < 6) && LAST_DIGIT != 0)
                printf("Last digit of %d is %d and is less than 6 and not 0\n", n, LAST_DIGIT);
        else
                printf("Last digit of %d is %d and is 0\n", n, LAST_DIGIT);
        return (0);
}
