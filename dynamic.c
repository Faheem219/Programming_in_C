#include <stdio.h>
#include <stdlib.h>

void Display(int arr[],int n){
    printf("\nElements of the array are:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void Insert(int p[],int n){
    printf("\nEnter the elements of the array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&p[i]);
    }
}

int main(){
    int n1,n2,*p1,*p2;
    printf("\nPlease enter the size of the array: ");
    scanf("%d",&n1);

    p1=malloc(n1*sizeof(int));
    printf("\n--------------------MALLOC--------------------\n");
    printf("\nDefault Initialization:\n");
    Display(p1,n1);
    Insert(p1,n1);
    Display(p1,n1);

    p2=calloc(n1,n1*sizeof(int));
    printf("\n--------------------CALLOC--------------------\n");
    printf("\nDefault Initialization:\n");
    Display(p2,n1);
    Insert(p2,n1);
    Display(p2,n1);

    printf("\nEnter the modified size of the array: ");
    scanf("%d",&n2);
    p1=realloc(p1,n2*sizeof(int));
    printf("\n--------------------REALLOC--------------------\n");
    printf("\nDefault Initialization:\n");
    Display(p1,n2);
    Insert(p1,n2);
    Display(p1,n2);

    free(p1);
    free(p2);
    return 0;
}

