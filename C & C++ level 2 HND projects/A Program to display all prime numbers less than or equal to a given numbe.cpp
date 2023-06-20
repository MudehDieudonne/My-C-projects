#include <stdio.h>

// Function to check if b is a divisor of a
int isdivisor(int a, int b) {
    if (a % b == 0) {
        return 1;
    } else {
        return 0;
    }
}

// Function to calculate the number of divisors of a given integer
int nbdivisor(int n) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (isdivisor(n, i) == 1) {
            count++;
        }
    }
    return count;
}

// Function to check if a number is prime
int isprime(int n) {
    if (nbdivisor(n) == 2) {
        return 1;
    } else {
        return 0;
    }
}

// Main function to prompt the user for a number and display all prime numbers less than or equal to that number
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 2; i <= n; i++) {
        if (isprime(i) == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
