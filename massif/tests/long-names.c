#include <stdio.h>
#include <stdlib.h>
// Long function name. Make sure it is not truncated.


#define A2500 \
abcdefghijABCDEFGHIJabcdefghijABCDEFGHIJabcdefghij\
abcdefghijABCDEFGHIJabcdefghijABCDEFGHIJabcdefghij\
abcdefghijABCDEFGHIJabcdefghijABCDEFGHIJabcdefghij\
abcdefghijABCDEFGHIJabcdefghijABCDEFGHIJabcdefghij\
abcdefghijABCDEFGHIJabcdefghijABCDEFGHIJabcdefghij\
abcdefghijABCDEFGHIJabcdefghijABCDEFGHIJabcdefghij\
abcdefghijABCDEFGHIJabcdefghijABCDEFGHIJabcdefghij\
abcdefghijABCDEFGHIJabcdefghijABCDEFGHIJabcdefghij\
abcdefghijABCDEFGHIJabcdefghijABCDEFGHIJabcdefghij\
abcdefghijABCDEFGHIJabcdefghijABCDEFGHIJabcdefghij\
abcdefghijABCDEFGHIJabcdefghijABCDEFGHIJabcdefghij\
abcdefghijABCDEFGHIJabcdefghijABCDEFGHIJabcdefghij\
abcdefghijABCDEFGHIJabcdefghijABCDEFGHIJabcdefghij\
abcdefghijABCDEFGHIJabcdefghijABCDEFGHIJabcdefghij\
abcdefghijABCDEFGHIJabcdefghijABCDEFGHIJabcdefghij\
abcdefghijABCDEFGHIJabcdefghijABCDEFGHIJabcdefghij\
abcdefghijABCDEFGHIJabcdefghijABCDEFGHIJabcdefghij\
abcdefghijABCDEFGHIJabcdefghijABCDEFGHIJabcdefghij\
abcdefghijABCDEFGHIJabcdefghijABCDEFGHIJabcdefghij\
abcdefghijABCDEFGHIJabcdefghijABCDEFGHIJabcdefghij\
abcdefghijABCDEFGHIJabcdefghijABCDEFGHIJabcdefghij\
abcdefghijABCDEFGHIJabcdefghijABCDEFGHIJabcdefghij\
abcdefghijABCDEFGHIJabcdefghijABCDEFGHIJabcdefghij\
abcdefghijABCDEFGHIJabcdefghijABCDEFGHIJabcdefghij\
abcdefghijABCDEFGHIJabcdefghijABCDEFGHIJabcdefghij\
abcdefghijABCDEFGHIJabcdefghijABCDEFGHIJabcdefghij\
abcdefghijABCDEFGHIJabcdefghijABCDEFGHIJabcdefghij\
abcdefghijABCDEFGHIJabcdefghijABCDEFGHIJabcdefghij\
abcdefghijABCDEFGHIJabcdefghijABCDEFGHIJabcdefghij\
abcdefghijABCDEFGHIJabcdefghijABCDEFGHIJabcdefghij\
abcdefghijABCDEFGHIJabcdefghijABCDEFGHIJabcdefghij\
abcdefghijABCDEFGHIJabcdefghijABCDEFGHIJabcdefghij\
abcdefghijABCDEFGHIJabcdefghijABCDEFGHIJabcdefghij\
abcdefghijABCDEFGHIJabcdefghijABCDEFGHIJabcdefghij\
abcdefghijABCDEFGHIJabcdefghijABCDEFGHIJabcdefghij\
abcdefghijABCDEFGHIJabcdefghijABCDEFGHIJabcdefghij\
abcdefghijABCDEFGHIJabcdefghijABCDEFGHIJabcdefghij\
abcdefghijABCDEFGHIJabcdefghijABCDEFGHIJabcdefghij\
abcdefghijABCDEFGHIJabcdefghijABCDEFGHIJabcdefghij\
abcdefghijABCDEFGHIJabcdefghijABCDEFGHIJabcdefghij\
abcdefghijABCDEFGHIJabcdefghijABCDEFGHIJabcdefghij\
abcdefghijABCDEFGHIJabcdefghijABCDEFGHIJabcdefghij\
abcdefghijABCDEFGHIJabcdefghijABCDEFGHIJabcdefghij\
abcdefghijABCDEFGHIJabcdefghijABCDEFGHIJabcdefghij\
abcdefghijABCDEFGHIJabcdefghijABCDEFGHIJabcdefghij\
abcdefghijABCDEFGHIJabcdefghijABCDEFGHIJabcdefghij\
abcdefghijABCDEFGHIJabcdefghijABCDEFGHIJabcdefghij\
abcdefghijABCDEFGHIJabcdefghijABCDEFGHIJabcdefghij\
abcdefghijABCDEFGHIJabcdefghijABCDEFGHIJabcdefghij\
abcdefghijABCDEFGHIJabcdefghijABCDEFGHIJabcdefghij

void A2500(int n)
{
   if (n > 0) {
      malloc(2000);     // Divisible by 16 -- no slop.
      A2500(n-1);
   }
}

int main(void)
{
   A2500(3);
   return 0;
}

