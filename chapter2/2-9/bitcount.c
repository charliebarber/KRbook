#include <stdio.h>

int main()
  {
    int x = -4;
    x &= (x-1);
    x = x & (x-1);
    /* x = -4 & (-4-1) */
    /* x = -4 & -5 */
    /* x = 1100 & 1011 */
    /*     1011 */
    /*   = 1000 */

    /* x = 9 */
    /* x = 9 & (9-1) */
    /* x = 9 & 8 */
    /* x = 1001 & 1000 */
    /*     1000 */
    /*     1000 */
    printf("%i\n", x);
  }

int bitcount(unsigned x)
  {
    int b;

    for (b=0; x != 0; )
  }
