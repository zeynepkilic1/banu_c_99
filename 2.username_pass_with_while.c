// cretae a username_pass_with_while. 


#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "ctype.h" // for isdigit()

int main() {
    char username[20];
    char password[20];
    char username1[20];
    char password1[20];
    int i = 0;
    printf("Enter your username: ");
    scanf("%s", username);
    printf("Enter your password: ");
    scanf("%s", password);
    while (i < 3) {
        printf("Enter your username: ");
        scanf("%s", username1);
        printf("Enter your password: ");
        scanf("%s", password1);
        if (strcmp(username, username1) == 0 && strcmp(password, password1) == 0) {
            printf("You are logged in");
            break;
        } else {
            printf("Wrong username or password");
            i++;
        }
    }
    return 0;
}
