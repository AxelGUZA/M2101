#include <stdio.h>

int main(void) {
    char message[] = "Bonjour le Limousin !\n";
    for (int i = 0; i < 10; ++i) {
        printf("%s", message);
    }
    return 0;
}
