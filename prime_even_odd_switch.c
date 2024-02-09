#include <stdio.h>

int main() {
    int num,n;
    int isPrime = 1;
    printf("\nEnter accordingly:\n1. Prime or Composite\n2. Even or Odd\n");
    scanf("%d",&n);
    printf("\nEnter a number: ");
    scanf("%d", &num);

    switch (n) {
        case 1:
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
            break;
        case 2:
            switch (num % 2) {
            case 0:
                printf("%d is an even number.\n", num);
                break;
            case 1:
                printf("%d is an odd number.\n", num);
                break;
            }    
            break;  
        default:
            printf("\nPlease enter a valid number.\n");
            break;
    }

    return 0;
}
