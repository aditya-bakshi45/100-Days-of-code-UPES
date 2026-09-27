#include <stdio.h>
#include <string.h>

int main() {
    char s[200], longest[200], word[200];
    int i, j, k, len;

    printf("Enter sentence: ");
    fgets(s, sizeof(s), stdin);

    len = strlen(s);
    if (s[len - 1] == '\n')
        s[len - 1] = '\0';

    i = 0;
    longest[0] = '\0';

    while (s[i] != '\0') {
        j = 0;

        while (s[i] != ' ' && s[i] != '\0') {
            word[j] = s[i];
            j++;
            i++;
        }
        word[j] = '\0';

        if (strlen(word) > strlen(longest)) {
            for (k = 0; k <= j; k++)
                longest[k] = word[k];
        }

        if (s[i] == ' ')
            i++;
    }

    printf("%s\n", longest);

    return 0;
}