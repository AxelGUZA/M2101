#include <stdio.h>
#include <string.h>

int main() {
	char hello[] = "Bonjour";
	char letters[16] = "abcdefghijklmnop";
	char numbers[15] = "012345678901234";
	char bye[11] = "Au revoir";
	int x = 15, y = 31;

	printf("hello: %s\n", hello);
	printf("letters: %s\n", letters);
	printf("numbers: %s\n", numbers);
	printf("numbers + 7: %s\n", numbers + 7);
	printf("bye: %s\n", bye);
	return 0;
}

// © Thomas Hugel 2017.
// License: Creative Commons BY-NC-SA 4.0.
