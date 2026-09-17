#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int a[r][c];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int sym = 1;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (a[i][j] != a[j][i]) {
                sym = 0;
            }
        }
    }

    if (sym) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}