/* Example to demonstrate string as macro */
#include <stdio.h>
#define STR     "This is very risky\n"
#define DISPLAY(str) printf("%s\n", str);
#define DISPLAY2(str) printf("%s\n", #str);


int main(void)
{
    printf(STR);
    //DISPLAY(Output this String);      // This wont work as arugment will not be detected as string
    DISPLAY("Output this String");
    DISPLAY2(Output this String2);      // arguement is converted as string with double quotes 
}
