#include <stdio.h>

void swap(int *a, int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}

int main(){
	int arr[5]={1,2,3,4,5};
	swap(arr[0],arr[1]);
	printf("\nElements:\n");
	for(int i=0;i<n;i++){
		printf("%d",arr[i]);
	}
	return 0;
}