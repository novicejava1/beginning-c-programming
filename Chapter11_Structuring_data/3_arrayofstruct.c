/* Example to demonstrate array of structures */
#include <stdio.h>
#include <ctype.h>

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
    Horse trigger[50];                  // Array of Horse elements
    int hcount = 0;                     // Count of the number of horses
    char test = '\0';                   // Test value for ending

    for(hcount = 0; hcount < sizeof(trigger)/sizeof(Horse); ++hcount)
    {
        printf("Do you want to enter details of a%s Horse (Y or N):\n", hcount?"nother":"");
        scanf(" %c", &test);
        if(tolower(test) == 'n')
            break;

        printf("Enter the name of Horse: ");
        scanf("%s", trigger[hcount].name);

        printf("Enter the age of Horse: ");
        scanf("%d", &trigger[hcount].age);

        printf("Enter the height of Horse: ");
        scanf("%d", &trigger[hcount].height);

        printf("Enter the father name: ");
        scanf("%s", trigger[hcount].father);

        printf("Enter the mother name: ");
        scanf("%s", trigger[hcount].mother);           

    }

    return 0;

}