/* Example to get the function name */
#include <stdio.h>

void print_this_func_name();

void print_this_func_name()
{
    printf("%s was called\n", __func__);            // __func__ is a standard macro
    printf("Program last compiled at %s on %s\n", __TIME__, __DATE__ );   // The __DATE__ macro generates a string representation of the date in the form Mmm dd yyyy and __TIME__ in hh:mm:ss

}

int main()
{
    print_this_func_name();
    return 0;    
}