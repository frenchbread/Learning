#include <time.h>

#include <stdio.h>

// Tue February 10 2004
// 18:27:38

int main(void) {

    struct tm *tm;

    int n;

    time_t t;

    char buf[257];
    time(&t);

    tm = localtime(&t);

    strftime(buf, sizeof(buf), "%a %B %d %Y \n%H:%M:%S \n" , tm);

    printf("%s", buf);

    return 0;
}
