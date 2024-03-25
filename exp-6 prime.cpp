#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n, int i) {
    if (n <= 2) {
        if (n == 2)
            return true;
        else
            return false;
    }
    if (n % i == 0)
        return false;
    if (i * i > n)
        return true;
    return isPrime(n, i + 1);
}

int main() {
    int num;

    printf("Enter a number to check if it's prime: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("%d is not a prime number.\n", num);
    } else {
        if (isPrime(num, 2))
            printf("%d is a prime number.\n", num);
        else
            printf("%d is not a prime number.\n", num);
    }

    return 0;
}

