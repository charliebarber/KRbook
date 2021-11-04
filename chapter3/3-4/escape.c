#include <stdio.h>
#include <string.h>

void escape(char *s, char *t)
  {
    int i, j;
    i = j = 0;
    while (t[j] != '\0') {
      switch (t[i]) {
        case '\n':
          s[i++] = '\\';
          s[i] = 'n';
          break;
        case '\t':
          s[i++] = '\\';
          s[i] = 't';
          break;
        default:
          s[i] = t[i];
          break;
      }
      i++;
      j++;
    }
    s[i - 1] = '\0';
  }

int main()
  {
    char s[100];
    char t[] = {"Hello\t world\n"};

    escape(s,t);
    printf("Original string is %s \n", t);
    printf("Copied string is %s \n", s);
  }
