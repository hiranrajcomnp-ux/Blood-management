#include <stdio.h>
#include <stdlib.h>
#include "auth.h"

void dashboard()
{
    printf("\n====================================");
    printf("\n      BLOOD MANAGEMENT SYSTEM");
    printf("\n====================================");
    printf("\n1. Donor Management");
    printf("\n2. Receiver Management");
    printf("\n3. Blood Stock");
    printf("\n4. Reports");
    printf("\n5. Backup");
    printf("\n6. Logout");
    printf("\n7. Exit");
    printf("\n====================================");
}

int main()
{
    int choice;

    createDefaultUser();

    while(1)
    {
        if(!login())
        {
            printf("\nInvalid Username or Password!\n");
            continue;
        }

        while(1)
        {
            dashboard();

            printf("\nEnter Choice: ");
            scanf("%d", &choice);

            switch(choice)
            {
                case 1:
                    printf("\nDonor Module Coming in Part 2\n");
                    break;

                case 2:
                    printf("\nReceiver Module Coming in Part 3\n");
                    break;

                case 3:
                    printf("\nStock Module Coming in Part 4\n");
                    break;

                case 4:
                    printf("\nReport Module Coming in Part 5\n");
                    break;

                case 5:
                    printf("\nBackup Module Coming in Part 5\n");
                    break;

                case 6:
                    printf("\nLogged Out Successfully.\n");
                    goto LOGIN_AGAIN;

                case 7:
                    printf("\nThank You.\n");
                    exit(0);

                default:
                    printf("\nInvalid Choice!\n");
            }
        }

LOGIN_AGAIN:
        ;
    }

    return 0;
}
