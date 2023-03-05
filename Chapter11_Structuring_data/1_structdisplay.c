/* Example to Declare, Initialize and Display a Strcture */
# include <stdio.h>

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
    Horse dobbin = { 24, 17,"Dobbin", "Trigger", "Flossie" };        // Initialize a Structure of Type Horse with variable dobbin and their values
    Horse trigger = {
        .height = 15, .age = 30, .name = "Trigger", .mother = "Wesson", .father = "Smith"   // Initialize using memeber variable names, order is not important
        };
    printf("Name : %s\n", dobbin.name);                                     // Display name
    printf("Age : %d\n", dobbin.age);                                       // Display age
    printf("Height : %d\n", dobbin.height);                                 // Display Height
    printf("Father : %s\n", dobbin.father);                                 // Display Father
    printf("Mother : %s\n", dobbin.mother);                                 // Display Mother

    printf("\n");
    
    printf("Name : %s\n", trigger.name);                                     // Display name
    printf("Age : %d\n", trigger.age);                                       // Display age
    printf("Height : %d\n", trigger.height);                                 // Display Height
    printf("Father : %s\n", trigger.father);                                 // Display Father
    printf("Mother : %s\n", trigger.mother);                                 // Display Mother

    return 0;
}
