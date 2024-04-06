#include <stdio.h>

int main(){
    int a[2][2] = {{5,9},{4,10}};
    int b[2][2] = {{6,8},{11,15}};
    int c[2][2];
    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("\nMatrix A:\n");
    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\nMatrix B:\n");
    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    // Addition of matrices:
    printf("\nMatrix C (A+B):\n");
    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    // Subtraction of matrices:
    printf("\nMatrix C (A-B):\n");
    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            printf("%d ", a[i][j]-b[i][j]);
        }
        printf("\n");
    }

    // Transpose of a matrix:
    printf("\nMatrix A (Transpose):\n");
    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
    return 0;
}


