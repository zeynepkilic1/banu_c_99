#include <stdio.h>
int main() {
//    finding sizeof 
  short int a;
    int b;
    long int c;
    long long int d;
    float e;
    double f;
    long double g;
    printf("Size of short int is %d bytes \n", sizeof(a));
    printf("Size of int is %d bytes \n", sizeof(b));
    printf("Size of long int is %d bytes \n", sizeof(c));
    printf("Size of long long int is %d bytes \n", sizeof(d));
    printf("Size of float is %d bytes \n", sizeof(e));
    printf("Size of double is %d bytes \n", sizeof(f));
    printf("Size of long double is %d bytes \n", sizeof(g));
    return 0;
    
    
}
