#include <stdio.h>

int main() {
    char s[100];
    int i;

    printf("Enter a string: ");
    gets(s);   // or use fgets(s, 100, stdin);

    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] == ' ') {
            s[i] = '-';
        }
    }

    printf("%s\n", s);

    return 0;
}