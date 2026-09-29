#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int n, i, j, k, f;
    scanf("%s", s);
    n = strlen(s);

    f = 0;
    for (i = 0; i < n; i++) {
        for (j = i; j < n; j++) {
            if (f == 1) {
                printf(",");
            }
            for (k = i; k <= j; k++) {
                printf("%c", s[k]);
            }
            f = 1;
        }
    }
    return 0;
}