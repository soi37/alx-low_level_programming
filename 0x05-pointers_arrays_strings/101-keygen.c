Task 11.txt

Who has access

A

System properties

Type

Text

Size

322 bytes

Storage used

322 bytes

Location

pointers arrays and strings

Owner

Antony Bahati

Modified

10:21 PM by Antony Bahati

Opened

12:56 AM by me

Created

10:22 PM

No description

Viewers can download

#include <stdio.h>

#include <stdlib.h>

#include <time.h>

#include "main.h"



/**

 * main - entry point

 *

 * Return: generated password

 */



int main(void)

{

	char c;

	int x;



	srand(time(0));

	while (x <= 2645)

	{

		c = rand() % 128;

		x += c;

		putchar(c);

	}

	putchar(2772 - x);



	return (0);

}
