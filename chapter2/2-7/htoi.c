#include <stdio.h>
#include <string.h>
#include <ctype.h>

int htoi(char s[]) {
  int length = strlen(s);
  int sum = 0;

  for (int i = 0; s[i] != '\0'; i++) {
    if (i == 1 && s[0] == '0' && s[1] == 'x')
      sum = 0;
    else if ((s[i] - '0') >= 0 && (s[i] - '0') <= 9) {
      sum = sum*16 + (s[i] - '0');
      }
    else if (tolower(s[i]) >= 'a' && tolower(s[i]) <= 'f')
      sum = sum*16 + (tolower(s[i]) - 'a' + 10);
  }
  printf("%i\n", sum);
}

int main()
  {
    char hex[] = "0x123A";
    htoi(hex);
  }
