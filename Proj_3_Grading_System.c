#include <stdio.h>

int main(){

    int grade = 0;

    printf("Please enter your marks (1 - 100): ");
    scanf("%d", &grade);

    if(grade > 90){
        printf("Your grade is A.");
    }
    else if(grade > 80){
        printf("Your grade is B.");
    }
    else if(grade > 70){
        printf("Your grade is C.");
    }
    else if(grade > 50){
        printf("Your grade is D.");
    }
    else if(grade > 30){
        printf("Your grade is E.");
    }
    else if(grade > 0){
        printf("Your grade is F.\nYou have failed!");
    }
    else{
        printf("Im just sorry");
    }

    return 0;
}