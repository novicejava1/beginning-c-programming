/* Example to demostrate pointer to structure */
#include <stdio.h>

typedef struct Horse Horse;

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
    Horse trigger = {
        .height = 15, .age = 30, .name = "Trigger", .mother = "Wesson", .father = "Smith"   // Initialize using memeber variable names, order is not important
        };
    
    Horse *ptrigger = &trigger;              // Pointer of type Horse storing the address of trigger variable;

    printf("Address of trigger variable : %p\n", ptrigger);
    //printf("Value of trigger : %d\n", *ptrigger);

    printf("Name : %s\n", (*ptrigger).name);                                     // Display name
    printf("Age : %d\n", (*ptrigger).age);                                       // Display age
    printf("Height : %d\n", (*ptrigger).height);                                 // Display Height
    printf("Father : %s\n", (*ptrigger).father);                                 // Display Father
    printf("Mother : %s\n", (*ptrigger).mother);                                 // Display Mother

    printf("\n");

    printf("Another way to reference a pointer structure member\n\n");
    printf("Name : %s\n", ptrigger->name);                                     // Display name
    printf("Age : %d\n", ptrigger->age);                                       // Display age
    printf("Height : %d\n", ptrigger->height);                                 // Display Height
    printf("Father : %s\n", ptrigger->father);                                 // Display Father
    printf("Mother : %s\n", ptrigger->mother);                                 // Display Mother

    return 0;
}