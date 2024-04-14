#include <stdio.h>
#include <math.h>

struct Date {
    int dd;
    int mm;
    int yy;
};

struct Book {
    char name[100];
    char auth_name[100];
    struct Date issue;
    struct Date rtrn;
    float fine;
};

void Fine(struct Book *b) {
    int days=0;
    b->fine = 0;
    if(b->rtrn.mm-b->issue.mm>1){
        if(b->rtrn.dd>b->issue.dd){
            days=(b->rtrn.mm-b->issue.mm-1)*30+b->rtrn.dd-b->issue.dd;
        }
        else{
            days=(b->rtrn.mm-b->issue.mm-2)*30+(30-b->issue.dd+b->rtrn.dd);
        }
    }
    else if(b->rtrn.mm-b->issue.mm==1){
        if(b->rtrn.dd>b->issue.dd){
            days=b->rtrn.dd-b->issue.dd;
        }
        else return;
    }
    else return;
    b->fine=days*5; // 5rs per day fine
}

void Insert(struct Book *b){
    printf("\nPlease enter Book name: ");
    scanf("%[^\n]s",b->name);
    getchar(); // Consuming newline character
    printf("\nPlease enter Author name: ");
    scanf("%[^\n]s",b->auth_name);
    getchar();
    printf("\nPlease enter Issuing date (dd mm yy): ");
    scanf("%d %d %d",&b->issue.dd,&b->issue.mm,&b->issue.yy);
    printf("\nPlease enter Return date (dd mm yy): ");
    scanf("%d %d %d",&b->rtrn.dd,&b->rtrn.mm,&b->rtrn.yy);
    Fine(b);
}

void Display(struct Book b){
    printf("\nBook Name: %s", b.name);
    printf("\nAuthor Name: %s", b.auth_name);
    printf("\nIssuing Date: %d/%d/%d", b.issue.dd, b.issue.mm, b.issue.yy);
    printf("\nReturn Date: %d/%d/%d", b.rtrn.dd, b.rtrn.mm, b.rtrn.yy);
    printf("\nFine: %f\n", b.fine);
}

int main() {
    struct Book b1={"The Great Gatsby","F. Scott Fitzgerald",{1,1,22},{15,1,22},0};
    struct Book b2={"To Kill a Mockingbird","Harper Lee",{10,2,22},{25,3,22},0};
    struct Book b3={"1984","George Orwell",{20,3,22},{10,5,22},0};
    struct Book b4;

    Fine(&b1);
    Fine(&b2);
    Fine(&b3);

    Display(b1);
    Display(b2);
    Display(b3);

    Insert(&b4);
    Display(b4);
    printf("\n");
    return 0;
}