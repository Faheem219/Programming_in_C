#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, D, x1, x2;
    printf("Enter coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    D = b * b - 4 * a * c;
    switch (D > 0) {
        case 1:
            x1 = (-b + sqrt(D)) / (2 * a);
            x2 = (-b - sqrt(D)) / (2 * a);
            printf("Roots are real and different.\n");
            printf("Root 1 = %.2lf\n", x1);
            printf("Root 2 = %.2lf\n", x2);
            break;
        case 0:
            switch (D == 0) {
                case 1:
                    x1 = x2 = -b / (2 * a);
                    printf("Roots are real and same.\n");
                    printf("Root 1 = Root 2 = %.2lf\n", x1);
                    break;
                case 0:
                    printf("Roots are complex and different.\n");
                    double realPart = -b / (2 * a);
                    double imaginaryPart = sqrt(-D) / (2 * a);
                    printf("Root 1 = %.2lf + %.2lfi\n", realPart, imaginaryPart);
                    printf("Root 2 = %.2lf - %.2lfi\n", realPart, imaginaryPart);
                    break;
            }
            break;
    }
    return 0;
}