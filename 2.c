#include <stdio.h>

int isLeapYear();
int main()
{

    isLeapYear();
    return 0;
}

int isLeapYear()
{
    int year = 0;
    printf("Enter Year : ");
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 != 0)
            {
                printf("Not a Leap Year");
                return 0;
            }
            printf("Leap Year");
            return 0;
        }
        printf("Leap Year");
        return 0;
    }
    else
    {
        printf("Not a Leap Year");
    }

    return 0;
}