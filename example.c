#include <stdio.h>

#include "rp_md.h"

int main(void) {
    int a, b;

    a = 42;
    b = 18;
    printf("%d * %d = %d\n", a, b, rp_mult(a, b));
    printf("%d / %d = %d\n", a, b, rp_div(a, b));

    return 0;
}