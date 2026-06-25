#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "auth.h"

typedef struct
{
    char username[30];
    char password[30];
} User;

void createDefaultUser()
{
    FILE *fp;
    User u;

    fp = fopen("users.dat", "rb");

    if(fp != NULL)
    {
        fclose(fp);
        return;
    }

    fp = fopen("users.dat", "wb");

    strcpy(u.username, "admin");
    strcpy(u.password, "admin123");

    fwrite(&u, sizeof(User), 1, fp);

    fclose(fp);
}

int login()
{
    FILE *fp;
    User u;

    char username[30];
    char password[30];

    printf("\n=================================");
    printf("\n      BLOOD MANAGEMENT SYSTEM");
    printf("\n=================================\n");

    printf("Username: ");
    scanf("%s", username);

    printf("Password: ");
    scanf("%s", password);

    fp = fopen("users.dat", "rb");

    if(fp == NULL)
    {
        printf("\nUser Database Missing!\n");
        return 0;
    }

    while(fread(&u, sizeof(User), 1, fp))
    {
        if(strcmp(username, u.username) == 0 &&
           strcmp(password, u.password) == 0)
        {
            fclose(fp);
            return 1;
        }
    }

    fclose(fp);
    return 0;
}
