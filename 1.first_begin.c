#include "stdio.h"
#include "stdlib.h"

int main(int argc, char *argv[]) {
    int number = 5;      // integer variable
    number = 5.5;        // error
    double number;       // error
    const double PI = 3.14; // constant variable
    PI = 3.15;           // error
    float normalizationFactor = 22.442e2; // float variable
    char letter = 'a';   // character variable
    char *name = "John"; // string variable
    

    return 0;

}
