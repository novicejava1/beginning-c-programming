/* Example to demonstrate elapsed time and processor time */
#include <stdio.h>
#include <time.h>
#include <math.h>
#include <ctype.h>

int main(void)
{
    time_t calendar_start = time(NULL);       // Initial calendar time
    clock_t cpu_start = clock();        // Initial clock time
    int count = 0;
    const long long iterations = 10000000LL; // Loop iterations
    char answer = 'y';
    double x = 0.0;

    printf("Initial clock time = %lld Initial calendar time = %lld\n", (long long)cpu_start, (long long)calendar_start);
    while (tolower(answer) == 'y')
    {
        for(long long i = 0LL ; i < iterations ; ++i)
            x = sqrt(3.14159265);

        printf("%lld square roots completed.\n", iterations*(++count));
        printf("Do you want to run some more(y or n)? \n");
        scanf("\n%c", &answer);

    }

    clock_t cpu_end = clock();      // Final cpu time
    time_t calendar_end = time(NULL);  // Final calendar time

    printf("Final clock time = %lld Final calendar time = %lld\n", (long long)cpu_end, (long long)calendar_end);
    printf("CPU time for %lld iterations is %.2lf seconds\n", count*iterations, ((double)(cpu_end-cpu_start))/CLOCKS_PER_SEC);
    printf("Elapsed calendar time to execute the program is %8.2lf seconds.\n", difftime(calendar_end, calendar_start));

    return 0;
}