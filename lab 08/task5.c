#include <stdio.h>
int main() {
    int m1[5][5], m2[5][5];
    int r, c, i, j;
    int zero = 1, id = 1, diag = 1, scal = 1;
    int up = 1, low = 1, sym = 1, skew = 1, eq = 1;
    int det = 0, calc = 0, startVal;
    printf("Enter rows and columns (1 to 5): ");
    scanf("%d %d", &r, &c);
    printf("Enter numbers for the main matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &m1[i][j]);
        }
    }

    printf("Enter numbers for a second matrix to check Equality:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &m2[i][j]);
        }
    }
    startVal = m1[0][0];

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            if (m1[i][j] != 0) zero = 0;
            if (m1[i][j] != m2[i][j]) eq = 0;
            if (r == c) {
                if (i == j) {
                    if (m1[i][j] != 1) id = 0;
                    if (m1[i][j] != startVal) scal = 0;
                    if (m1[i][j] != 0) skew = 0;
                } else {
                    if (m1[i][j] != 0) {
                        id = 0;
                        diag = 0;
                        scal = 0;
                    }
                    if (i > j && m1[i][j] != 0) up = 0;
                    if (i < j && m1[i][j] != 0) low = 0;
                    if (m1[i][j] != m1[j][i]) sym = 0;
                    if (m1[i][j] != -m1[j][i]) skew = 0;
                }
            }
        }
    }
    printf("\nResults:\n");
    if (r == c) printf("Square Matrix\n");
    if (r != c) printf("Rectangular Matrix\n");
    if (r == 1) printf("Row Matrix\n");
    if (c == 1) printf("Column Matrix\n");
    if (zero == 1) {
        printf("Zero Matrix\n");
        printf("Null Matrix\n");
    }
    if (r == c) {
        if (id == 1) printf("Identity Matrix\n");
        if (diag == 1) printf("Diagonal Matrix\n");
        if (scal == 1) printf("Scalar Matrix\n");
        if (up == 1) printf("Upper Triangular Matrix\n");
        if (low == 1) printf("Lower Triangular Matrix\n");
        if (sym == 1) printf("Symmetric Matrix\n");
        if (skew == 1) printf("Skew-Symmetric Matrix\n");

        if (r == 1) {
            det = m1[0][0];
            calc = 1;
        } else if (r == 2) {
            det = (m1[0][0] * m1[1][1]) - (m1[0][1] * m1[1][0]);
            calc = 1;
        } else if (r == 3) {
            det = m1[0][0] * (m1[1][1] * m1[2][2] - m1[1][2] * m1[2][1]) -
                  m1[0][1] * (m1[1][0] * m1[2][2] - m1[1][2] * m1[2][0]) +
                  m1[0][2] * (m1[1][0] * m1[2][1] - m1[1][1] * m1[2][0]);
            calc = 1;
        }
        if (calc == 1) {
            if (det == 0) printf("Singular Matrix\n");
            else printf("Non-Singular Matrix\n");
        }
    }
    if (eq == 1) printf("Equal Matrix\n");
    return 0;
}
