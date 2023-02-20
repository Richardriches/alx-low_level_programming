#include <stdlib.h>
#include <time.h>
<<<<<<< HEAD
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
=======
#include <stdio.h>

>>>>>>> 8bfb6889b8ea3527aab5a476aff447d3166b8554
/**
 * main - main fuction
 *
 * Return: always 0
 */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
<<<<<<< HEAD
	/* your code goes there */
	m = n % 10;
	if (m > 5)
		printf("Last digit of %d is %d and is greater than 5", n, m);
	else if (m == 0)
		printf("Last digit of %d is %d and is 0", n, m);
	else if (m < 6 && m != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0", n, m);
	printf("\n");
		 
=======

	if ((n % 10) > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n",
				n, n % 10);
	}
	else if ((n % 10) < 6 && (n % 10) != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
				n, n % 10);
	}
	else 
	{
		printf("Last digit of %d is %d and is 0\n",
				n, n % 10);
	}
>>>>>>> 8bfb6889b8ea3527aab5a476aff447d3166b8554
	return (0);
}
