#include<stdio.h>
#include<math.h>

int main(){

    float x = 0;
    float y = 0;
    float z = 0;
    char symbol;

    printf("PLease enter your first number: ");
    scanf("%f", &x);
    printf("Please enter your second number: ");
    scanf("%f", &y);
    printf("Please enter your arithematic symbol (x, +, /, -): ");
    scanf(" %c", &symbol);

    if(symbol == '+'){
        z = x + y;
        printf("Your answer for %.2f + %.2f = %.2f", x, y, z);
    }
    else if(symbol == 'x'){
        z = x * y;
        printf("Your answer for %.2f x %.2f = %.2f", x, y, z);
    }
    else if(symbol == '*'){
        z = x * y;
        printf("Your answer for %.2f x %.2f = %.2f", x, y, z);
    }
    else if(symbol == '-'){
        z = x - y;
        printf("Your answer for %.2f - %.2f = %.2f", x, y, z);
    }
    else if(symbol == '/'){
        z = x / y;
        printf("Your answer for %.2f / %.2f = %.2f", x, y, z);
    }
    else{
        printf("Please retry and provide a valid input");
    }
    return 0;
}