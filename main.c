#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>

char * parse(char* input) 
{
    
}

char* read_line() 
{
    char* buffer;
    size_t buffer_size = 100;
    size_t line;

    buffer = (char) malloc(buffer_size * sizeof(char));

    if (buffer == NULL) 
    {
        printf("Error: Failed to allocate memory");
        exit(1);
    }

    line = getline(buffer, buffer_size, stdin);

    return buffer;
}

int main()
{
    printf("Shell\n");
    printf("\n");

    while (true)
    {
        char *input = read_line();

        char **parsed = parse(input);

        execute(parsed);

        free(input);
        free(parsed);
    }
}
