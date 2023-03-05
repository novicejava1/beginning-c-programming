/* Example Readinga Strucuture type data */
#include <stdio.h>

typedef struct Horse Horse;

typedef struct Horse Horse;// Define Horse as a type name

// Declare a Structure of Type Horse
struct Horse
{
    int age;
    int height;
    char name[20];
    char father[20];
    char mother[20];
};

int main(void)
{
    Horse trigger;

    printf("Enter the name of Horse: ");
    scanf("%s", trigger.name);

    printf("Enter the age of Horse: ");
    scanf("%d", &trigger.age);

    printf("Enter the height of Horse: ");
    scanf("%d", &trigger.height);

    printf("Enter the father name: ");
    scanf("%s", trigger.father);

    printf("Enter the mother name: ");
    scanf("%s", trigger.mother);   

    printf("Name : %s\n", trigger.name);                                     // Display name
    printf("Age : %d\n", trigger.age);                                       // Display age
    printf("Height : %d\n", trigger.height);                                 // Display Height
    printf("Father : %s\n", trigger.father);                                 // Display Father
    printf("Mother : %s\n", trigger.mother);                                 // Display Mother

    return 0;
}