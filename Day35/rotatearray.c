#include <stdio.h>

int main() {
    int a[100], b[100], i, n, k;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter value of k: ");
    scanf("%d", &k);

    k = k % n;

    for (i = 0; i < n; i++) {
        b[(i + k) % n] = a[i];
    }

    printf("Rotated array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", b[i]);
    }

    return 0;
}