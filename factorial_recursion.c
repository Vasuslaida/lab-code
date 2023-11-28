#include <stdio.h>
int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);
    if (num < 0) {
        printf("Error! Factorial of a negative number doesn't exist.");
    } else {
        printf("Factorial of %d = %d", num, factorial(num));
    }

    return 0;
}
