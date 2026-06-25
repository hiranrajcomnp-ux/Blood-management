#include <stdio.h>
#include <string.h>
#include "../include/stock.h"

BloodStock stock[8]={
{"A+",0},
{"A-",0},
{"B+",0},
{"B-",0},
{"AB+",0},
{"AB-",0},
{"O+",0},
{"O-",0}
};

void viewStock()
{
    int i;

    printf("\nBlood Stock\n");

    for(i=0;i<8;i++)
    {
        printf("%s : %d Units\n",
        stock[i].bloodGroup,
        stock[i].units);
    }
}

void addStock()
{
    char bg[5];
    int unit,i;

    printf("Blood Group: ");
    scanf("%s",bg);

    printf("Units: ");
    scanf("%d",&unit);

    for(i=0;i<8;i++)
    {
        if(strcmp(stock[i].bloodGroup,bg)==0)
        {
            stock[i].units+=unit;
        }
    }
}

void reduceStock()
{
    char bg[5];
    int unit,i;

    printf("Blood Group: ");
    scanf("%s",bg);

    printf("Units: ");
    scanf("%d",&unit);

    for(i=0;i<8;i++)
    {
        if(strcmp(stock[i].bloodGroup,bg)==0)
        {
            stock[i].units-=unit;
        }
    }
}
