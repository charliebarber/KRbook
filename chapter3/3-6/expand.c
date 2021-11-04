#include <stdio.h>
#include <string.h>
#include <ctype.h>

int expand(char s1[], char s2[])
  {
    char start, finish;
    for (int n = 0; n < strlen(s1); n++) {
      if (s1[n] == '-') {
        start = s1[n-1];
        finish = s1[n+1];
      }
    }
    int j;
    if (isalpha(start) || isalnum(start)) {
      for (char i = start, j = 0; i <= finish; i++, j++)
        s2[j] = i;
    }
    else if (isalnum(finish)) {
      for (char i = start, j = 0; i <= finish; i++, j++)
        s2[j] = i;
    }
    }

int main()
  {
    char s1[] = "a-9";
    char s2[100];
    expand(s1,s2);
    printf("%s \n", s2);
  }
