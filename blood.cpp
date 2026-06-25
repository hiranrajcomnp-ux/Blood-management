#ifndef DONOR_H
#define DONOR_H

typedef struct
{
    int id;
    char name[50];
    int age;
    char gender[10];
    char bloodGroup[5];
    char phone[20];
    char address[100];
} Donor;

void addDonor();
void viewDonors();
void searchDonor();
void updateDonor();
void deleteDonor();

#endif
