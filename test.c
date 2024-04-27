#include <stdio.h>

int length(char str[100]){
    int count=0;
    for(;str[count]!=0;count++);
    return count;
}

int substring(char str[100],char sub[100]){
    for(int i=0;i<length(str);i++){
        int j;
        for(j=0;j<length(sub);j++){
            if(str[i+j]!=sub[j]) break;
        }
        if(j==length(sub)) return 1;
    }
    return 0;
}

int main(){
    char s1[50], s2[50],sub[50];
    printf("\nEnter 1st string: ");
    scanf("%[^\n]s",s1);
    getchar(); // Consume the newline character
    printf("\nEnter 2nd string: ");
    scanf("%[^\n]s",s2);
    getchar();
    substring(s1,s2)?printf("\nContains Substring.\n"):printf("\nDoes not contain substring.\n");
    return 0;
}