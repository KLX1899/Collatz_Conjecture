//HAILSTONE SEQUENCE (Collatz conjecture)

//Practice 6 - part 1

//Amir Kalaki

#include <stdio.h>

#define inputNumber


/*typedef struct p6q1 {
    int numb;
} numberStruct;*/


//This function takes the input number from the user
int import(inputNumber int number) {

    //numberStruct number1;

    printf("\nEnter a integer number here\n> ");
    scanf("%d" , &number);
    return number;
}


//This function calculates the Collatz conjecture
void collatzConjenture(inputNumber int number) {

    //numberStruct number1;

    if (number != 1) {
        if ((number % 2) == 0) {
            number = number / 2;
            printf("%d\n" , number);
            collatzConjenture(number);
        }
        else {
            number = (3 * number) + 1;
            printf("%d\n" , number);
            collatzConjenture(number);

        }
    }
}


//This function checks that the entered number is only an integer > 0 so that there is no problem in calculaions.
void check(inputNumber int number) {

    //numberStruct number1;

    number = (int)number;
    if (number > 0) {
        collatzConjenture(number);
    }
    else {
        printf("Invalid input. Please enter a positive integer.");
        import(number);
    }
    
}


int main() {

    int number;
    
    check(import(number));
    return 0;
}
