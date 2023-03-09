/* Example to get the local time */
#include <stdio.h>
#include <time.h>


int main(void)
{
    time_t calendar = time(NULL);
    struct tm *time_data;
    time_data = localtime(&calendar);
    const char *days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    const char *months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
    //printf("%s\n", days[time_data->tm_wday]);
    printf("Today is %s %s %d %d\n", days[time_data->tm_wday], months[time_data->tm_mon], time_data->tm_mday, time_data->tm_year+1900);
    
    return 0;
}