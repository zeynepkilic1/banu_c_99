// Take a single character  as input, you may benefit from scanf("%c", &ch ); and print("%c", ch) to print the character. 
// Write a program to print the ASCII value of the given character.
#include <stdio.h>
int main()
{
    char ch;
    printf("Bir karakter giriniz: ");
    scanf("%c", &ch);  
    
    printf("%c karakterinin ASCII degeri = %d", ch, ch);
    return 0;
}
