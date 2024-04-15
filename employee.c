#include <stdio.h>

struct Salary {
    float basic;
    float gross;
    float allowance;
    float tax;
};

struct Employee {
    int id;
    char name[50];
    char designation[50];
    char department[50];
    struct Salary BS;
};

void Calculate(struct Employee *e) {
    e->BS.allowance = (0.2) * e->BS.basic;
    e->BS.tax = (0.1) * e->BS.basic;
    e->BS.gross = e->BS.basic + e->BS.allowance - e->BS.tax;
}

void Insert(struct Employee *e) {
    printf("\nEnter ID: ");
    scanf("%d", &e->id);
    getchar();
    printf("\nEnter Name: ");
    scanf("%[^\n]s", e->name);
    getchar();
    printf("\nEnter Designation: ");
    scanf("%[^\n]s", e->designation);
    getchar();
    printf("\nEnter Department: ");
    scanf("%[^\n]s", e->department);
    getchar();
    printf("\nEnter Basic Salary: ");
    scanf("%f", &e->BS.basic);
    Calculate(e);
}

void Display(struct Employee e[], int size) {
    printf("\n\
------------------------------------------------------------------------------------------------\n\
    ID      Name        Designation           Gross         Basic        Allowance       Tax\n\
------------------------------------------------------------------------------------------------\n");

    for(int i=0;i<size;i++){
        printf("    %-4d    %-10s    %-15s    %-10.2f    %-10.2f    %-10.2f    %-10.2f\n",\
        e[i].id,e[i].name,e[i].designation,e[i].BS.gross,e[i].BS.basic,e[i].BS.allowance,e[i].BS.tax);
    }
    printf("\n");
}

int main() {
    int n;
    printf("\nEnter the number of entries: ");
    scanf("%d",&n);
    struct Employee emp[n];
    for(int i=0;i<n;i++){
        printf("\nEntry %d:\n",i + 1);
        Insert(&emp[i]);
    }
    Display(emp,n);
    return 0;
}

