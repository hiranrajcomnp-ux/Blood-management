#include <stdio.h>
#include <stdlib.h>
#include "../include/receiver.h"

#define RECEIVER_FILE "data/receivers.dat"

void addReceiver()
{
    FILE *fp;
    Receiver r;

    fp=fopen(RECEIVER_FILE,"ab");

    printf("ID: ");
    scanf("%d",&r.id);

    printf("Name: ");
    scanf(" %[^\n]",r.name);

    printf("Blood Group: ");
    scanf("%s",r.bloodGroup);

    printf("Units Required: ");
    scanf("%d",&r.unitsRequired);

    printf("Phone: ");
    scanf("%s",r.phone);

    fwrite(&r,sizeof(Receiver),1,fp);

    fclose(fp);

    printf("Receiver Added\n");
}

void viewReceivers()
{
    FILE *fp;
    Receiver r;

    fp=fopen(RECEIVER_FILE,"rb");

    if(fp==NULL)
        return;

    while(fread(&r,sizeof(Receiver),1,fp))
    {
        printf("\nID:%d",r.id);
        printf("\nName:%s",r.name);
        printf("\nBlood Group:%s",r.bloodGroup);
        printf("\nUnits:%d",r.unitsRequired);
        printf("\nPhone:%s\n",r.phone);
    }

    fclose(fp);
}
