#include<stdio.h>
int main(void){
    int guess;
    while(guess != 7){
        printf("\nGuess the Correct Number: ");
        scanf("%d",&guess);
        if(guess > 7){
            printf("\nToo High!");
        }else if(guess < 7){
            printf("\nToo Low!");
        }else{
            printf("\nCONGRATS! Your guess is correct!");
            break;
        }
    }

    return 0;
}
