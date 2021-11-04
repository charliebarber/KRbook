#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void squeeze(char s1[], char s2[])
  {
    int i, j, k;

    int notin[sizeof(s1)];

    j = 0;
    for (i = 0; s1[i] != '\0'; i++) {
      bool ins2 = false;
      for (k = 0; s2[k] != '\0'; k++) {
        if (s1[i] == s2[k]) {
          ins2 = true;
        }

      }
      if (!ins2) {
        notin[j++] = s1[i];
      }
    }
    notin[j + 1] = '\0';

    for (int n = 0; n <= strlen(notin); n++)
      printf("%c", notin[n]);
    printf("\n");
  }

int main()
  {
    squeeze("test","t");
  }
