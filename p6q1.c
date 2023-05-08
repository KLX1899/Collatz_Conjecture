//HAILSTONE SEQUENCE (Collatz conjecture)

//Practice 6 - part 1

//Amir Kalaki

#include <stdio.h>

#define inputNumber


typedef struct p6q1 {
    int numb;
} numberStruct;


//This function takes the input number from the user
int import() {

    numberStruct number1;

    printf("\nEnter a integer number here\n>");
    scanf("%d" , &number1.numb);
    return number1.numb;
}


//This function calculates the Collatz conjecture
void collatzConjenture() {

    numberStruct number1;

    if (number1.numb != 1) {
        if ((number1.numb % 2) == 0) {
            number1.numb = number1.numb / 2;
            printf("%d\n" , number1.numb);
            collatzConjenture();
        }
        else {
            number1.numb = (3 * number1.numb) + 1;
            printf("%d\n" , number1.numb);
            collatzConjenture();

        }
    }
    else {
        printf("1\n");
    }
}


//This function checks that the entered number is only an integer > 0 so that there is no problem in calculaions.
void check(int inputNumber) {

    numberStruct number1;

    number1.numb = (int)number1.numb;
    if (number1.numb > 0) {
        collatzConjenture();
    }
    else {
        printf("Invalid input. Please enter a positive integer.");
        import();
    }
    
}


int main() {

    check(import());
    return 0;
}
