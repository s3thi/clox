#include <stdio.h>

#include "scanner.h"

void compile(const char *source) {
    initScanner(source);
    int line = -1;
    for (;;) {
        Token token = scanToken();
        if (token.line != line) {
            printf("%4d ", token.line);
            line = token.line;
        } else {
            printf("   | ");
        }

        // Print the first token.length characters of the string, starting at token.start.
        // The token simply points into the source string. There is no null terminator anywhere
        // to mark the beginning or the end of a token. So we use this clever feature of printf.
        printf("%2d '%.*s'\n", token.type, token.length, token.start);

        if (token.type == TOKEN_EOF) break;
    }
}
