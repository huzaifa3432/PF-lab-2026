#include <stdio.h>
int main() {
    float temp[7][3];
    int i, j;
    float maxTemp;
    float dailySum,dailyAvg;
    for (i = 0; i < 7; i++) {
        printf("Enter temperatures for the day %d (AM Noon PM): ", i+1);
        for (j = 0; j < 3; j++) {
            scanf("%f", &temp[i][j]);
        }
    }
    maxTemp = temp[0][0];
    printf("\nDaily Average Temperature:\n");
    for (i = 0; i < 7; i++) {
        dailySum = 0;
        for (j = 0; j < 3; j++) {
            dailySum = dailySum + temp[i][j];
            if (temp[i][j] > maxTemp) {
                maxTemp = temp[i][j];
            }
        }
        dailyAvg = dailySum / 3.0;
        printf("Day average %d: %.2f\n", i + 1, dailyAvg);
    }
    printf("\nHighest temperature of the week: %.2f\n", maxTemp);
    return 0;
}
