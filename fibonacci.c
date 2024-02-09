# include <stdio.h>
int main(){
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    int A[n];
    A[0]=0;
    A[1]=1;
    for (int i = 2; i < n; i++)
    {
        A[i]=A[i-1]+A[i-2];
    }
    printf("The fibonacci series is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
}