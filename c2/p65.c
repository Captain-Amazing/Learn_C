#include <stdio.h>

int main()
{
    char firstname[3];
    char lastname[3];
    printf("Enter your name:");
    // scanf("%s %s", firstname,lastname);
    fgets(firstname, sizeof(firstname), stdin);
    fgets(lastname, sizeof(lastname), stdin);
    printf("First: %s Last: %s\n", firstname, lastname);
    return 0;
}