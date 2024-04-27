#include <stdio.h>

int length(char str[50]){
    int count=0;
    for(;str[count]!=0;count++);
    return count;
}

int Compare(char s1[50],char s2[50]){
    if(length(s1)!=length(s2)) return 0;
    for(int i=0;i<length(s1);i++){
        if(s1[i]!=s2[i]) return 0;
    }
    return 1;
}

int Longer(char s1[50], char s2[50]){
    if(length(s1)>length(s2)) return 1;
    return 0;
}

void Concatenate(char s1[50], char s2[50]){
    int l1=0,l2=0;
    l1=length(s1);
    l2=length(s2);
    for(int i=l1,j=0;i<l1+l2 && j<l2;i++,j++){
        s1[i]=s2[j];
    }
}

int Substring(char str[100],char sub[100]){
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
    Compare(s1,s2)?printf("\nStrings are equal.\n"):printf("\nStrings are not equal.\n");
    Longer(s1,s2)?printf("\n1st String is Longer.\n"):printf("\n2nd String is Longer.\n");
    Concatenate(s1,s2);
    printf("\nConcatenated string: %s\n",s1);
    printf("\nEnter substring to check in string 2: ");
    scanf("%[^\n]s",sub);
    Substring(s2,sub)?printf("\nContains Substring.\n"):printf("\nDoes not contain substring.\n");
    return 0;
}


