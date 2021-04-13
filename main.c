#include <stdio.h>

#include "rp_md.h"

int main(void) {
    int a, b;

    // Testing Mult
    a = 10;
    b = 10;
    printf("%d * %d = %d\n", a, b, rp_mult(a, b));

    a = -10;
    b = 10;
    printf("%d * %d = %d\n", a, b, rp_mult(a, b));

    a = 10;
    b = -10;
    printf("%d * %d = %d\n", a, b, rp_mult(a, b));

    a = -10;
    b = -10;
    printf("%d * %d = %d\n", a, b, rp_mult(a, b));

    // Testing Div
    a = 100;
    b = 10;
    printf("%d / %d = %d\n", a, b, rp_div(a, b));

    a = -10;
    b = 10;
    printf("%d / %d = %d\n", a, b, rp_div(a, b));

    a = 100;
    b = -10;
    printf("%d / %d = %d\n", a, b, rp_div(a, b));

    a = -10;
    b = -10;
    printf("%d / %d = %d\n", a, b, rp_div(a, b));

    return 0;
}