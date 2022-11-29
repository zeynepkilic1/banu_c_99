
//usage of struct

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

struct student {
    char name[20];
    int age;
    int id;
};

int main() {
    struct student student1;
    strcpy(student1.name, "John");
    student1.age = 20;
    student1.id = 1;
    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("ID: %d\n", student1.id);
    return 0;
}
