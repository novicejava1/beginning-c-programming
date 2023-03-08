/* Example to demonstrate Macro usage */
#include <stdio.h>              // This is a preprocessor step that includes stdio.h content

#define LENGTH 50
#define Print(var) printf("%s\n", var)       // This is a macro allowing multiple parameterized substitutions

int main(void)
{
    char var[LENGTH] = "This is C Programming";
    Print(var);
}
