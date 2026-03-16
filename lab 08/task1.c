#include <stdio.h>
int main() {
    int marks[4][3];
    int i, j;
    int sum;
    float average;
    for (i = 0; i < 4; i++) {
        printf("Enter marks for Student %d (3 subjs): ", i+1);
        for (j = 0; j < 3; j++) {
            scanf("%d", &marks[i][j]);
        }
    }
    printf("\nTotal marks for each student:\n");
    for (i = 0; i < 4; i++) {
        sum = 0;
        for (j = 0; j < 3; j++) {
            sum = sum + marks[i][j];
        }
        printf("Student %d: %d\n", i+1, sum);
    }
    printf("\nAverage marks for each subject:\n");
    for (j = 0; j < 3; j++) {
        sum = 0;
        for (i = 0; i < 4; i++) {
            sum = sum + marks[i][j];
        }
        average = sum / 4.0;
        printf("Subject %d: %.2f\n", j + 1, average);
    }
    return 0;
}
