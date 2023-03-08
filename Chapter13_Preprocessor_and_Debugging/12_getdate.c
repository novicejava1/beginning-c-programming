/* Example to get date from calendar time */
#include <stdio.h>
#include <time.h>
#include <string.h>

int main(void)
{
    char str[20] = {'\0'};
    time_t calendar = time(NULL);
    char result[80]; 
    strcpy(result, ctime(&calendar));
    //printf("Current time = %s", ctime(&calendar));
    printf("Current time = %s", result);
}