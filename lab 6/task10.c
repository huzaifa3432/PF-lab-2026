#include<stdio.h>
int main(void){
    int i = 0,score = 0, dist = 0, pass = 0, fail = 0;
    while(score != -1){
        printf("\nEnter score of Student No.%d (1-100): ",++i);
        scanf("%d",&score);
        if(score >= 75 && score <= 100){
            dist+=1;
        }else if(score <= 74 && score >= 50){
            pass+=1;
        }else if(score < 50 && score >= 0){
            fail+=1;
        }else if(score < -1 || score > 100){
            printf("\nInvalid Input!");
        }
    }
    printf("\nDistinctions = %d\nPass = %d\nFail = %d",dist,pass,fail);

    return 0;
}
