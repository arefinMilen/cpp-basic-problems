#include <stdio.h>

int main() {
    char str[200];  // Array to store input string
    int vowels = 0, consonants = 0, digits = 0;
    int i = 0;
    char ch;

    // Prompt user for input
    printf("Enter a string: ");

    // Read input manually character by character
    while (1) {
        ch = getchar();  // Read a single character
        if (ch == '\n')  // Stop reading when Enter key is pressed
            break;
        str[i] = ch;  // Store character in array
        i++;
    }
    str[i] = '\0';  // Manually null-terminate the string

    // Count vowels, consonants, and digits manually
    i = 0;
    while (str[i] != '\0') {
        ch = str[i];

        // Check if the character is a vowel
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowels++;
        }
        // Check if the character is a digit
        else if (ch >= '0' && ch <= '9') {
            digits++;
        }
        // Check if the character is a consonant (A-Z or a-z but not a vowel)
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            consonants++;
        }

        i++;
    }

    // Print results
    printf("Vowels: ");
    char v[] = {'0' + vowels, '\0'};
    printf(v);
    printf("\nConsonants: ");
    char c[] = {'0' + consonants, '\0'};
    printf(c);
    printf("\nDigits: ");
    char d[] = {'0' + digits, '\0'};
    printf(d);
    printf("\n");

    return 0;
}
