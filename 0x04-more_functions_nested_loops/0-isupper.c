#include "main.h"
#include <stdio.h>

/**
 * _isupper - Entry point
 *@c: charater to check
 * Return: if is lower or upper return 1 else 0
 */

int _isupper(int c)
{

	int m;

	if (c >= 'A' && c <= 'Z')

	{

		m = 1;

	}

	else

	{

		m = 0;

	}

	return (m);

}
