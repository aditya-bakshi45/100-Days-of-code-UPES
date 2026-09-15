<<<<<<< HEAD
//* Delete an element from an array.
Show Sample Test Cases
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5 *// 
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int p;
    scanf("%d", &p);

    for (int i = p; i < n - 1; i++) {
        a[i] = a[i + 1];
    }

    for (int i = 0; i < n - 1; i++) {
        printf("%d", a[i]);
        if (i < n - 2) printf(" ");
    }
    printf("\n");

    return 0;
=======
//* Delete an element from an array.
Show Sample Test Cases
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5 *// 
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int p;
    scanf("%d", &p);

    for (int i = p; i < n - 1; i++) {
        a[i] = a[i + 1];
    }

    for (int i = 0; i < n - 1; i++) {
        printf("%d", a[i]);
        if (i < n - 2) printf(" ");
    }
    printf("\n");

    return 0;
>>>>>>> b0e7749e98144d92962ed804fcb57bd22349ca42
}