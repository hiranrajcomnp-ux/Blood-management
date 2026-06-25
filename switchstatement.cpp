#include <stdio.h>

int main()
{
    int day = 2;

    switch(day)
    {
        case 1: printf("Sunday"); break;
        case 2: printf("Monday"); break;
        default: printf("Invalid");
    }

    return 0;
}
