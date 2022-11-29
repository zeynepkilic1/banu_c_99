#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main() {
    int age= 21;
    int *ptr = age;
    
    *ptr = 20;
    printf("%d", age);
    printf("%d", *ptr);
    printf("%d", &age);
    printf("%d", ptr);
    return 0;

}
