#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main() {
    int age= 21;
    int *ptr = &age;
    printf("Age: %d\n", age);
    printf("Address of age: %p\n", ptr);
    *ptr = 22;
    printf("Age: %d\n", age);
    printf("Address of age: %p\n", ptr);
    return 0;
    
}
