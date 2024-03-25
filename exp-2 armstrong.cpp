#include <stdio.h>
#include <math.h>


int countDigits(int number) {
    if (number == 0)
        return 0;
    else
        return 1 + countDigits(number / 10);
}


int isArmstrong(int number, int originalNumber, int numDigits) {
    if (number == 0)
        return 0;
    else
        return pow(number % 10, numDigits) + isArmstrong(number / 10, originalNumber, numDigits);
}

int main() {
    int number, sum = 0, numDigits;

    printf("Enter a number: ");
    scanf("%d", &number);

    numDigits = countDigits(number);
    sum = isArmstrong(number, number, numDigits);

    if (sum == originalNumber)
        printf("%d is an Armstrong number.\n", number);
    else
        printf("%d is not an Armstrong number.\n", number);

    return 0;
}

