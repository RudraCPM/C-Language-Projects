#include <stdio.h>

int main(){

    int x = 0;
    int y = 0;

    printf("Enter your number: ");
    scanf("%d", &x);

    y = x % 2;
    
    if(y == 0){
        printf("Your given number is even");
    }
    else{
        printf("Your given number is odd");
    }
     
    return 0;
}