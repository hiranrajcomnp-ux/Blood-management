#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/donor.h"

#define DONOR_FILE "data/donors.dat"

void addDonor()
{
    FILE *fp;
    Donor d;

    fp = fopen(DONOR_FILE,"ab");

    printf("ID: ");
    scanf("%d",&d.id);

    printf("Name: ");
    scanf(" %[^\n]",d.name);

    printf("Age: ");
    scanf("%d",&d.age);

    printf("Gender: ");
    scanf("%s",d.gender);

    printf("Blood Group: ");
    scanf("%s",d.bloodGroup);

    printf("Phone: ");
    scanf("%s",d.phone);

    printf("Address: ");
    scanf(" %[^\n]",d.address);

    fwrite(&d,sizeof(Donor),1,fp);

    fclose(fp);

    printf("\nDonor Added Successfully\n");
}

void viewDonors()
{
    FILE *fp;
    Donor d;

    fp=fopen(DONOR_FILE,"rb");

    if(fp==NULL)
    {
        printf("No Records Found\n");
        return;
    }

    while(fread(&d,sizeof(Donor),1,fp))
    {
        printf("\nID:%d",d.id);
        printf("\nName:%s",d.name);
        printf("\nAge:%d",d.age);
        printf("\nGender:%s",d.gender);
        printf("\nBlood Group:%s",d.bloodGroup);
        printf("\nPhone:%s",d.phone);
        printf("\nAddress:%s\n",d.address);
    }

    fclose(fp);
}

void searchDonor()
{
    FILE *fp;
    Donor d;
    char bg[5];
    int found=0;

    printf("Enter Blood Group: ");
    scanf("%s",bg);

    fp=fopen(DONOR_FILE,"rb");

    while(fread(&d,sizeof(Donor),1,fp))
    {
        if(strcmp(d.bloodGroup,bg)==0)
        {
            printf("\n%s - %s\n",
                   d.name,
                   d.phone);
            found=1;
        }
    }

    if(!found)
        printf("No donor found\n");

    fclose(fp);
}
