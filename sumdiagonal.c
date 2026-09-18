#include <stdio.h>

int main() {
    int n;
    scanf("%d %d", &n, &n);

    int a[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i][i];
    }

    printf("%d\n", sum);

    return 0;
}