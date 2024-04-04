#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char c1[10],c2;
    char c4[4]={'R','u','t','\0'};
    char bkl="Sani BKL",c20=" lol ";
    //printf("\n%s\n",c4);
    //scanf("%[^\n]s",c1);
    //printf("\n%s\n",c1);   
    //fgets(c1,6,stdin);
    //puts(c1);
    printf("%s",strcat(bkl,c20));
    return 0;
}