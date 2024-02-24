#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void Sort1(int arr[], int size){
    int max=arr[0];
    int max_i=0;
    for(int j=0;j<size;j++){
        for(int i=0;i<size-j;i++){
            if(arr[i]>max){ max=arr[i]; max_i=i;}
        }
        if(arr[size-1-j]!=max) swap(&arr[max_i],&arr[size-1-j]);
    }
}

int main(){
    int size,*arr,x;
    printf("\nEnter the size of the array: ");
    scanf("%d", &size);
    arr = (int *)malloc(size * sizeof(int));
    printf("\nEnter the elements of the array: ");
    for (int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }

    Sort1(arr, size);
    printf("\nAfter Sorting:");
    for (int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}

