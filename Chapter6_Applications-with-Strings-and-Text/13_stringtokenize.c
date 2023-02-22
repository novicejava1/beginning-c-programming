/* Tokenizing a string based on a set of delimiters */
#include <stdio.h>
#include <string.h>

int main()
{
    char delimiters[] = " \".,;:!?)(";                 // a set of delimiter characters
    char str[] = "Docker is a popular tool among developers for containerizing an application."
                 "Kubernetes is the next level orchestration tool to managed these containers";
    
    char *token = strtok(str, delimiters);          // Get the first token and inserts a \0 null character after the token

    while (token)
    {
        printf("%s\n", token);
        token = strtok(NULL, delimiters);           // Next iteration of search for token starts after the null character inserted after first token

    }
    
    return 0;
}