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
    s1[l1+l2]='\0';
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