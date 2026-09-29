#include <stdio.h>
#include <string.h>

int main() {
    char s[200], t;
    int n, i, j, k;
    fgets(s, 200, stdin);
    n = strlen(s);
    if (n > 0 && s[n - 1] == '\n') {
        s[n - 1] = '\0';
        n--;
    }

    j = 0;
    for (i = 0; i <= n; i++) {
        if (s[i] == ' ' || s[i] == '\0') {
            k = i - 1;
            while (j < k) {
                t = s[j];
                s[j] = s[k];
                s[k] = t;
                j++;
                k--;
            }
            j = i + 1;
        }
    }
    printf("%s", s);
    return 0;
}