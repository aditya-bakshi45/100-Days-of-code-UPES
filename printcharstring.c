
#include <stdio.h>

int main() {
    char str[1000];
    int i = 0;

    fgets(str, sizeof(str), stdin);

    // Remove trailing newline if present
    while (str[i] != '\0') {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
        i++;
    }

    // Print each character on a new line
    i = 0;
    while (str[i] != '\0') {
        printf("%c\n", str[i]);
        i++;
    }

    return 0;
}