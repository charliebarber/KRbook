#include <stdio.h>

int main()
  {
    int s[100];
    int lim = 100;
    int i, c;
    for (i = 0; (c = getchar()) != EOF; ++i) {
      if (i < lim - 1)
        if (c != '\n')
          s[i] = c;
    }
  }
