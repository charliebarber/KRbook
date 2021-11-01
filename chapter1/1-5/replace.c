#include <stdio.h>

int main()
  {
    int c;

    while ((c = getchar()) != EOF) {
      int replaced = 0;
      if (c == '\b') {
        putchar('\\');
        putchar('b');
        replaced = 1;
      }
      if (c == '\t') {
        putchar('\\');
        putchar('t');
        replaced = 1;
      }
      if (c == '\\') {
        putchar('\\');
        putchar('\\');
        replaced = 1;
      }
      if (replaced == 0)
        putchar(c);
   }
  }
