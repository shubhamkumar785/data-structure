#include<stdio.h>

int main() {
    int a[3][3], i, j, z = 0, nz = 0;

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Original matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (a[i][j] == 0) {
                z++;
            } else {
                nz++;
            }
        }
    }

    printf("Number of zeros: %d\n", z);
    printf("Number of non-zeros: %d\n", nz);

    return 0;
}
