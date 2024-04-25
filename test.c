#include <stdio.h>

void Display(int arr[],int n){
    printf("\nElements of the array are:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main(){
    int A[7];
    printf("\nDefault Initialization:\n");
    Display(A,7);
    printf("\nEnter the elements of the array:\n");
    for(int i=0;i<7;i++){
        scanf("%d",&A[i]);
    }
    Display(A,7);
    return 0;
}

