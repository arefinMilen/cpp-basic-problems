#include <stdio.h>

int main() {
    char str[200], delim[10];  
    char tokens[20][50];  
    int i = 0, j = 0, k = 0;
    char ch;

    printf("Enter a string: ");
    while (1) {
        ch = getchar();
        if (ch == '\n') break;
        str[i++] = ch;
    }
    str[i] = '\0';

    printf("Enter delimiters: ");
    i = 0;
    while (1) {
        ch = getchar();
        if (ch == '\n') break;
        delim[i++] = ch;
    }
    delim[i] = '\0';

    i = 0;
    while (str[i] != '\0') {
        int is_delim = 0;
        
        for (j = 0; delim[j] != '\0'; j++) {
            if (str[i] == delim[j]) {
                is_delim = 1;
                break;
            }
        }

        if (is_delim) {   
            if (k > 0) {
                tokens[j][k] = '\0';
                j++;
                k = 0;
            }
        } else {   
            tokens[j][k++] = str[i];
        }
        i++;
    }

    if (k > 0) {   
        tokens[j][k] = '\0';
        j++;
    }
    printf("Tokens:\n");
    for (i = 0; i < j; i++) {
        printf("%s\n", tokens[i]);
    }

    return 0;
}
