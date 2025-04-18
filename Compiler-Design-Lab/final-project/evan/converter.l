%{
#include "converter.tab.h"
#include <string.h>
%}

%%

[ \t]+              ;  // skip whitespace
bin                 { return BIN; }
hex                 { return HEX; }
oct                 { return OCT; }
dec                 { return DEC; }
[0-9a-fA-F]+        { yylval.str = strdup(yytext); return NUMBER; }
\n                  { return 0; }
.                   { printf("Unknown character: %s\n", yytext); }

%%

int yywrap(void) {
    return 1;
}
