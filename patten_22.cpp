#include <stdio.h>
int main() {
   int  i, j, number = 65;
   
   for (i = 65; i <70; i++) {
      for (j = 65; j <= i; ++j) {
         printf("%c ", number);
         ++number;
      }
      printf("\n");
   }
   return 0;
}
