/* Example on variable scoping */
#include <stdio.h>

int main(void)
{
    int count1 = 1;                         // outer block variable

    do
    {
        int count2 = 0;                     // inner block variable
        ++count2;
        printf("count1 = %d, count2 = %d\n", count1, count2);  
    } while ( ++count1 < 5);

    printf("count1 = %d\n", count1);

    return 0;    
}