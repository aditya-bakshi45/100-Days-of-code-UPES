#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int i, n, t;

    scanf("%s", s);
    n = strlen(s);

    for (i = 0; i < n / 2; i++) {
        t = s[i];
        s[i] = s[n - 1 - i];
        s[n - 1 - i] = t;
    }

    printf("%s\n", s);

    return 0;
}