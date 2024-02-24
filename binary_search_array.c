#include <stdio.h>
#include <stdlib.h>

int BinarySearch(int arr[], int length, int x){
    int l=0, h=length-1;
    while (l<=h){
        int mid = (l+h)/2;
        if (arr[mid] == x){
            return mid;
        } else if (arr[mid] < x){
            l = mid+1;
        } else {
            h = mid-1;
        }
    }
    return -1;
}

void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void Sort(int arr[], int size){
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]) swap(&arr[j],&arr[j+1]);
        }
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

    Sort(arr, size);
    printf("\nAfter Sorting:");
    for (int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }

    printf("\nEnter the element to search: ");
    scanf("%d", &x);
    int result = BinarySearch(arr, size, x);
    if (result == -1){
        printf("Element not found.\n");
    } else {
        printf("Element found at index %d.\n", result);
    }
    free(arr);
    return 0;
}

