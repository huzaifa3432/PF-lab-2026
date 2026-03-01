#include<stdio.h>
int main(void){
    int num,i,j;
    printf("Enter a number: ");
    scanf("%d",&num);
        for(i=1;i<=10;i++){
            printf("\n%d x %d = %d",num,i,num*i);
        }

}
