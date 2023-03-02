/* Example Function to calculate average */
#include <stdio.h>
#define MAX_COUNT 50

// Function to calculate average
double Sum(double x[], size_t n)
{
    double sum = 0.0;
    for(size_t i = 0; i < n; ++i)
        sum += x[i];
    
    return sum;
}


// Function to GetData
size_t GetData(double *data, size_t max_count)
{
    size_t nValues = 0;
    printf("How many values do you want to enter (Maximum %zd)? ", max_count);
    scanf("%zd", &nValues);
    if(nValues > max_count)
    {
        printf("Maximum count exceeded. %zd items will be read.", max_count);
        nValues = max_count;
    }
    for( size_t i = 0 ; i < nValues ; ++i)
        scanf("%lf", &data[i]);
    return nValues;
}

// Function to calculate average
double Average(double x[], size_t n)
{
    return Sum(x, n)/n;
}

// Main Function
int main(void)
{
    double samples[MAX_COUNT] = {0.0};
    size_t sampleCount = GetData(samples, MAX_COUNT);
    double average = Average(samples, sampleCount);
    printf("Average of values entered is : %.2lf\n", average);

    return 0;
}
