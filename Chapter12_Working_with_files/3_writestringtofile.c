/* Example to demonstrate read and write string to a file */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define LENGTH 81

int main(void)
{
    char *proverbs[] = { "Many a mickle makes a muckle.\n",
                        "Too many cooks spoil the broth.\n",
                        "He who laughs last didn't get the joke in"
                        " the first place.\n"
                        };
    
    char more[LENGTH];
    FILE *pfile = NULL;
    char *filename = "3_writestringtofile.txt";

    // Open file to write string
    pfile = fopen(filename, "w");
    if(!pfile)
    {
        printf("Error opening %s for writing. Program terminated.\n", filename);
        exit(1);
    }
    setvbuf(pfile, NULL, _IOFBF, BUFSIZ); // Buffer the file

    // Write the proverb string to file
    for(size_t i = 0 ; i < sizeof(proverbs)/sizeof(proverbs[0]) ; ++i)
    {
        if(EOF == fputs(proverbs[i], pfile))
        {
            printf("Error writing file.\n");
            exit(1);
        }        
    }
    fclose(pfile);
    pfile = NULL;

    pfile = fopen(filename, "a");
    if(!pfile)
    {
        printf("Error opening %s for appending. Program terminated.\n", filename);
        exit(1);
    }
    setvbuf(pfile, NULL, _IOFBF, BUFSIZ); // Buffer the file
    printf("Enter proverbs of up to %d characters or press Enter to end:\n", LENGTH - 1);

    while(true)
    {
        fgets(more, LENGTH, stdin);         // Read a proverb
        if(more[0] == '\n')
            break;
        
        if(EOF == fputs(more, pfile))
        {
            printf("Error writing file.\n");
            exit(1);
        }
    }
    fclose(pfile);
    pfile = NULL;

    // Open file to read the proverbs
    pfile = fopen(filename, "r");
    if(!pfile)
    {
        printf("Error opening %s for reading. Program terminated.\n", filename);
        exit(1);
    }
    setvbuf(pfile, NULL, _IOFBF, BUFSIZ); // Buffer the file    

    printf("The proverbs in the file are:\n");
    while(fgets(more, LENGTH, pfile))
        printf("%s", more);

    fclose(pfile);
    remove(filename);
    pfile = NULL;
    return 0;

}
