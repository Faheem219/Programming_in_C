#include <stdio.h>

struct Time{
    int hour;
    int min;
    int sec;
};

void Display(struct Time *t1){
    printf("\nThe time is: %d hours: %d minutes: %d seconds\n",t1->hour,t1->min,t1->sec);
}

void Insert(struct Time *t1){
    int h,m,s;
    printf("\nEnter the time.\n");
    scanf("%d %d %d",&t1->hour,&t1->min,&t1->sec);
}

struct Time Difference(struct Time *t1,struct Time *t2){
    struct Time t3;
    if(t1->hour<t2->hour){
        printf("\nInvalid difference!\n");
    }
    else if(t1->min<t2->min && t1->sec>t2->sec){
        t1->hour--;
        t1->min+=60;
    }
    else if(t1->min<t2->min && t1->sec<t2->sec){
        t1->hour--;
        t1->min+=59;
        t1->sec+=60;
    }
    else if(t1->min>t2->min && t1->sec<t2->sec){
        t1->min--;
        t1->sec=+60;
    }
    t3.hour=t1->hour-t2->hour;
    t3.min=t1->min-t2->min;
    t3.sec=t1->sec-t2->sec;
    return t3;
}

int main(){
    struct Time t1,t2,diff;
    Insert(&t1);
    Insert(&t2);
    Display(&t1);
    Display(&t2);
    diff=Difference(&t1,&t2);
    Display(&diff);
    return 0;
}