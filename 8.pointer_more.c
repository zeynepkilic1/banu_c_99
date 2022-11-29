#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main() {
    int a = 10;
    int *p = a;
    *p = 20;
    printf("%d", a);
    printf("%d", *p);
    printf("%d", &a);
    printf("%d", p);
    return 0;

}
