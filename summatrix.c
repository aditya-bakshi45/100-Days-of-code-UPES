
#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int a[r][c];
    int rowsum[r];

    for (int i = 0; i < r; i++) {
        rowsum[i] = 0;
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
            rowsum[i] += a[i][j];
        }
    }

    for (int i = 0; i < r; i++) {
        printf("%d ", rowsum[i]);
    }
    printf("\n");

    return 0;
}