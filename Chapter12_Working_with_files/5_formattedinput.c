/* Example to demonstrate reading formatted input file */
#include <stdio.h>

int main(void)
{
    char *filename = "5_formattedinput.txt";
    FILE *pfile = NULL;
    int num1 = 1234, num2 = 4567;
    float pi = 3.1416f;

    pfile = fopen(filename, "w");
    if(!pfile)
    {
        printf("Error opening file for writing. Program terminated.\n");
        exit(1);
    }

    if(0 > fprintf(pfile, "%12d%12d%14f", num1, num2, pi))
        printf("Failed to write the file.\n");

    fclose(pfile);
    pfile = NULL;
    //remove(filename);             // Uncomment this to remove the file

    pfile = fopen(filename, "r");
    if(!pfile)
    {
        printf("Error opening file for reading. Program terminated.\n");
        exit(1);
    }
    
    if(EOF == fscanf(pfile, "%12d%12d%14f", &num1, &num2, &pi))
        printf("Failed to read the file.\n");

    fclose(pfile);
    pfile = NULL;
    remove(filename);             // Uncomment this to remove the file

}

