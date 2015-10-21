#include <time.h>
#include <stdio.h>

char *output[] = {
  "%x %X",
  "%a %D %M %u",
  "%r"
};

int main (void) {

  struct tm *tm;
  int n;
  time_t t;
  char buf[257];
  time(&t);
  tm = localtime(&t);

    for (n = 0; n < 3; n++) {

      strftime(buf, sizeof(buf), output[n], tm);

      printf("%s = %s\n", output[n], buf);

    }

  return 0;
}
