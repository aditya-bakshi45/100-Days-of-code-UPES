<<<<<<< HEAD
// * Q67 (Arrays (1D))📋

```
Insert an element in an array at a given position.
```

Show Sample Test Cases
Input 1:

```
4
10 20 30 40
2 15
```

Output 1:

```
10 20 15 30 40 *//
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n + 1];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int p, v;
    scanf("%d %d", &p, &v);

    for (int i = n; i > p; i--) {
        a[i] = a[i - 1];
    }

    a[p] = v;

    for (int i = 0; i <= n; i++) {
        printf("%d", a[i]);
        if (i < n) printf(" ");
    }
    printf("\n");

    return 0;
}
=======
// * Q67 (Arrays (1D))📋

```
Insert an element in an array at a given position.
```

Show Sample Test Cases
Input 1:

```
4
10 20 30 40
2 15
```

Output 1:

```
10 20 15 30 40 *//
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n + 1];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int p, v;
    scanf("%d %d", &p, &v);

    for (int i = n; i > p; i--) {
        a[i] = a[i - 1];
    }

    a[p] = v;

    for (int i = 0; i <= n; i++) {
        printf("%d", a[i]);
        if (i < n) printf(" ");
    }
    printf("\n");

    return 0;
}
>>>>>>> b0e7749e98144d92962ed804fcb57bd22349ca42
