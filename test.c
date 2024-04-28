#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}

void SelectionSort(int *arr, int n){
	int min_id=0;
	for(int i=0;i<n-1;i++){
		min_id=i;
		for(int j=i+1;j<n;j++){
			if(arr[min_id]>arr[j]) min_id=j;
		}
		if(min_id!=i) swap(&arr[min_id],&arr[i]);
	}
}

void BubbleSort(int *arr, int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]) swap(&arr[j],&arr[j+1]);
		}
	}
}

void Display(int *arr, int n){
	printf("\nElements of the array:\n");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}

int BinarySearch(int *arr, int x, int n){
	int l=0, h=n-1, mid=0;
	while(l<=h){
		mid=(l+h)/2;
		if(arr[mid]==x) return mid;
		else if(arr[mid]>x) h=mid-1;
		else l=mid+1;
	}
	return -1;
}

int main(){
	int *A, n, x, res;
	printf("\nEnter the size of the array: ");
	scanf("%d",&n);
	A=(int *)malloc(n*sizeof(int));
	printf("\nEnter elements of the array:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
	Display(A,n);
	BubbleSort(A,n);
	SelectionSort(A,n);
	Display(A,n);
	printf("\nEnter element to search: ");
	scanf("%d",&x);
	res=BinarySearch(A,x,n);
	if(res==-1){
		printf("\n%d not found\n",x);
	}
	else{
		printf("\n%d found at index %d\n",x,res);
	}
	return 0;
}