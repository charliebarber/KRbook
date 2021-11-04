#include <stdio.h>

int main()
  {
    int i, c, state;

    int nlength[12];
    for (i = 0; i < 12; i++)
      nlength[i] = 0;

    while ((c = getchar()) != EOF) {
      int length = 0;
      while (c != ' ' || c != '\n' || c != '\t') {
        length += 1;
      }
      printf("Length is %d", length);
    }
    printf("EOF");
    return 0;
  }
