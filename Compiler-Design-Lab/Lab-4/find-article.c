#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Convert a string to lowercase
void toLowerCase(char *str) {
    for (int i = 0; str[i]; i++)
        str[i] = tolower(str[i]);
}

int main() {
    char input[200];
    char word[20];
    int a_count = 0, an_count = 0, the_count = 0;

    printf("Enter a sentence:\n");
    fgets(input, sizeof(input), stdin);

    // Tokenize the input using space and punctuation
    const char *delimiters = " .,;:!?\"\n";
    char *token = strtok(input, delimiters);

    while (token != NULL) {
        strcpy(word, token);  // Copy the token to a new buffer
        toLowerCase(word);    // Convert word to lowercase

        if (strcmp(word, "a") == 0)
            a_count++;
        else if (strcmp(word, "an") == 0)
            an_count++;
        else if (strcmp(word, "the") == 0)
            the_count++;

        token = strtok(NULL, delimiters);
    }

    // Print the result
    printf("\nAnalysis of the given input:\n");
    printf("A   - %d\n", a_count);
    printf("An  - %d\n", an_count);
    printf("The - %d\n", the_count);

    return 0;
}
