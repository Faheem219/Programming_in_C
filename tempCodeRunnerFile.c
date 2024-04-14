#include <stdio.h>

struct Test{
    int x;
    char h;
}t1;

int main(){
    struct Test t2;
    printf("\n %d %c %d %c",t1.x,t1.h,t2.x,t2.h);
    return 0;
}