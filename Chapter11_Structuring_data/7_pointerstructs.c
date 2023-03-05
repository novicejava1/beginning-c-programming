/* Example structure with a pointer structure */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct Horse Horse;

struct Horse
{
    int age;
    int height;
    char name[20];
    char father[20];
    char mother[20];
    Horse *next;            // Pointer to next Horse structure
};

int main(void)
{
    Horse *first = NULL;
    Horse *current = NULL;
    Horse *previous = NULL;

    char test = '\0';

    for(;;)
    {
        printf("Do you want to enter details of a%s horse (Y or N)? ", first != NULL?"nother" : "" );
        scanf(" %c", &test);
        if(tolower(test) == 'n')
            break;
        
        // Allocate memory for Horse struct
        current = (Horse*) malloc(sizeof(Horse));
        if(first == NULL)
            first = current;
        
        if(previous != NULL)
            previous->next = current;
        
        printf("Enter the name of the horse: ");
        scanf("%s", current->name);

        printf("How old is %s? ", current->name);
        scanf("%d", &current->age);

        printf("How high is %s ( in hands )? ", current -> name );
        scanf("%d", &current->height);
        
        printf("Who is %s's father? ", current->name);
        scanf("%s", current->father);
        
        printf("Who is %s's mother? ", current->name);
        scanf("%s", current->mother);

        current->next = NULL;
        previous = current;
    }

    // Now tell them what we know...
    printf("\n");
    current = first;     // Start at the beginning
    while (current != NULL)    // As long as we have a valid pointer
    { // Output the data
    printf("%s is %d years old, %d hands high,", current->name, current->age, current->height);
    printf(" and has %s and %s as parents.\n", current->father, current->mother);
    previous = current;            // Save the pointer so we can free memory
    current = current->next;       // Get the pointer to the next
    free(previous);                // Free memory for the old one
    previous = NULL;
    }
    first = NULL;

    return 0;

}

