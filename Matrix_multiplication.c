#include <stdio.h>
int main(){
    int r1,c1,r2,c2;
    printf("\nPlease enter dimenstions of matrix A (r,c):\n");
    scanf("%d %d",&r1,&c1);
    printf("\nPlease enter dimenstions of matrix B (r,c):\n");
    scanf("%d %d",&r2,&c2);
    if(r1!=c2){
        printf("\nMatrix Multiplication is not possible.\n");
        return 0;
    }
    int A[r1][c1],B[r2][c2],C[r1][c2];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            C[i][j]=0;
        }
    }
    printf("\nEnter elements of matrix A:\n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d",&A[i][j]);
        }
    }
    printf("\nEnter elements of matrix B:\n");
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            scanf("%d",&B[i][j]);
        }
    }
    printf("\nMatrix Multiplication:\n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            for(int k=0;k<r1;k++){
                C[i][j]=C[i][j]+(A[i][k]*B[k][j]);
            }
        }
    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }
}