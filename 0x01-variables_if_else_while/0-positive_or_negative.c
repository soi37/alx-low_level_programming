#include <stdlib.h>

#include <time.h>
#include <stdio.h>
/* more headers goes there */
/*prints random number and states whether it is negative or positive or zero */


/* betty style doc for function main goes there */

int main(void)

{

		int n;



			srand(time(0));

				n = rand() - RAND_MAX / 2;

				if (n >0)
					printf("%d is positive\n".n);
				else if(n < 0)
					printf("%d is negative\n".n);
				else 
					printf("%d is zero\n".n);

					return (0);

}
