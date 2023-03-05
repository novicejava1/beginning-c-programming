/* Example to demonstrate structure in structure */
#include <stdio.h>

typedef struct Horse Horse;
typedef struct Date Date;

struct Date
{
    int day;
    int month;
    int year;
};

struct Horse
{
    Date dob;
    int height;
    char name[20];
    char father[20];
    char mother[20];
};

int main(void)
{
    Horse trigger = {
         .height = 15, .name = "Trigger", .mother = "Wesson", .father = "Smith", .dob.day = 01, .dob.month = 01, .dob.year = 2025
    };


    printf("Name : %s\n", trigger.name);                                     // Display name
    printf("Height : %d\n", trigger.height);                                 // Display Height
    printf("Father : %s\n", trigger.father);                                 // Display Father
    printf("Mother : %s\n", trigger.mother);                                 // Display Mother
    printf("Day : %d\n", trigger.dob.day);                                     // Display name
    printf("Month : %d\n", trigger.dob.month);                                     // Display name
    printf("Year : %d\n", trigger.dob.year);
    
    return 0;                                     // Display name

}