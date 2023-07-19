#include <stdlib.h>
#include <time.h>
#include <stdio.h>
<<<<<<< HEAD
/* more headers goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Sucess)
 */
=======

/**
 * main - Entry point
 * Return: Always 0 (success)
 */

>>>>>>> 2f62d04534a0c24cdff3cd75a1323deac573f752
int main(void)
{
	int n;

<<<<<<< HEAD
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}

=======
	srand(time (0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
>>>>>>> 2f62d04534a0c24cdff3cd75a1323deac573f752
