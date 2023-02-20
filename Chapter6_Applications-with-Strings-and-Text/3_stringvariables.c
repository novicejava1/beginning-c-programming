/* String variable examples */
#include <stdio.h>

int main(void)
{
    char emptiee[20];                                   // Declaring a string variable array
    char message[20] = "This is a string!!";            // Declare and Initialize a string variable. Explicitly define array dimension
    char random[] = "This is a random length string";   // Random length of string array. RECOMMENDED. Compiler will decide the dimension
    const char thought[] = "Keep alive your strings";

    printf("%s\n", emptiee);
    printf("%s\n", message);
    printf("%s\n", random);
    printf("%s\n", thought);

    return 0;
}