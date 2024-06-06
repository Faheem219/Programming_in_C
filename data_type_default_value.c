#include <stdio.h>
//lol this is a test
int main() {
    // Default values of data types
    int i=0;
    float f;
    double d;
    long double ld;
    char c;
    unsigned int ui;
    long int li;
    long long int lli;
    short int si;
    unsigned short int usi;
    unsigned long int uli;
    unsigned long long int ulli;
    short s;

    printf("Default value of int: %x\n", &i);
    printf("Default value of float: %f\n", f);
    printf("Default value of double: %lf\n", d);
    printf("Default value of long double: %Lf\n", ld);
    printf("Default value of char: %c\n", c);
    printf("Default value of unsigned int: %u\n", ui);
    printf("Default value of long int: %ld\n", li);
    printf("Default value of long long int: %lld\n", lli);
    printf("Default value of short int: %hd\n", si);
    printf("Default value of unsigned short int: %hu\n", usi);
    printf("Default value of unsigned long int: %lu\n", uli);
    printf("Default value of unsigned long long int: %llu\n", ulli);
    printf("Default value of short char: %hc\n", s);

    return 0;
}