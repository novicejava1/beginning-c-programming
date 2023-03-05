/* Example to allocate memory for strcuture */
#include <stdio.h>
#include <ctype.h>          // For tolower function
#include <stdlib.h>         // For malloc function

typedef struct Horse Horse;

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
    Horse *phorses[50];                 // Array of pointers to structure. Only Memory allocated to the pointers
    int hcount = 0;
    char test = '\0';

    for(hcount = 0; hcount < sizeof(phorses)/sizeof(Horse*); ++hcount)
    {
        printf("Do you want to enter details of a%s horse (Y or N)? ", hcount?"nother" : "" );
        scanf(" %c", &test);
        if(tolower(test) == 'n')
            break;

        // allocate memory to hold a horse structure
        phorses[hcount] = (Horse*) malloc(sizeof(Horse));

        printf("Enter the name of Horse: ");
        scanf("%s", phorses[hcount]->name);

        printf("Enter the age of Horse: ");
        scanf("%d", &phorses[hcount]->age);

        printf("Enter the height of Horse: ");
        scanf("%d", &phorses[hcount]->height);

        printf("Enter the father name: ");
        scanf("%s", phorses[hcount]->father);

        printf("Enter the mother name: ");
        scanf("%s", phorses[hcount]->mother);   

        printf("Name : %s\n", phorses[hcount]->name);                                     // Display name
        printf("Age : %d\n", phorses[hcount]->age);                                       // Display age
        printf("Height : %d\n", phorses[hcount]->height);                                 // Display Height
        printf("Father : %s\n", phorses[hcount]->father);                                 // Display Father
        printf("Mother : %s\n", phorses[hcount]->mother);                                 // Display Mother

    }

    for (int i = 0 ; i < hcount ; ++i)
    {
        printf("%s is %d years old, %d hands high,", phorses[i]->name, phorses[i]->age, phorses[i]->height);
        printf(" and has %s and %s as parents.\n", phorses[i]->father, phorses[i]->mother);
        free(phorses[i]);
    }

    return 0;

}
