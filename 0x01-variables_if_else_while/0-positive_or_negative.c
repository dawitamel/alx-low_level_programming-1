#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
    if(n > 0)
    {
        printf("Number is POSITIVE");
    }
    if(n < 0)
    {
        printf("Number is NEGATIVE");
    }
    if(n == 0)
    {
        printf("Number is ZERO");
    }

	/* your code goes there */
	return (0);
}
