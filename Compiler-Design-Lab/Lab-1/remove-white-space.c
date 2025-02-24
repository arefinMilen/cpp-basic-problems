#include<stdio.h>

int main() {
    char str[200],result[200];
    int i = 0, j = 0;
    char ch;

    printf("Enter a string: \n");

    while(1) {
        ch = getchar();
        if (ch == '\n')
        break;
    str[i] = ch;
    i++;
    }
    str[i] = '\0';
    i = 0;
    while (str[i] !='\0') {
        if (str[i] != ' '){
            result[j]=str[i]j
            j++;
        }
        i++;
    }
    result[j]='\0';

    printf("String without spaces: %s\n", result);
    return 0;
}