#include <stdio.h>

float Fact(int x){
    if(x==0) return 1;
    return x*Fact(x-1);
}

int main(){
    int x;
    printf("\nEnter number: ");
    scanf("%d",&x);
    printf("\nFactorial of %d is %f.\n",x,Fact(x));
    return 0;
}


