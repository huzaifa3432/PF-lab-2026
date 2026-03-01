#include <stdio.h>
int main() {
    int totalSeats = 40;
    int bookedSeats = 0;
    int remainingSeats = totalSeats;
    int input;
    
    printf("=== Bus Seat Reservation System ===\n");
    printf("Total seats available: %d\n\n", totalSeats);
    
    while (bookedSeats < totalSeats) {
        printf("Remaining seats: %d\n", remainingSeats);
        printf("Enter 1 to book a seat, or 0 to stop reservations: ");
        scanf("%d", &input);
        
        if (input == 0) {
            printf("\nReservation process stopped by operator.\n");
            break;
        } else if (input == 1) {
            if (remainingSeats > 0) {
                bookedSeats++;
                remainingSeats--;
                printf("Seat booked successfully!\n");
                printf("Total booked seats: %d\n\n", bookedSeats);
            } else {
                printf("ERROR: All seats are full! No more seats available.\n\n");
                break;
            }
        } else {
            printf("Invalid input. Please enter 1 to book or 0 to stop.\n\n");
        }
    }
    
    if (bookedSeats == totalSeats) {
        printf("\n=== All seats are now booked! ===\n");
    }
    
    printf("\n--- Reservation Summary ---\n");
    printf("Total seats available: %d\n", totalSeats);
    printf("Seats booked: %d\n", bookedSeats);
    printf("Remaining seats: %d\n", remainingSeats);
    
    return 0;
}
