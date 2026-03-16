#include <stdio.h>
int main() {
    int seats[5][6];
    int i, j;
    int availableSeats = 0;
    int maxBooked = -1;
    int maxRow = 0;
    int currentBooked;
    for (i = 0; i < 5; i++) {
        printf("input seat record (0 or 1) for Row %d: ", i+1);
        for (j = 0; j < 6; j++) {
            scanf("%d", &seats[i][j]);
        }
    }
    for (i = 0; i < 5; i++) {
        currentBooked = 0;
        for (j = 0; j < 6; j++) {
            if (seats[i][j] == 0) {
                availableSeats++;
            } else if (seats[i][j] == 1) {
                currentBooked++;
            }
        }
        if (currentBooked > maxBooked) {
            maxBooked = currentBooked;
            maxRow = i + 1;
        }
    }
    printf("\nTotal available seats: %d\n", availableSeats);
    printf("Row with maximum booked seats: Row %d\n", maxRow);
    return 0;
}
