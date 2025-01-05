#include <stdio.h>

int main() {
    // We initialize two variables we'll use to calculate the sum from.
    int num1 = 0, num2 = 0, sum = 0;
    // Prompt the user to enter a number.
    printf("Please enter a number: ");
    scanf("%d", &num1);
    // Prompt the user to enter another number.
    printf("Please enter another number: ");
    scanf("%d", &num2);
    sum = num1 + num2;
    printf("The sum of %d and %d is equal to %d", num1, num2, sum);
    return 0;
}   
