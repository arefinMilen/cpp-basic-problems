#include <stdio.h>

int main() {

    char str[100];
    int vowel = 0, consonents = 0, digits = 0;
    int i = 0;
    char ch;

    printf("enter a stirng : ");

    while(1) {
        ch = getchar();
        if(ch == '\n')
        break;
    str[i] = ch;
    i++;
    }
    str[i] = '\0';

    i = 0;
    while (str[i] !='\0') {
        ch = str[i];

        if(ch =='a' || ch =='e' ||ch =='i' || ch =='o' || ch =='u' || ch =='A' || ch =='E' || ch =='I' || ch =='O' || ch =='U')
        {
            vowels++;
        }
        else if ((ch >= 'a' && ch <='z') || (ch >= 'A' && ch <='Z')) {
            consonents;
        }
        i++;
}
printf("vowels: ");
char v[] = {
    '0' +vowels, '\0'
};
printf(v);
printf("\nConsonents: ");
char c[] = {'0' + consonents, '\0'};
printf(c);
printf("\nDigits: ");
char d[] = {'0' + digits, '0'};
printf(d);
printf("\n");

return 0;
}