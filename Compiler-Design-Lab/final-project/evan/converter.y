%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int yylex();
void yyerror(const char *s);

void convertAndPrint(const char* baseType, const char* value);
int binToDecimal(const char *binStr);
%}

%union {
    int num;
    char* str;
}

%token <str> NUMBER
%token BIN HEX OCT DEC

%%

input:
    BIN NUMBER  { convertAndPrint("bin", $2); free($2); }
    | HEX NUMBER { convertAndPrint("hex", $2); free($2); }
    | OCT NUMBER { convertAndPrint("oct", $2); free($2); }
    | DEC NUMBER { convertAndPrint("dec", $2); free($2); }
    ;

%%

void yyerror(const char *s) {
    fprintf(stderr, "Error: %s\n", s);
}

int binToDecimal(const char *binStr) {
    int result = 0;
    while (*binStr) {
        if (*binStr == '0' || *binStr == '1') {
            result = result * 2 + (*binStr - '0');
        } else {
            printf("Invalid binary digit: %c\n", *binStr);
            return -1;
        }
        binStr++;
    }
    return result;
}

void convertAndPrint(const char* baseType, const char* value) {
    int decimal = 0;

    if (strcmp(baseType, "bin") == 0) {
        decimal = binToDecimal(value);
        printf("Input (Binary): %s\n", value);
    } else if (strcmp(baseType, "hex") == 0) {
        sscanf(value, "%x", &decimal);
        printf("Input (Hex): %s\n", value);
    } else if (strcmp(baseType, "oct") == 0) {
        sscanf(value, "%o", &decimal);
        printf("Input (Octal): %s\n", value);
    } else if (strcmp(baseType, "dec") == 0) {
        decimal = atoi(value);
        printf("Input (Decimal): %s\n", value);
    }

    printf("Decimal: %d\n", decimal);

    // Binary Conversion
    printf("Binary: ");
    if (decimal == 0) {
        printf("0");
    } else {
        char bin[64];
        int i = 0, n = decimal;
        while (n > 0) {
            bin[i++] = (n % 2) + '0';
            n /= 2;
        }
        for (int j = i - 1; j >= 0; j--) {
            printf("%c", bin[j]);
        }
    }
    printf("\n");

    printf("Octal: %o\n", decimal);
    printf("Hex: %X\n", decimal);
}

int main() {
    printf("Enter conversion (bin/hex/oct/dec number):\n");
    yyparse();
    return 0;
}
