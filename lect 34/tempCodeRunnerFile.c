#include <stdio.h>

// Function to calculate sum of digits
int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        int digit = num % 10;   // extract last digit
        sum = sum + digit;      // add digit to sum
        num = num / 10;         // remove last digit
    }
    return sum;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    int result = sumOfDigits(number);
    printf("Sum of digits = %d\n", result);

    return 0;
}