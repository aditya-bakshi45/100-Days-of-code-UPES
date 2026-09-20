#include <stdio.h>

int main() {
    char str[1000];
    int count = 0;

    fgets(str, sizeof(str), stdin);

    // Remove trailing newline if present
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
        i++;
    }

    // Count characters without using strlen()
    i = 0;
    while (str[i] != '\0') {
        count++;
        i++;
    }

    printf("%d\n", count);

    return 0;
}