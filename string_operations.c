#include <stdio.h>

int length(char str[50]){
    int count=0;
    for(;str[count]!=0;count++);
    return count;
}

void Upper(char str[50]){
    for(int i=0;i<length(str);i++){
        if(str[i]>=97 && str[i]<=122){
            str[i]-=32;
        }
    }
}

int char_len(char str[50]){
    int count=0;
    for(int i=0;str[i]!=0;i++){
        if((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122)) count++;
    }
    return count;
}

int vow_len(char str[50]){
    int count=0;
    Upper(str);
    for(int i=0;str[i]!=0;i++){
        if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U') count++;
    }
    return count;
}

void Copy(char str1[50],char str2[50]){
    for(int i=0;i<length(str1);i++) str1[i]=0;
    for(int i=0;i<length(str2);i++){
        str1[i]=str2[i];
    str1[length(str2)] = '\0';
    }
}

int main(){
    char c1[50],c2[50];
    printf("\nEnter string:\n");
    scanf("%[^\n]s",c2);
    Copy(c1,c2);
    printf("\nCopied string: %s\n",c1);
    printf("\nLength of string: %d\n",length(c2));
    printf("\nNo. of characters: %d\n",char_len(c2));
    printf("\nNo. of vowels: %d\n", vow_len(c2));
    return 0;
}

