#include <stdio.h>

int main() {
    int num;
    int isPrime = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Checking entered number is prime or composite:
    switch (num) {
        case 0:
        case 1:
            printf("%d is neither prime nor composite.\n", num);
            break;
        case 2:
            printf("%d is a prime number.\n", num);
            break;
        default:
            for (int i = 2; i < num; i++) {
                if (num % i == 0) {
                    isPrime = 0;
                    break;
                }
            }
            if (isPrime) {
                printf("%d is a prime number.\n", num);
            } else {
                printf("%d is a composite number.\n", num);
            }
            break;
    }

    // Checking entered number is even or odd:
    switch (num % 2) {
        case 0:
            printf("%d is an even number.\n", num);
            break;
        case 1:
            printf("%d is an odd number.\n", num);
            break;
    }

    return 0;
}
