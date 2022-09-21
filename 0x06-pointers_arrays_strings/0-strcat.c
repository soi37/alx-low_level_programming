#include "main.h"

/**This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte
 *
 * Returns a pointer to the resulting string dest
 *
 * FYI: The standard library provides a similar function: strcat. Run man strcat to learn more.
 */
char* _strcat(char *dest, char *src)
{
	int index =0, dest_len=0;
	while (dest[index++])
		dest_len++;
	for (index =0;src[index];index++)
		dest[dest_len++]=src[index];
	return (dest);

}

