#include <stdio.h>

int to_seconds (int hours, int minutes, int seconds) {
    int result = 3600 * hours + 60 * minutes + seconds;
    hours = minutes = seconds = 0;
    printf ("Cela fait %d secondes.\n", result);
    return result;
}

int main(void) {
    int hh = 10;
    int mm = 33;
    int ss = 28;
    int total = to_seconds (hh, mm, ss);
    return 0;
}
