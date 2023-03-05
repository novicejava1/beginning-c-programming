/* Example to Declare, Initialize and Display a Strcture */
# include <stdio.h>

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
    struct Horse dobbin = { 24, 17,"Dobbin", "Trigger", "Flossie" };        // Initialize a Structure of Type Horse with variable dobbin and their values
    printf("Name : %s\n", dobbin.name);                                     // Display name
    printf("Age : %d\n", dobbin.age);                                       // Display age
    printf("Height : %d\n", dobbin.height);                                 // Display Height
    printf("Father : %s\n", dobbin.father);                                 // Display Father
    printf("Mother : %s\n", dobbin.mother);                                 // Display Mother

    return 0;
}
