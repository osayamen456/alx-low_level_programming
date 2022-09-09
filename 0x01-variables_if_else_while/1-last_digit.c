#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - this is the beginning of the code
 *
 * Return: 0 (success)
 *
 */
int main(void)
{
	int n;
	int ans;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ans = n % 10;

	if (ans > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, ans);
	else if (ans == 0)
		printf("Last digit of %i is %i and is 0\n", n, ans);
	else if (ans < 6 && ans != 0)
		printf("Last digit of %i is %i and is less than 6 and not 0\n",
				n, ans);
	return (0);
}
