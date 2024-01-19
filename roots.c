#include <stdio.h>
#include <math.h>

int main(){
    float a,b,c,x1,x2,D;
    printf("\nEnter coefficients of the quadratic equation (a,b,c):");
    scanf("%f %f %f", &a, &b, &c);
    D=b*b-4*a*c;
    if(D<0){
        float real=-b/(2*a);
        float imag=sqrt(-D)/(2*a);
        printf("\nRoots are complex numbers.\n");
        printf("\nx1=%.2f+%.2fi\n",real,imag);
        printf("\nx2=%.2f-%.2fi\n",real,imag);
    }
    else if(D==0){
        x1=(-b+sqrt(D))/(2*a);
        printf("\nRoots are real and equal.\nx1=x2=%.2f",x1);
    }
    else{
        x1=(-b+sqrt(D))/(2*a);
        x2=(-b-sqrt(D))/(2*a);
        printf("\nRoots are real and distinct.\nx1=%.2f\nx2=%.2f",x1,x2);
    }
    return 0;
}