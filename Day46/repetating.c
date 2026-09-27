#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int c[26] = {0};
    int i, n, found = 0;

    printf("Enter string: ");
    scanf("%s", s);

    n = strlen(s);

    for (i = 0; i < n; i++) {
        if (c[s[i] - 'a'] == 1) {
            printf("%c\n", s[i]);
            found = 1;
            break;
        }
        c[s[i] - 'a']++;
    }

    if (found == 0)
        printf("No repeating character\n");

    return 0;
}