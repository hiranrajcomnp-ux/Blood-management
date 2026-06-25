#ifndef RECEIVER_H
#define RECEIVER_H

typedef struct
{
    int id;
    char name[50];
    char bloodGroup[5];
    int unitsRequired;
    char phone[20];
} Receiver;

void addReceiver();
void viewReceivers();

#endif
