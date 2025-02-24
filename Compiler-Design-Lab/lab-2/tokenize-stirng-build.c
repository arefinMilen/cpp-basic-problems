#include <stdio.h>
#include <string.h>   

int main() {
    char str[200];  
    char delim[10];  
    char *token;  

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  

    printf("Enter delimiters: ");
    fgets(delim, sizeof(delim), stdin);  
    
    token = strtok(str, delim);
    while (token != NULL) {
        printf("Token: %s\n", token);
        token = strtok(NULL, delim);  
    }

    return 0;
}
