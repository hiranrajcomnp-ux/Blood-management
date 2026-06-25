#ifndef STOCK_H
#define STOCK_H

typedef struct
{
    char bloodGroup[5];
    int units;
} BloodStock;

void initializeStock();
void viewStock();
void addStock();
void reduceStock();

#endif
