typedef Kullanımı <br>

typedef eski-isim yeni-isim;
typedef int tms;


typedef deyimi C dilinde değişken tanımlama yaparken kullanılan int, float, char gibi değişken isimlerini değiştirmeye yarar.
Bu sayede kodlar programcının anadiline daha fazla yaklaşmış olur.
struct deyimi ile beraber kullanıldığında oluşturduğunuz yapıyı bir değişken türü olarak tanımlayıp o yapının çoğaltılmasını sağlar. Bu yapıdan değişken tanımlamak için tekrar struct deyiminin kullanılmasına gerek kalmaz

C programlama dili struct içerisindeki bir üyenin yine bir struct olmasına izin verir. Bunu yapmaktaki temel amaç:
Kaynak kodun tekrar kullanılabilirliğini arttırmak
Kaynak kodun okunabilirliğini arttırmak
Kaynak kodu sadeleştirmek


The C programming language provides a keyword called typedef,
which you can use to give a type a new name. Following is an example to define a term BYTE for one-byte numbers −


#include <stdio.h>
#include <string.h>
 
typedef struct Books {
   char title[50];
   char author[50];
   char subject[100];
   int book_id;
} Book;
 
int main( ) {

   Book book;
 
   strcpy( book.title, "C Programming");
   strcpy( book.author, "Nuha Ali"); 
   strcpy( book.subject, "C Programming Tutorial");
   book.book_id = 6495407;
 
   printf( "Book title : %s\n", book.title);
   printf( "Book author : %s\n", book.author);
   printf( "Book subject : %s\n", book.subject);
   printf( "Book book_id : %d\n", book.book_id);

   return 0;
}



################################################

typedef vs #define
#define is a C-directive which is also used to define the aliases for various data types similar to typedef but with the following differences −

typedef is limited to giving symbolic names to types only where as #define can be used to define alias for values as well, q., you can define 1 as ONE etc.

typedef interpretation is performed by the compiler whereas #define statements are processed by the pre-processor.


<!-- typedef vs struct -->


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

