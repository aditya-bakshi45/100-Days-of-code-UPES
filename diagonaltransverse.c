Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/#include <stdio.h>

void diag(int a[10][10], int r, int c) {
    int d, i, j, lo, hi;

    for (d = 0; d <= r + c - 2; d++) {

        lo = d - c + 1;
        if (lo < 0)
            lo = 0;

        hi = d;
        if (hi > r - 1)
            hi = r - 1;

        if (d % 2 == 0) {
            for (i = hi; i >= lo; i--) {
                j = d - i;
                printf("%d ", a[i][j]);
            }
        } else {
            for (i = lo; i <= hi; i++) {
                j = d - i;
                printf("%d ", a[i][j]);
            }
        }
    }
    printf("\n");
}

int main() {
    int r, c, i, j;
    int a[10][10];

    scanf("%d %d", &r, &c);

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    diag(a, r, c);

    return 0;
}