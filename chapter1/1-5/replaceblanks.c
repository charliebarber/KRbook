#include <stdio.h>

int main()
  {
    int c;
    int lastChar = 0;

    while((c = getchar()) != EOF) {
      if (c != ' ' || lastChar != ' ') {
        putchar(c);
        lastChar = c;
      }
    }
  }
