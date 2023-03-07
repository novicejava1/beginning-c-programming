/* Example to demonstrate formatted IO */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    long num1 = 234567L;                // Input values
    long num2 = 345123L;
    long num3 = 789234L;

    long num4 = 0L;                     // Values read from input file
    long num5 = 0L;
    long num6 = 0L;

    float fnum = 0.0f;
    int ival[6] = {0};
    FILE *pfile = NULL;
    char *filename = "6_formattedIO.txt";

    pfile = fopen(filename, "w");
    if(!pfile)
    {
        printf("Error opening %s for writing. Program terminated.\n", filename);
        exit(1);
    }
    setbuf(pfile, NULL);
    fprintf(pfile, "%6ld%6ld%6ld", num1, num2, num3);
    fclose(pfile);
    printf(" %6ld %6ld %6ld\n", num1, num2, num3);

    pfile = fopen(filename, "r");
    if(!pfile)
    {       
        printf("Error opening %s for reading. Program terminated.\n", filename);
        exit(1);
    }
    setbuf(pfile, NULL);
    fscanf(pfile, "%6ld%6ld%6ld", &num4, &num5 ,&num6);
    printf(" %6ld %6ld %6ld\n", num4, num5, num6);

    rewind(pfile);
    fscanf(pfile, "%2d%3d%3d%3d%2d%2d%3f", &ival[0], &ival[1], &ival[2], &ival[3], &ival[4] , &ival[5], &fnum);
    fclose(pfile);
    remove(filename);

    // Output the results
    printf("\n");
    for(size_t i = 0 ; i < sizeof(ival)/sizeof(ival[0]) ; ++i)
    printf("%sival[%zd] = %d", i == 4 ? "\n\t" : "\t", i, ival[i]);
    printf("\nfnum = %f\n", fnum);
    return 0;   

}