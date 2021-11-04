#include <stdio.h>
#include <string.h>

int any(char s1[], char s2[])
  {
    int i, j;

    for (i = 0; i < strlen(s1); i++) {
      for (j = 0; j < strlen(s2); j++) {
        if (s1[i] == s2[j]) {
          return i;
        }
      }
    }
    return -1;
  }

int main()
  {
    printf("%i\n", any("test", "e"));
    printf("%i\n", any("test", "st"));
    printf("%i\n", any("test", "T"));
    return 0;
  }
