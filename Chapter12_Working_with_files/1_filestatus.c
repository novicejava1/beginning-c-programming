/* Example to write to a file */
#include <stdio.h>

int main(void)
{
    FILE *fp = NULL;
    char *filename = "1_filestatus.txt";
    fp = fopen(filename, "w"); 
    if(!fp)                                 // Open myfile.txt to write it
        printf("Failed to open file: %s\n", filename);
    else
        printf("File %s Opened successfully for Write\n", filename);

    fclose(fp);             // close the file
    fp = NULL;              // set file pointer to null
    remove(filename);
    return 0;
}