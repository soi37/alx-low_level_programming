#include <studio.h>
int main(void)
{
         char c;
         int i;
         long l;
         long long lli;
         float f;
         printf("Size of a char: %1d byte(s)\n", sizeof(c));
         printf("Size of an int: %1d byte(s)\n", sizeof(i));
         printf("Size of a long int: %1d byte(s)\n", sizeof(l));
         printf("Size of a long long int: %1d byte(s)\n", sizeof(lli));
         return(0);
}
