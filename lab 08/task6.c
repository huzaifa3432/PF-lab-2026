#include <stdio.h>
int main() {
    int mat1[3][3], mat2[3][3], result[3][3];
    int r1, c1, r2, c2;
    int i, j, k;
    printf("Enter rows and columns for Matrix 1 (max 3 3): ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns for Matrix 2 (max 3 3): ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) {
        printf("\n Not possible. Columns of Matrix 1 must equal rows of Matrix 2.\n");
    } else {
        printf("\nEnter elements of Matrix 1:\n");
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c1; j++) {
                scanf("%d", &mat1[i][j]);
            }
        }
        printf("\nEnter elements of Matrix 2:\n");
        for (i = 0; i < r2; i++) {
            for (j = 0; j < c2; j++) {
                scanf("%d", &mat2[i][j]);
            }
        }
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c2; j++) {
                result[i][j] = 0;
                for (k = 0; k < c1; k++) {
                    result[i][j] = result[i][j] + (mat1[i][k] * mat2[k][j]);
                }
            }
        }

        printf("\nMatrix 1\n");
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c1; j++) {
                printf("%d\t", mat1[i][j]);
            }
            printf("\n");
        }

        printf("\nMatrix 2\n");
        for (i = 0; i < r2; i++) {
            for (j = 0; j < c2; j++) {
                printf("%d\t", mat2[i][j]);
            }
            printf("\n");
        }

        printf("\nResulting Multiplied Matrix\n");
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c2; j++) {
                printf("%d\t", result[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
