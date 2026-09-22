#include <stdio.h>

int main(){

    int x = 0;

    printf("Enter your number: ");
    scanf("%d", &x);

    if(x > 0){
        printf("Your number is positive");
    }
    else if(x==0){
        printf("Your number is neither negative nor positive");
    }
    
    else{
        printf("Your number is negative");
    }

    return 0;
}