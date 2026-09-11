#include <stdio.h>

int main() {
    int a[50], n, x, i, j;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter elements in sorted order: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter number to insert: ");
    scanf("%d", &x);

    i = 0;
    while (i < n && a[i] < x) {
        i++;
    }

    for (j = n; j > i; j--) {
        a[j] = a[j - 1];
    }

    a[i] = x;
    n++;

    printf("Array after insertion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}