#include <stdio.h>

int main() {
    char s[100];
    int i, sp = 0, dg = 0, sc = 0;

    printf("Enter a string: ");
    gets(s);   // or use fgets(s, 100, stdin);

    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] == ' ') {
            sp++;
        }
        else if (s[i] >= '0' && s[i] <= '9') {
            dg++;
        }
        else if (!((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))) {
            sc++;
        }
    }

    printf("Spaces=%d, Digits=%d, Special=%d\n", sp, dg, sc);

    return 0;
}