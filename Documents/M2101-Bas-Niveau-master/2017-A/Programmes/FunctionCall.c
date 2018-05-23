#include <stdio.h>

int to_seconds (int hours, int minutes, int seconds) {
	int result = hours + 60 * minutes + 3600 * seconds;
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

// © Thomas Hugel 2017.
// License: Creative Commons BY-NC-SA 4.0.
