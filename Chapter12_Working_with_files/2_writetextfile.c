/* Example to demonstarte writing to a text file a character string */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LENGTH 81               // Max input length

int main(void)
{
    char mystr[LENGTH];                     // Input a string
    int mychar = 0;                         // character for output
    FILE *pfile = NULL;                     // file pointer
    char *filename = "2_writetofile.txt"; 

    printf("Enter a string of up to %d character\n", LENGTH-1);
    if(!fgets(mystr, LENGTH, stdin))        // Read a string
    {
        printf("Input from keyboard failed.\n");
        exit(1);
    }

    pfile = fopen(filename, "w");
    if(!pfile)
    {                                // Open myfile.txt to write it
        printf("Failed to open file: %s\n", filename);
        exit(1);
    }
    else
    {
        printf("File Opened successfully\n");
    }

    setvbuf(pfile, NULL, _IOFBF, BUFSIZ); // Buffer the file

    for(int i = strlen(mystr) - 1; i >=0; --i)
    {
        fputc(mystr[i], pfile);         // Write string to file backward        
    }

    fclose(pfile);      // close the file

    pfile = fopen(filename, "r");
    if(!pfile)
    {                                // Open myfile.txt to read it
        printf("Failed to open file: %s\n", filename);
        exit(1);
    }
    else
    {
        printf("File Opened successfully\n");
    }

    setvbuf(pfile, NULL, _IOFBF, BUFSIZ);       // Buffer the file
    // Read a character from the file and display it
    printf("the data read from the file is:\n");
    while((mychar = fgetc(pfile)) != EOF)
        putchar(mychar);
    putchar('\n');

    fclose(pfile);
    pfile = NULL;
    remove(filename);

    return 0;

}
