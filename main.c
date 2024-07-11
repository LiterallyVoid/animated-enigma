#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <ctype.h>

char *source = "foo a, b: int { return a + b }";

enum { NAME, INT, COMMA };

int tok;
uint64_t tok_i;

void advance(void) {
    if (isdigit(*source)) {
tok = INT;
tok_i = 0;
while (isdigit(*source)) {
tok_i *= 10;
tok_i += *source - '0';
    source++;

}
    } else if (isalpha(*source))
}}


int main(void) {

}