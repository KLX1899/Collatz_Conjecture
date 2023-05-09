//HAILSTONE SEQUENCE (Collatz conjecture)

//Practice 6 - part 1

//Amir Kalaki

#include <stdio.h>


typedef struct p6q1 {
    int number;
} structNumber;


//This function calculates the Collatz conjecture
void collatzConjenture(structNumber input) {

    if (input.number != 1) {
        if ((input.number % 2) == 0) {
            input.number = input.number / 2;
            printf("%d\n" , input.number);
            collatzConjenture(input);
        }
        else {
            input.number = (3 * input.number) + 1;
            printf("%d\n" , input.number);
            collatzConjenture(input);

        }
    }
}


//This function checks that the entered number is only an integer > 0 so that there is no problem in calculaions.
void check(structNumber input) {

    input.number = (int)input.number;
    if (input.number > 0) {
        collatzConjenture(input);
    }
    else {
        printf("Invalid input. Please enter a positive integer.\n");
    }
    
}


int main() {
    
    structNumber input;    
    
    printf("\nEnter a integer number here\n> ");
    scanf("%d" , &input.number);
    check(input);
    return 0;
}
