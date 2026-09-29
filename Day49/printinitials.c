#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int n, i;
    fgets(s, 100, stdin);
    n = strlen(s);
    if (n > 0 && s[n - 1] == '\n') {
        s[n - 1] = '\0';
        n--;
    }

    for (i = 0; i < n; i++) {
        if (s[i] != ' ' && (i == 0 || s[i - 1] == ' ')) {
            printf("%c.", s[i]);
        }
    }
    return 0;
}