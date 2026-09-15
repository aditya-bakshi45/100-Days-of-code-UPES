#include <stdio.h>

int main() {
    int a[100], i, n, big, second;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    if (a[0] > a[1]) {
        big = a[0];
        second = a[1];
    } else {
        big = a[1];
        second = a[0];
    }

    for (i = 2; i < n; i++) {
        if (a[i] > big) {
            second = big;
            big = a[i];
        } else if (a[i] > second) {
            second = a[i];
        }
    }

    printf("%d\n", second);

    return 0;
}