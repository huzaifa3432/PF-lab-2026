#include <stdio.h>
int main() {
    int m[3][3], adj[3][3];
    int i, j, r, c, det = 0;
    printf("Enter 9 numbers:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++) 
            scanf("%d", &m[i][j]);
    printf("\nTranspose:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) printf("%d\t", m[j][i]);
        printf("\n");
    }
    det = m[0][0]*(m[1][1]*m[2][2] - m[1][2]*m[2][1]) 
        - m[0][1]*(m[1][0]*m[2][2] - m[1][2]*m[2][0]) 
        + m[0][2]*(m[1][0]*m[2][1] - m[1][1]*m[2][0]);
    printf("\nDeterminant: %d\n\nCofactor Matrix:\n", det);
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            int sub[4], idx = 0;
            for (r = 0; r < 3; r++)
                for (c = 0; c < 3; c++)
                    if (r != i && c != j) sub[idx++] = m[r][c];
            int val = (sub[0]*sub[3]) - (sub[1]*sub[2]);
            if ((i + j) % 2 != 0) val = -val;
            adj[j][i] = val; 
            printf("%d\t", val);
        }
        printf("\n");
    }
    printf("\nAdjoint Matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) printf("%d\t", adj[i][j]);
        printf("\n");
    }
    if (det == 0) printf("\nInverse does not exist.\n");
    else {
        printf("\nInverse Matrix:\n");
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) printf("%.2f\t", adj[i][j] / (float)det);
            printf("\n");
        }
    }
    return 0;
}
