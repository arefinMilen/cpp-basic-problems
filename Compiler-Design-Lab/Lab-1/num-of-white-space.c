#include<stdio.h>

int main() {
    char str[200];
    int count = 0, i = 0;
    char ch;

    printf("Enter a string : ");

    while (1) {
        ch = getchar();
        if(ch == '\n')
          break;
        str[i] = ch;
        i++;
    }
    str[i] = '\0';

    i = 0;
    while (str[i] ! = '0')
    {
        if(str[i] == ' ')
        {
            count++;
        }
        i++;
    }
    printf("Number of white spaces %d\n", count);
}