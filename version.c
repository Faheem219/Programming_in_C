#include <stdio.h>

int fact(int x){
    if(x==0) return 1;
    return x*fact(x-1);
}

int main(){
    printf("C version: %ld\n", __STDC_VERSION__);
    return 0;
}