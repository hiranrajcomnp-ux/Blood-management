#include <stdio.h>
#include <string.h>

int login()
{
    char user[30];
    char pass[30];

    printf("\nUsername: ");
    scanf("%s", user);

    printf("Password: ");
    scanf("%s", pass);

    if(strcmp(user,"admin")==0 &&
       strcmp(pass,"admin123")==0)
    {
        return 1;
    }

    return 0;
}
