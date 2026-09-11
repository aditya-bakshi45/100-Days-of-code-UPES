#include <stdio.h>

int main() {
    int a[50], n, x, l, h, m, f = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter number to find: ");
    scanf("%d", &x);

    l = 0;
    h = n - 1;

    while (l <= h) {
        m = (l + h) / 2;

        if (a[m] == x) {
            f = 1;
            break;
        }
        else if (a[m] < x) {
            l = m + 1;
        }
        else {
            h = m - 1;
        }
    }

    if (f == 1) {
        printf("Found at position %d\n", m + 1);
    }
    else {
        printf("Not found\n");
    }

    return 0;
}