#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int n, i, l;
    fgets(s, 100, stdin);
    n = strlen(s);
    if (n > 0 && s[n - 1] == '\n') {
        s[n - 1] = '\0';
        n--;
    }

    l = -1;
    for (i = 0; i < n; i++) {
        if (s[i] == ' ') {
            l = i;
        }
    }

    for (i = 0; i < l; i++) {
        if (s[i] != ' ' && (i == 0 || s[i - 1] == ' ')) {
            printf("%c.", s[i]);
        }
    }
    if (l >= 0) {
        printf(" ");
    }
    printf("%s", s + l + 1);
    return 0;
}