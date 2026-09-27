#include <stdio.h>
#include <string.h>

int main() {
    char a[100], b[100];
    int c1[26] = {0}, c2[26] = {0};
    int i, n1, n2, flag = 1;

    printf("Enter first string: ");
    scanf("%s", a);
    printf("Enter second string: ");
    scanf("%s", b);

    n1 = strlen(a);
    n2 = strlen(b);

    if (n1 != n2) {
        printf("Not anagrams\n");
        return 0;
    }

    for (i = 0; i < n1; i++)
        c1[a[i] - 'a']++;

    for (i = 0; i < n2; i++)
        c2[b[i] - 'a']++;

    for (i = 0; i < 26; i++) {
        if (c1[i] != c2[i]) {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
        printf("Anagrams\n");
    else
        printf("Not anagrams\n");

    return 0;
}