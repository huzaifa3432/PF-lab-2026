#include<stdio.h>
#include<stdbool.h>
int main(void){
    int present =0,absent = 0,i,status = 0;
    printf("Enter the status of each student, \"1\" for true and \"0\" for false,\n");
    for(i=1;i<=30;i++){
        printf("\nIs student No.%d present (1-0): ",i);
        scanf("%d",&status);
        (status == 1) ? (present++) : ((status == 0) ? (absent++) : (printf("\nInvalid Input!"),i--));
    }
    printf("\nStudents Present = %d\nStudent Absent = %d",present,absent);
}
